/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/

private _return = false;

{
	_requiredLvl = getNumber (_x >> 'requiredLevel');
	if(configName _x == _this && player_level >= _requiredLvl) exitWith {
		_return = true;
	};
}foreach ("true" configClasses (missionConfigFile >> "CfgLeveling" >> player_class >> "capacities"));


_return	