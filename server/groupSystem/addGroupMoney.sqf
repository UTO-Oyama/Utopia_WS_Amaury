_player = param [0,objNull,[objNull]];
_amount = param [1,0,[0]];

_sql = format ["getGroupByName:""%1""",groupId group _player];
_groupData = [_sql,2] call extDB_Database_async;

_id = _groupData select 0;
_money = _groupData select 4;

if(isNil "_id") exitWith {};

_money = _money + _amount;

if(_player getVariable ["cmoney",0] >= _amount) then {
	_player setVariable ["cmoney",(_player getVariable ["cmoney",0]) - _amount,true];
	
	_sql = format ["setGroupMoney:%1:%2",_money,_id];
	[_sql,1] call extDB_Database_async;
};

[_player] call fn_sendGroupData;