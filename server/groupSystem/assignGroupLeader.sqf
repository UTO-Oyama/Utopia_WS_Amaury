_sender = param[0,objNull,[objNull]];
_newLeader = param[1,"",[""]];

_sql = format ["getGroupByName:""%1""",groupId group _sender];
_id = ([_sql,2] call extDB_Database_async) select 0;

if(isNil "_id") exitWith {};

_sql = format ["assignNewGroupLeader:""%1"":%2",_newLeader,_id];
[_sql,1] call extDB_Database_async;

(group _sender) setVariable ["true_leader",_newLeader,true];

["Vous n'êtes plus le leader."] remoteExec ["ug_fnc_serverMessage",_sender];
