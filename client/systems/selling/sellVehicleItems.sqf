// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: sellVehicleItems.sqf
//	@file Author: AgentRev

#define VEHICLE_MAX_SELLING_DISTANCE 50

#include "sellIncludesStart.sqf";

storeSellingHandle = _this spawn
{
	_storeNPC = _this select 0;
	_veh = objectFromNetId (player getVariable ["lastVehicleRidden", ""]);

	if (isNull _veh) exitWith
	{
		playSound "FD_CP_Not_Clear_F";
		["Le véhicule n'a pas été trouvé.", "Erreur"] call  BIS_fnc_guiMessage;
	};

	_objClass = typeOf _veh;
	_objName = getText (configFile >> "CfgVehicles" >> _objClass >> "displayName");

	_checkValidDistance =
	{
		if (_veh distance _storeNPC > VEHICLE_MAX_SELLING_DISTANCE) then
		{
			playSound "FD_CP_Not_Clear_F";
			[format ['"%1" est trop loin de %2m du magasin.', _objName, VEHICLE_MAX_SELLING_DISTANCE], "Erreur"] call  BIS_fnc_guiMessage;
			false
		} else { true };
	};

	_checkValidOwnership =
	{
		if (!local _veh) then
		{
			playSound "FD_CP_Not_Clear_F";
			[format ["Vous n'êtes pas le propriétaire du ""%1"", essayez d'aller en conducteur.", _objName], "Erreur"] call  BIS_fnc_guiMessage;
			false
		} else { true };
	};

	if (!call _checkValidDistance) exitWith {};
	if (!call _checkValidOwnership) exitWith {};

	_sellValue = 0;
	_originalCargo = CARGO_STRING(_veh);

	// Get all the items
	_allVehItems = _veh call getSellPriceList;

	if (count _allVehItems == 0) exitWith
	{
		playSound "FD_CP_Not_Clear_F";
		[format ["""%1"" ne contient pas d'items valides à vendre.", _objName], "Erreur"] call BIS_fnc_guiMessage;
	};

	// Calculate total value
	{
		if (count _x > 3) then
		{
			_sellValue = _sellValue + (_x select 3);
		};
	} forEach _allVehItems;

	// Add total sell value to confirm message
	_confirmMsg = format ["Vous gagnerez $%1 pour:<br/>", [_sellValue] call fn_numbersText];

	// Add item quantities and names to confirm message
	{
		_item = _x select 0;
		_itemQty = _x select 1;

		if (_itemQty > 0 && {count _x > 2}) then
		{
			_itemName = _x select 2;
			_confirmMsg = _confirmMsg + format ["<br/>%1 x  %2%3", _itemQty, _itemName, if (PRICE_DEBUGGING) then { format [" ($%1)", [_x select 3] call fn_numbersText] } else { "" }];
		};
	} forEach _allVehItems;

	// Display confirmation
	if ([parseText _confirmMsg, "Confirmer", "Vendre", true] call BIS_fnc_guiMessage) then
	{
		if (!call _checkValidDistance) exitWith {};
		if (!call _checkValidOwnership) exitWith {};

		// Check if somebody else manipulated the cargo since the start
		if (CARGO_STRING(_veh) != _originalCargo) exitWith
		{
			playSound "FD_CP_Not_Clear_F";
			[format ['le contenu de "%1" a changé, veuillez réessayer.', _objName], "Erreur"] call BIS_fnc_guiMessage;
		};

		// Have to spawn clearing commands due to mysterious game crash...
		_clearing = _veh spawn
		{
			clearBackpackCargoGlobal _this;
			clearMagazineCargoGlobal _this;
			clearWeaponCargoGlobal _this;
			clearItemCargoGlobal _this;
		};

		waitUntil {scriptDone _clearing};

		player setVariable ["cmoney", (player getVariable ["cmoney", 0]) + _sellValue, true];

		hint format ["Vous avez vendu l'inventaire de ""%1"" pour $%2", _objName, _sellValue];
		playSound "FD_Finish_F";
	};
};

#include "sellIncludesEnd.sqf";
