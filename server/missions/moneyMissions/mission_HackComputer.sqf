if (!isServer) exitwith {};
#include "moneyMissionDefines.sqf";

private ["_vehicle", "_vehicleName", "_vehDeterminer" , "_nbUnits" , "_ignoreAiDeaths" , "_vehicle_2" , "_objects"];

_setupVars =
{
	_missionType = "Hack d'ordinateur";
	_locationsArray = MissionSpawnMarkers;
	_nbUnits = 12;
	_ignoreAiDeaths = true;
};

_setupObjects =
{
	_missionPos = markerPos _missionLocation;

	_objects = ["Computer1", _missionPos, 0] call createOutpost;
	_vehicle = nearestObject [_missionPos,"Land_Laptop_device_F"];
	_desk = nearestObject [_missionPos,"Land_TableDesk_F"];
	_bigBuilding = nearestObject [_missionPos,"Land_Cargo_HQ_V4_F"];

	_desk setPosATL [getPosATL _bigBuilding select 0,getPosATL _bigBuilding select 1,(getPosATL _bigBuilding select 2) + 5];
	_vehicle setPosATL [getPosATL _desk select 0,getPosATL _desk select 1,(getPosATL _desk select 2) + 1.5];

	_aiGroup = createGroup CIVILIAN;
	[_aiGroup, _missionPos, _nbUnits] call createCustomGroup;

	_missionHintText = format ["Un ordinateur contenant des mots de passe de comptes banquaires se trouvant au Panama a été transféré à un camp rebelle local <br/> Hackez-le et profitez de l'argent !"];
};

_waitUntilMarkerPos = nil;
_waitUntilExec = nil;
_waitUntilCondition = {!alive _vehicle};
_waitUntilSuccessCondition = {_vehicle getVariable ["hacked",false]};

_failedExec =
{
	{ deleteVehicle _x } forEach _objects;
};

_successExec =
{
	deleteVehicle _vehicle;
	{ _x setVariable ["R3F_LOG_disabled", false, true] } forEach _objects;
	[_locationsArray, _missionLocation, _objects] call setLocationObjects;
	_cash = createVehicle ["Land_Money_F",_vehicle, [], 0, "CAN_COLLIDE"];
	_cash setVariable ["cmoney", (floor random 50000) + (floor ((random count allPlayers) * 750)), true];
	_cash setVariable ["owner", "world", true];
	[_cash] remoteExec ["A3W_fnc_setItemCleanup", 2];
	_successHintMessage = format ["L'ordinateur a été hacké , à vous l'argent !"];
};

_this call moneyMissionProcessor;