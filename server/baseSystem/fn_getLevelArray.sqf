/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _levelNbr = param [0,0,[0]];
private _side = param [1,"",[""]];
private _return = [];

_currBaseCfg = getArray (missionConfigFile >> "basesCfg" >> _side >> "levels");

{
	if(_levelNbr isEqualTo (_x select 0)) then {
		_return = _x;
	};
}foreach _currBaseCfg;

_return