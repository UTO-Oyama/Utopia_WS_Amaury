private ["_player","_newLeaderUID"];

_player = param[0,objNull,[objNull]];

_oldGroup = group _player;
_data = [format["getGroupByName:""%1""",groupID _oldGroup],2] call extDB_Database_async;
_id = _data select 0;
_leaderUID = _data select 2;
_groupname = _data select 3;

if(isNil "_id") exitWith {};
_members = [format["getAllGroupMembers%1:%2",tolower str side _player,_id],2,true] call extDB_Database_async;

{ // try to asign a new leader
	if !(_x select 0 isEqualTo getPlayerUID _player) then {
		_newLeaderUID = _x select 0;
	};
}foreach _members;

_sql = format ["playerLeaveGroup%1:%2",tolower str side _player,getPlayerUID _player];
[_sql,1] call extDB_Database_async;

[_player] joinSilent (createGroup side _player);

if(_leaderUID isEqualTo getPlayerUID _player) then { // leader is leaving
	if(isNil "_newLeaderUID") then { //no new leader found , group is empty => delete group
		[_groupname] call fn_deleteGroupRequest;
	}else{	
		[_player,_newLeaderUID] call fn_assignGroupLeader;
	};
};