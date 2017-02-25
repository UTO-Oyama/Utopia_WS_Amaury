/**
@Author : [utopia] Amaury
@Creation : 2#/11/16
@Modification : 27/11/16
@Description : 
**/
disableSerialization;

if !(isNull findDisplay 34563) exitWith {};

createDialog "LevelingMenuManager";
private _display = findDisplay 34563;

private _progressBar = _display displayCtrl 2301;
private _progress_text = _display displayCtrl 1004;

private _player_header = _display displayCtrl 1104;

private _rank = _display displayCtrl 1200;

private _comp_1 = _display displayCtrl 1201;
private _comp_2 = _display displayCtrl 1202;
private _comp_3 = _display displayCtrl 1203;
private _comp_4 = _display displayCtrl 1204;



private _comp_1_bck =  _display displayCtrl 2002;
private _comp_1_h = _display displayCtrl 1001;
private _comp_1_desc = _display displayCtrl 1100; 
private _comp_1_activate = _display displayCtrl 1600; 
private _comp_1_key = _display displayCtrl 1601; 

private _comp_2_bck =  _display displayCtrl 2003;
private _comp_2_h = _display displayCtrl 1000;
private _comp_2_desc = _display displayCtrl 1101; 
private _comp_2_activate = _display displayCtrl 1602; 
private _comp_2_key = _display displayCtrl 1603; 

private _comp_3_bck =  _display displayCtrl 2004;
private _comp_3_h = _display displayCtrl 1002;
private _comp_3_desc = _display displayCtrl 1102; 
private _comp_3_activate = _display displayCtrl 1604; 
private _comp_3_key = _display displayCtrl 1605; 

private _comp_4_bck =  _display displayCtrl 2005;
private _comp_4_h = _display displayCtrl 1003;
private _comp_4_desc = _display displayCtrl 1103; 
private _comp_4_activate = _display displayCtrl 1606; 
private _comp_4_key = _display displayCtrl 1607; 

_capacitiesComponents = [
	[_comp_1,_comp_1_desc,_comp_1_h,_comp_1_bck,_comp_1_activate,_comp_1_key],
	[_comp_2,_comp_2_desc,_comp_2_h,_comp_2_bck,_comp_2_activate,_comp_2_key],
	[_comp_3,_comp_3_desc,_comp_3_h,_comp_3_bck,_comp_3_activate,_comp_3_key],
	[_comp_4,_comp_4_desc,_comp_4_h,_comp_4_bck,_comp_4_activate,_comp_4_key]
];

private _capacities = [] call lvl_capacitiesToArray;

while {count _capacitiesComponents <= count _capacities} do {
	_capacities deleteAt (count _capacities - 1);
};

{
	_icon = _x select 0;
	_capName = _x select 2;
	_capDesc = _x select 1;
	_background = _x select 3;
	_activate_btn = _x select 4;
	_key_btn = _x select 5;

	if(_forEachIndex > (count _capacities - 1)) then {
		_background ctrlShow false;
		_icon ctrlShow false;
		_capDesc ctrlShow false;
		_capName ctrlShow false;
		_activate_btn ctrlShow false;
		_key_btn  ctrlShow false;
	}else{
		_capacity = _capacities select _forEachIndex;
		_key = [profileNamespace getVariable "utopia_keys",_capacity select 0] call bis_fnc_getFromPairs;

		_icon ctrlSetText (_capacity select 2);
		_capName ctrlSetText (_capacity select 1);
		_isActive = [false,true] select (_capacity select 5);

		if(_isActive) then {
			_active = ([uiNamespace getVariable "utopia_activeCapacities",_capacity select 0,[0,true]] call bis_fnc_getFromPairs) select 1;
			_activate_btn ctrlEnable !_active;
			_activate_btn ctrlAddEventHandler ["ButtonClick",format ["[nil,%1,nil,nil,nil] call lvl_Keyshandle",_key]];

			_key_btn ctrlAddEventHandler ["ButtonClick",format ["
			_this spawn {
				_key = [findDisplay 34563] call lvl_chooseKey;
				if(_key != 0) then {
					[profileNamespace getVariable 'utopia_keys','%1',_key] call bis_fnc_setToPairs;
					(findDisplay 34563) displayCtrl %2 ctrlSetText (keyName _key);
				};
			}
			",_capacity select 0,ctrlIDC _key_btn]];

			_key = [profileNamespace getVariable "utopia_keys",_capacity select 0] call bis_fnc_getFromPairs;
			_key_btn ctrlSetText (keyName _key);
			
		}else{
			_activate_btn ctrlEnable false;
			_key_btn ctrlEnable false;
			_activate_btn ctrlSetTooltip "Cette capacité est passive , elle n'a pas besoin d'être activée.";
			_key_btn ctrlSetTooltip "Cette capacité est passive , elle n'a pas besoin de touche d'activation.";
		};

		if(!((_capacity select 0) call lvl_haveCapacity)) then {
			_capDesc ctrlSetStructuredText parseText format ["<t size ='2' align='center'>NIVEAU %1 REQUIS</t>",_capacity select 4];
			_background ctrlSetBackgroundColor [84 / 255,69 / 255,69 / 255,1];
			_icon ctrlSetTextColor [1,0,0,1];
			_activate_btn ctrlShow false;
			_key_btn  ctrlShow false;
		}else{
			_capDesc ctrlSetStructuredText parseText (_capacity select 3);
		};
	};
}forEach _capacitiesComponents;

_rank ctrlSetText ([player_level] call lvl_getLevelImage);
_rank ctrlSetTextColor [1, 1, 0, 1];

_maxLvlXP = player_level call lvl_getRequiredXP;

_progressBar ctrlSetTextColor [0.25,0.51,0.96,1];
_progressBar progressSetPosition (player_xp / _maxLvlXP);
_progress_text ctrlSetText format ["%1 / %2",player_xp,_maxLvlXP];
_player_header ctrlSetStructuredText parseText format ["<t size='1.6' align='center'>%1 %2</t>",player_class call lvl_classToString,name player];