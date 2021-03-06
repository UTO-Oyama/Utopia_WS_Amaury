// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: sellVehicle.sqf
//	@file Author: AgentRev
//  @file edited: CRE4MPIE
//  @credits to: Cael817, lodac, Wiking

#include "sellIncludesStart.sqf";

storeSellingHandle = _this spawn
{
	#define CHOPSHOP_PRICE_RELATIONSHIP 2
	#define VEHICLE_MAX_SELLING_DISTANCE 50

	private ["_vehicle", "_type", "_price", "_confirmMsg", "_text"];

	_storeNPC = _this select 0;
	_vehicle = objectFromNetId (player getVariable ["lastVehicleRidden", ""]);
	_type = typeOf _vehicle;
	_price = 1000;
	_objClass = typeOf _vehicle;
	_objName = getText (configFile >> "CfgVehicles" >> _objClass >> "displayName");

	if (isNull _vehicle) exitWith
	{
		playSound "FD_CP_Not_Clear_F";
		["Votre véhicule n'existe plus.", "Erreur"] call  BIS_fnc_guiMessage;
	};

	if (_vehicle distance _storeNPC > VEHICLE_MAX_SELLING_DISTANCE) exitWith
	{
		playSound "FD_CP_Not_Clear_F";
		[format [' Le "%1" doit être à %2m du magasin.', _objname, VEHICLE_MAX_SELLING_DISTANCE], "Erreur"] call  BIS_fnc_guiMessage;
	};

	{
		if (_type == _x select 1) then
		{
			_price = _x select 2;
			_price = _price / CHOPSHOP_PRICE_RELATIONSHIP;
		};
	} forEach (call allVehStoreVehicles);

	if (!isNil "_price") then
	{
		// Add total sell value to confirm message
		_confirmMsg = format ["Vendre %1 vous donnera $%2<br/>", _objName, _price];
		//_confirmMsg = _confirmMsg + format ["<br/>1 x %1", _objName];

		// Display confirm message
		if ([parseText _confirmMsg, "Confirmer", "Vendre", true] call BIS_fnc_guiMessage) then
		{
			sleep 1;

			if (_vehicle distance _storeNPC > VEHICLE_MAX_SELLING_DISTANCE) exitWith
			{
				playSound "FD_CP_Not_Clear_F";
				[format ['Le %1 a déjà été vendu !', _objname, VEHICLE_MAX_SELLING_DISTANCE], "Error"] call  BIS_fnc_guiMessage;
			};

			deleteVehicle _vehicle;

			player setVariable ["cmoney", (player getVariable ["cmoney",0]) + _price, true];
			[format ['Le %1 a été vendu !', _objname, VEHICLE_MAX_SELLING_DISTANCE], "Thank You"] call  BIS_fnc_guiMessage;

			if (["A3W_playerSaving"] call isConfigOn) then
			{
				[] spawn fn_savePlayerData;
			};
		};
	}
	else
	{
		hint parseText "<t color='#FFFF00'>Une erreur est servenue .</t><br/>La vente du véhicule a été annulée.";
		playSound "FD_CP_Not_Clear_F";
	};
};

#include "sellIncludesEnd.sqf";
