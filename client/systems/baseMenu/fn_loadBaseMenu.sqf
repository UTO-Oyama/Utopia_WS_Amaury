#define ADD_CASH_VAL(amount) _index = _money_input lbAdd format ["%1$",amount];_money_input lbSetValue [_index,amount];

disableSerialization;

if !(isNull findDisplay 56321) exitWith {};

createDialog "baseMenu";

_display = findDisplay 56321;
_gun_store_btn = _display displayCtrl 2400;
_atm_btn = _display displayCtrl 2404;
_donate_btn = _display displayCtrl 1600;
_money_input = _display displayCtrl 2100;
_mortar_service_txt =  _display displayCtrl 1003;
_artillery_service_txt =  _display displayCtrl 1004;

ADD_CASH_VAL(1000);
ADD_CASH_VAL(2000);
ADD_CASH_VAL(3000);
ADD_CASH_VAL(4000);
ADD_CASH_VAL(5000);

_mortar_service_txt ctrlSetText "";
_artillery_service_txt ctrlSetText "";

_donate_btn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 56321;
	_donate_btn = _display displayCtrl 1600;
 	_money_input = _display displayCtrl 2100;
 	_val = _money_input lbValue (lbCurSel _money_input);
 	_playerMoney = player getVariable ["cmoney",0];
 	if(_playerMoney - _val < 0) exitWith {hintSilent "No enough money , sorry"};
 	_donate_btn ctrlEnable false;
	[call fn_getPlayerTeamStr,_val,player] remoteExec ["fn_addBaseMoney",2];
}];

_gun_store_btn ctrlEnable false;
_atm_btn ctrlEnable false;

_gun_store_btn ctrlAddEventHandler ["ButtonClick",{
	(findDisplay 56321) closeDisplay 0;
	[] spawn loadGunStore;
}];

_atm_btn ctrlAddEventHandler ["ButtonClick",{
	(findDisplay 56321) closeDisplay 0;
	[] spawn mf_items_atm_access;
}];

[player,call fn_getPlayerTeamStr] remoteExec ["fn_sendBaseMenu",2];



// [player,"BLUFOR"] remoteExec ["fn_sendBaseMenu",2]