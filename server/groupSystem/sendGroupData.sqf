_player = param[0,objNull,[objNull]];

_gpName = groupId (group _player);

_data = [format["getGroupByName:""%1""",_gpName],2] call extDB_Database_async;
_id = _data select 0;

if(isNil "_id") exitWith {
	[] remoteExec ["fn_createGroupMenu",_player];
};

_members = [format["getAllGroupMembers%1:%2",tolower str side _player,_id],2,true] call extDB_Database_async;

[_data,_members] remoteExec ["fn_updateGroupMenu",_player];