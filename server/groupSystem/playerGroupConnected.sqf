private _unit = param [0,objNull,[objNull]];

_teamId = [format["getPlayerTeam%1:%2",tolower str side _unit,getPlayerUID _unit], 2] call extDB_Database_async;
_teamId = _teamId select 0;

if(isNil "_teamId") exitWith {};
if(_teamId < 1) exitWith {};

_team = [format["getGroup:%1",_teamId], 2] call extDB_Database_async;

_teamName = _team select 3;

private _found = false;

{	
	if(groupId _x isEqualTo _teamName) then {
		_found = true;
		[_unit] joinSilent _x;
	};
}foreach allGroups;

if(!_found) then {
	_gp = createGroup (side _unit);
	_gp setGroupIdGlobal [_teamName];
	_gp setVariable ["true_leader",_team select 2,true];
	[_unit] joinSilent _gp;
};