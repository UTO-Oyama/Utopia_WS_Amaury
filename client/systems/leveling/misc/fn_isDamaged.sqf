/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/

private _thing = param[0,objNull,[objNull]];
private _min = param [1,0.61,[0]];
private _need_repair = false;

if(isNull _thing || !(_thing isKindOf "AllVehicles")) exitWith {_need_repair};
if(count getAllHitPointsDamage _thing < 3) exitWith {_need_repair};
private _thing_damages = (getAllHitPointsDamage _thing) select 2;

{
	if(_x >= _min) then {
		_need_repair = true;
	};
}foreach _thing_damages;

if(getDammage _thing >= _min) then {
	_need_repair = true;
};

_need_repair