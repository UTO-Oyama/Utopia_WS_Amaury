/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/

private _rank = param [0,0];
private _levels = getArray (missionConfigFile >> "cfgLeveling" >> "levels");
private _return = 0;

if(_rank isEqualType 0) then {
	{
		if((_x select 0) isEqualTo _rank) exitWith {
			_return = _x select 2;
		};
	}forEach _levels;
}else{
	{
		if((_x select 1) isEqualTo _rank) exitWith {
			_return = _x select 2;
		};
	}forEach _levels;
};

_return