/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

_side = param [0,"BLUFOR",[""]];

_result = [format ["getServerBase:%1",_side], 2] call extDB_Database_async;
_level = _result param [0];
_money = _result param [1];


_infos = [server_bases,_side] call bis_fnc_getFromPairs;
[_infos,"Level",_level] call bis_fnc_setToPairs;
[_infos,"Money",_money] call bis_fnc_setToPairs;
[server_bases,_side,_infos] call bis_fnc_setToPairs;