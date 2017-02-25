/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _side = param[0,"",[""]];
private _level = param[1,0,[0]];

_prefix = switch (_side) do { 
	case "BLUFOR" : { "b" }; 
	case "OPFOR" : { "o" }; 
};

[] call compile preprocessFileLineNumbers format ["server\baseSystem\bases\%1_level_%2.sqf",_prefix,_level];


_base_pos = getMarkerPos (getText (missionConfigFile >> "basesCFG" >> _side >> "marker"));

private _type = switch (_prefix) do { 
	case "o" : { "Flag_CSAT_F" }; 
	case "b" : { "Flag_UNO_F" }; 
	default {  "Flag_UNO_F" }; 
};


private _obj = _type createVehicle _base_pos;
_obj setPosATL _base_pos;
_obj allowDamage false;

_trueSide = if(_prefix == "o") then {east}else{west};

_obj setVariable ["allowDamage", false, true]; 
_obj setVariable ["a3w_spawnBeacon", true, true]; 
_obj setVariable ["R3F_LOG_disabled", true]; 
_obj setVariable ["side",_trueSide, true]; 
_obj setVariable ["ownerName", "MAIN BASE" , true]; 
_obj setVariable ["ownerUID", "__SERVER__", true]; 
_obj setVariable ["packing", false, true]; 
_obj setVariable ["groupOnly", false, true];
_obj setVariable ["A3W_skipAutoSave", true];

pvar_spawn_beacons pushBack _obj;
publicVariable "pvar_spawn_beacons";