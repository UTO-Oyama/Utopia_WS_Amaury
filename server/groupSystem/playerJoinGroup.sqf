_groupName = param [0,"",[""]];
_player = param [1,objNull,[objNull]];

if(_player isEqualTo objNull) exitWith {};

_groupId = [format["getGroupByName:""%1""",_groupName],2] call extDB_Database_async;

_groupId = _groupId select 0;

if(isNil "_groupId") exitWith {};

_sql = format ["playerAddGroup%1:%2:%3",tolower str side _player,_groupId,getPlayerUID _player];	
[_sql,1] call extDB_Database_async;											

[_player] call fn_playerGroupConnected;

[format["Vous avez rejoint le groupe %1.",_groupName]] remoteExec ["ug_fnc_serverMessage",_player];