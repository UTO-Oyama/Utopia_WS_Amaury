// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: mission_AirWreck.sqf
//	@file Author: [404] Deadbeat, [404] Costlyy, AgentRev
//	@file Created: 08/12/2012 15:19

if (!isServer) exitwith {};
#include "sideMissionDefines.sqf"

private ["_nbUnits", "_wreckPos", "_wreck", "_itemClassName","_selectedBoxes","_hodor"];

_setupVars =
{
	_missionType = "Epave de véhicule";
	_locationsArray = [["bunker",false]];
	_nbUnits = 16;
};

_setupObjects =
{
	_missionPos = markerPos _missionLocation;

	_hodor = createVehicle ['Land_Mil_WallBig_Corner_F',[11060,11492,0],[],0,'NONE']; // HOLD THE DOOR
	_hodor setPosATL [11060,11492,0]; 
	_hodor setDir 312.919; 
	_hodor setVectorDirAndUp [[-0.732317,0.680964,0],[0,0,1]]; 
	_hodor setVariable ["R3F_LOG_disabled",true,true]; 

	_randWreck = [
		"tank_part",
		"car_part",
		"apc_part",
		"chopper_part",
		"heavy_chopper_part"
	] call bis_fnc_selectRandom;

	_selectedBoxes = nearestObjects [_missionPos,["ReammoBox_F"],100];

	{_x setVariable ["virtualItems",[[],0],true];}foreach _selectedBoxes;

	_itemClassName = _randWreck;

	_aiGroup = createGroup CIVILIAN;
	[_aiGroup, _missionPos, _nbUnits] call createDefenseForces;

	_missionHintText = format["Des caisses contenant des fournitures et une epave de véhicule en bon état ont été stockées dans un bunker millitaire haute sécurité , leur contenu pourrait vous êtes utile."];
};

_waitUntilMarkerPos = nil;
_waitUntilExec = nil;
_waitUntilCondition = nil;

_failedExec =
{
	deleteVehicle _hodor;
};

_successExec =
{

	{
		private _itemsInBox = [];
		private _rand = floor random 100;

		switch (true) do { 
			case (_rand > 70) : { _itemsInBox pushBack "metal_plate"; _itemsInBox pushBack "metal_plate"; _itemsInBox pushBack "metal"; 						   }; 
			case (_rand > 60) : { _itemsInBox pushBack "repairkit"; 																							   }; 
			case (_rand > 50) : { _itemsInBox pushBack "jerrycanfull"; _itemsInBox pushBack "jerrycanfull"; 													   };
			case (_rand > 20) : { _itemsInBox pushBack "cannedfood"; _itemsInBox pushBack "cannedfood"; _itemsInBox pushBack "water"; _itemsInBox pushBack "water";};
		};

		_x setVariable ["virtualItems",[_itemsInBox,count _itemsInBox],true];
	}foreach _selectedBoxes;

	_thewreck = _selectedBoxes select 0;
	_thewreck setVariable ["virtualItems",[[_itemClassName],1],true];

	_successHintMessage = "Le bunker a été nettoyé , bon boulot !";
	deleteVehicle _hodor;
};

_this call sideMissionProcessor;
