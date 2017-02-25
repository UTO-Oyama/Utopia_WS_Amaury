/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/

#include "defines.sqf"
disableSerialization;

if !(isNull findDisplay LEVELING_MENU_ID) exitWith {};

private _parent = (findDisplay 46) createDisplay "levelingMenu";
private _display = findDisplay LEVELING_MENU_ID;

private _classList = _display displayCtrl 1500;
private _validateBtn = _display displayCtrl 1600;

{
	_index = _classList lbAdd (getText (_x >> "name"));
	_classList lbSetData [_index,configName _x];
}forEach ("true" configClasses (missionConfigFile >> "CfgLeveling"));

_classList ctrlAddEventHandler ["LBSelChanged",{
	private _list = _this select 0;
	private _index = _this select 1;

	_display = ctrlParent _list;
	_classPic = _display displayCtrl 1200; 
	_classDesc = _display displayCtrl 1100; 

	_class = missionConfigFile >> "CfgLeveling" >> (_list lbData _index);

	_classPic ctrlSetText (gettext (_class >> "picture"));
	_classDesc ctrlSetStructuredText parseText (gettext (_class >> "description"));
}];

_validateBtn ctrlAddEventHandler ["ButtonClick",{
	private _display = findDisplay LEVELING_MENU_ID;
	private _classlist = _display displayCtrl 1500;
	player_class = _classlist lbData (lbCurSel _classlist);
	_display closeDisplay 0;

	//small fix
	player setVariable ["Class",player_class,true];
	player setVariable ["Level",player_level,true];
	player_level = 1;
	player_xp = 0;
}];

_classlist lbSetCurSel 0;

_display