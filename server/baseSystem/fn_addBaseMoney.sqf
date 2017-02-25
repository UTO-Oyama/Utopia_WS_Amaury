/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

_side = param [0,"",[""]];
_amount = param [1,0,[0]];
_sender = param [2,objNull,[objNull]];

if !(_sender getVariable ["cmoney",0] >= _amount) exitWith {
	["Vous n'avez pas assez d'argent sur vous."] remoteExecCall ["ug_fnc_serverMessage",_sender];
};

_currMoney = [([server_bases,_side] call bis_fnc_getFromPairs),"Money"] call bis_fnc_getFromPairs;
_currLVL = [([server_bases,_side] call bis_fnc_getFromPairs),"Level"] call bis_fnc_getFromPairs;

_nextLvlArray = [_currLVL,_side] call fn_getLevelArray;

_currMoney = _currMoney	 + _amount;

if !(_nextLvlArray isEqualTo []) then {
	_neededMoney = _nextLvlArray select	2;
	if(_currMoney >= _neededMoney)	then {
		_currMoney	= _currMoney - _neededMoney;
		_currLVL = _currLVL	+ 1;
		[format["<t size='1.2' align='center'>Félicitations !</t><br/>Votre base est maintenant niveau %1",_currLVL + 1]] remoteExecCall ["ug_fnc_serverMessage",(if(_side == "BLUFOR") then {west}else{east})];
	};
};
[_side,_currMoney,_currLVL] call fn_saveBaseInfoToDatabase;
uiSleep 0.25;
[_side] call fn_loadBaseInfoFromDatabase;
_sender setVariable ["cMoney",(_sender getVariable ["cmoney",0]) - _amount,true];
[_sender,_side] call fn_sendBaseMenu;
