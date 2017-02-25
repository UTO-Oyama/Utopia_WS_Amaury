_groupName = param [0,"",[""]];
_player = param [1,objNull,[objNull]];

if !(_player getVariable ["cmoney",0] >= 50000) exitWith {
	["Vous n'avez pas assez d'argent."] remoteExec ["ug_fnc_serverMessage",_player];
};

_sql = format ["createGroup:""%1"":""%2"":""%3""",tolower str side _player,getPlayerUID _player,_groupName];
[_sql,1] call extDB_Database_async;

uiSleep 0.2;

[_groupName,_player] call fn_playerJoinGroup;

[format["Votre groupe (%1) a été créé.",_groupName]] remoteExec ["ug_fnc_serverMessage",_player];

_player setVariable ["cmoney",(_player getVariable ["cmoney",0]) - 50000,true];

_gp = createGroup (side _player);
_gp setGroupIdGlobal [_groupName];
_gp setVariable ["true_leader",getPlayerUID _player,true];
[_player] joinSilent _gp;