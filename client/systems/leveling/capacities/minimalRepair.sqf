/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/
private _vehicle = objNull;

{
	if(([_x,0.3] call lvl_isDamaged) && alive _x) then {
		_vehicle = _x;
	};
}foreach (nearestObjects[player,['LandVehicle','Air'],6]);

if !(_vehicle isKindOf "allvehicles" || isNull _vehicle || player distance _vehicle > 10) exitWith {};

if !([45,"Réparation... %1%2","Acts_carFixingWheel"] call lvl_progressBar) exitWith {false};


private _HPD = getAllHitPointsDamage _vehicle;
private _hitPoints = _HPD select 0;
private _hitPointsDmg = _HPD select 2;

{
	_currHitPoint = _x;
	_currDamage = _hitPointsDmg select _forEachIndex;

	if(_currDamage > 0.5) then {
		_vehicle setHitPointDamage [_currHitPoint,0.5];
	};
}forEach _hitPoints;

true

