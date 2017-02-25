/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

private _cfgEntry = _this;
private _requiredClasses = getArray (_cfgEntry >> "allowedClasses");
private _correct = false;

{
	_class = _x select 0;
	_level = _x select 1;
	if(player_class == _class) then {
		_correct = true;
	};
}foreach _requiredClasses;

_correct