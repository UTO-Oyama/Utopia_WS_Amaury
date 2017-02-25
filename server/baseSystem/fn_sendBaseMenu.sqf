/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _sender = param[0,objNull,[objNull]];
private _side = param[1,"",[""]];

([server_bases,_side] call bis_fnc_getFromPairs) remoteExecCall ["fn_updateBaseMenu",_sender];
