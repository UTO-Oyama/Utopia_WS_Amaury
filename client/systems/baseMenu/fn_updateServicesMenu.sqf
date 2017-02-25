private _money = [_this,"Money"] call bis_fnc_getFromPairs;
private _level = [_this,"Level"] call bis_fnc_getFromPairs;
private _hasfired = [_this,"HasFired"] call bis_fnc_getFromPairs;

disableSerialization;

_display = findDisplay	541235;

_art_btn = _display	displayCtrl	2400;
_mort_btn = _display displayCtrl 2401;

_currBaseCfg = getArray (missionConfigFile >> "basesCfg" >> (call fn_getPlayerTeamStr) >> "levels");

private _return = [];

{
	if(_level isEqualTo (_x select 0)) then {
		_return = _x;
	};
}foreach _currBaseCfg;

_services = _return select 3;

if(_hasfired) then {
	_art_btn ctrlEnable false;
	_mort_btn ctrlEnable false;
	_art_btn ctrlSetTooltip "Not available";
	_mort_btn ctrlSetTooltip "Not available";
}else{
	if("s_mortar" in _services) then {
		_mort_btn ctrlEnable true;
		_mort_btn ctrlSetTooltip "";
	}else{
		_mort_btn ctrlEnable false;
		_mort_btn ctrlSetTooltip "Not available";
	};

	if("s_artillery" in _services) then {
		_art_btn ctrlEnable true;
		_art_btn ctrlSetTooltip "";
	}else{
		_art_btn ctrlEnable false;
		_art_btn ctrlSetTooltip "Not available";
	};
};