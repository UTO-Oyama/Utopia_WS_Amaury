_groupName = param [0,"",[""]];

_groupData = [format["getGroupByName:""%1""",_groupName],2] call extDB_Database_async;
_groupSide = _groupData select 1;
_groupId = _groupData select 0;


[format["deleteGroup:""%1""",_groupName],1] call extDB_Database_async;
[format["deleteGroupMembers%1:%2",_groupSide,_groupId],1] call extDB_Database_async;

{
	if(groupId _x == _groupName) then {
		{ [_x] joinSilent (createGroup side _x)}foreach units _x;
		deleteGroup _x;														
	};
}foreach allGroups;																															