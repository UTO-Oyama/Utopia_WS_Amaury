/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _pos = _this select 0;
private _side = _this select 1;
private _sender = _this select 2;

_infos = [server_bases,_side] call bis_fnc_getFromPairs;
_hasFired = [_infos,"hasFired"] call bis_fnc_getFromPairs;

_base_pos = getMarkerPos (getText (missionConfigFile >> "basesCFG" >> _side >> "marker"));
_max_dist = getNumber (missionConfigFile >> "basesCFG" >> "artillery_max_dist");

if(_pos distance _base_pos > _max_dist) exitWith {
	["La position choisie est hors de portée."] remoteExecCall ["ug_fnc_serverMessage",_sender];
};

if(_pos distance _base_pos < 200) exitWith {
	["La position choisie est trop près de votre base."] remoteExecCall ["ug_fnc_serverMessage",_sender];
};


if(_hasFired) exitWith {
	["L'artillerie a déjà tiré récemment."] remoteExecCall ["ug_fnc_serverMessage",_sender];
};

_infos = [server_bases,_side] call bis_fnc_getFromPairs;
[_infos,"hasFired",true] call bis_fnc_setToPairs;
[server_bases,_side,_infos] call bis_fnc_setToPairs;



[format["<t size='1.2' align='center'>Warning</t><br/>%1 a demandé un tir d'artillerie de votre base.<br/>Préparez vous à l'impact !",_sender]] remoteExecCall ["ug_fnc_serverMessage",(if(_side == "BLUFOR") then {west}else{east})];

[_pos,_side] spawn fn_artilleryFire;