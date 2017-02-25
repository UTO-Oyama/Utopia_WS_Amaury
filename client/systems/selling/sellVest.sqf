// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: sellVest.sqf
//	@file Author: AgentRev
//	@file Created: 20/08/2013 00:29

#define DEFAULT_SELL_VALUE 50

#include "sellIncludesStart.sqf";

if (isNull vestContainer player) exitWith
{
	playSound "FD_CP_Not_Clear_F";
	hint "Vous n'avez pas de veste vendre !";
};

storeSellingHandle = _this spawn
{
	_obj = vestContainer player;
	_sellValue = 0;
	_originalCargo = CARGO_STRING(_obj);

	// Get all the items
	_allObjItems = _obj call getSellPriceList;

	_objClass = vest player;
	_objName = getText (configFile >> "CfgWeapons" >> _objClass >> "displayName");

	_added = false;

	// Include vest in item list
	{
		if (_x select 1 == _objClass) exitWith
		{
			_allObjItems = [[_objClass, 1, _objName, GET_HALF_PRICE(_x select 2)]] + _allObjItems;
			_added = true;
		};
	} forEach (call vestArray);

	if (!_added) then
	{
		_allObjItems = [[_objClass, 1, _objName, DEFAULT_SELL_VALUE]] + _allObjItems;
	};

	// Calculate total value
	{
		if (count _x > 3) then
		{
			_sellValue = _sellValue + (_x select 3);
		};
	} forEach _allObjItems;

	// Add total sell value to confirm message
	_confirmMsg = format ["Vous gagnerez $%1 pour:<br/>", [_sellValue] call fn_numbersText];

	// Add item quantities and names to confirm message
	{
		_item = _x select 0;
		_itemQty = _x select 1;

		if (_itemQty > 0 && {count _x > 2}) then
		{
			_itemName = _x select 2;
			_confirmMsg = _confirmMsg + format ["<br/>%1 x  %2%3", _itemQty, _itemName, if (PRICE_DEBUGGING) then { format [" ($%1)", _x select 3] } else { "" }];
		};
	} forEach _allObjItems;

	// Display confirmation
	if ([parseText _confirmMsg, "Confirmer", "Vendre", true] call BIS_fnc_guiMessage) then
	{
		// Check if somebody else manipulated the cargo since the start
		if (CARGO_STRING(_obj) == _originalCargo) then
		{
			removeVest player;

			player setVariable ["cmoney", (player getVariable ["cmoney", 0]) + _sellValue, true];

			hint format ['Vous avez vendu "%1" pour $%2', _objName, _sellValue];
			playSound "FD_Finish_F";
		}
		else
		{
			playSound "FD_CP_Not_Clear_F";
			[format ['Le contenu de "%1" a changé, veuillez recommencer.', _objName], "Erreur"] call BIS_fnc_guiMessage;
		};
	};
};

#include "sellIncludesEnd.sqf";
