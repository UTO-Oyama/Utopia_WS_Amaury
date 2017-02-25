private _money = [_this,"Money"] call bis_fnc_getFromPairs;
private _level = [_this,"Level"] call bis_fnc_getFromPairs;
private _hasfired = [_this,"HasFired"] call bis_fnc_getFromPairs;

disableSerialization;

if (isNull findDisplay 56321) exitWith {};

_currBaseCfg = getArray (missionConfigFile >> "basesCfg" >> (call fn_getPlayerTeamStr) >> "levels");

private _return = [];

{
	if(_level isEqualTo (_x select 0)) then {
		_return = _x;
	};
}foreach _currBaseCfg;

_services = _return select 3;
_requiredMoney = _return select 2;

_display = findDisplay 56321;
_gun_store_btn = _display displayCtrl 2400;
_money_text = _display displayCtrl 1000;
_money_picture = _display displayCtrl 1200;
_money_input = _display displayCtrl 2100;
_donate_btn = _display displayCtrl 1600;
_mortar_service = _display displayCtrl 1001;
_artillery_service = _display displayCtrl 1002;
_mortar_service_txt =  _display displayCtrl 1003;
_artillery_service_txt =  _display displayCtrl 1004;
_atm_btn = _display displayCtrl 2404;
_level_header = _display displayCtrl 1005;



_progress = _display displayCtrl 2201;
_progress ctrlSetTextColor [0.25,0.51,0.96,1];
_level_header ctrlSetText format["Base niveau %1",_level];

_progress progressSetPosition (_money / _requiredMoney);
_progress ctrlSetTooltip "Quand la base a assez d'argent en stock , elle évolue";

_money_text ctrlSetText format ["%1$ investis dans la base.",_money];

if("s_gunStore" in _services) then {
	_gun_store_btn ctrlEnable true;
	_gun_store_btn ctrlSetTooltip "";
}else{
	_gun_store_btn ctrlEnable false;
	_gun_store_btn ctrlSetTooltip "Niveau de la base trop bas.";
};

if("s_mortar" in _services) then {
	_mortar_service ctrlSetText "Service de mortiers pas disponible";
	if(_hasfired) then {
		_mortar_service_txt ctrlSetText "Les mortiers sont en train de refroidir ...";
	}else{
		_mortar_service_txt ctrlSetText "Prêt à tirer !";
	};
}else{
	_mortar_service ctrlSetText "Service de mortiers pas disponible";
	_mortar_service ctrlSetTooltip "Niveau de la base trop bas.";
};

if("s_atm" in _services) then {
	_atm_btn ctrlEnable true;
	_atm_btn ctrlSetTooltip "";
}else{
	_atm_btn ctrlEnable false;
	_atm_btn ctrlSetTooltip "Niveau de la base trop bas.";
};

if("s_artillery" in _services) then {
	_artillery_service ctrlSetText "Artillery service available";
	if(_hasfired) then {
		_artillery_service_txt ctrlSetText "L'artillerie a déjà fait feu récemment ...";
	}else{
		_artillery_service_txt ctrlSetText "Prêt à tirer !";
	};
}else{
	_artillery_service ctrlSetText "Service d'artillerie pas disponible.";
	_artillery_service ctrlSetTooltip "Niveau de la base trop bas.";
};

_donate_btn ctrlEnable true;