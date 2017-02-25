/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/
private _unit = _this;

if !(_unit isKindOf "man" || isNull _unit || !(alive _unit) || player distance _unit > 4) exitWith {};

if !([10,"Soin... %1%2"] call lvl_progressBar) exitWith {false};

_unit setDamage 0;

true

