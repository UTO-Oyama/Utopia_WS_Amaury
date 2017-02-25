disableSerialization;
createDialog "controlsMenu";

_display = findDisplay 12333;

_pMenu = _display displayCtrl 1600;
_earPlugs = _display displayCtrl 1601;
_tags = _display displayCtrl 1602;
_harvest = _display displayCtrl 1603;
_class = _display displayCtrl 1604;
_crafting = _display displayCtrl 1605;
_base = _display displayCtrl 1606;

_keys = profileNamespace getVariable "utopia_keys";

_pMenu ctrlSetText keyName ([_keys,"player_menu",0] call bis_fnc_getFromPairs);
_earPlugs ctrlSetText keyName ([_keys,"ear_plugs",0] call bis_fnc_getFromPairs);
_tags ctrlSetText keyName ([_keys,"p_tags",0] call bis_fnc_getFromPairs);
_harvest ctrlSetText keyName ([_keys,"harvest",0] call bis_fnc_getFromPairs);
_class ctrlSetText keyName ([_keys,"level_menu",0] call bis_fnc_getFromPairs);
_crafting ctrlSetText keyName ([_keys,"crafting_menu",0] call bis_fnc_getFromPairs);
_base ctrlSetText keyName ([_keys,"base_menu",0] call bis_fnc_getFromPairs);

_pMenu ctrlAddEventHandler ["ButtonClick",{ //button click event normally returns control but , no ...
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","player_menu",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1600) ctrlSetText (keyName _key);
		};
	};
}];
_earPlugs ctrlAddEventHandler ["ButtonClick",{ 
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","ear_plugs",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1601) ctrlSetText (keyName _key);
		};
	};
}];
_tags ctrlAddEventHandler ["ButtonClick",{
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","p_tags",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1602) ctrlSetText (keyName _key);
		};
	};
}];
_harvest ctrlAddEventHandler ["ButtonClick",{
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","harvest",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1603) ctrlSetText (keyName _key);
		};
	};
}];
_class ctrlAddEventHandler ["ButtonClick",{
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","level_menu",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1604) ctrlSetText (keyName _key);
		};
	};
}];
_crafting ctrlAddEventHandler ["ButtonClick",{
	[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","crafting_menu",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1605) ctrlSetText (keyName _key);
		};
	};
}];
_base ctrlAddEventHandler ["ButtonClick",{
		[] spawn {
		disableSerialization;
		_display = findDisplay 12333;
		_key = [_display] call lvl_chooseKey;
		if(_key != 0) then {
			[profileNamespace getVariable "utopia_keys","base_menu",_key] call bis_fnc_setToPairs;
			(_display displayCtrl 1606) ctrlSetText (keyName _key);
		};
	};
}];