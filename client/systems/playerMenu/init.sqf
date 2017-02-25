// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
#include "dialog\player_sys.sqf";
if(isnil {player getVariable "cmoney"}) then {player setVariable["cmoney",0,true];};
if(dialog) exitwith{};

disableSerialization;

private["_Dialog","_foodtext","_watertext","_moneytext","_mvalue","_rogue"];

_playerDialog = createDialog "playerSettings";

_Dialog = findDisplay playersys_DIALOG;
_foodtext = _Dialog displayCtrl 1001;
_watertext = _Dialog displayCtrl 1002;
_moneytext = _Dialog displayCtrl 1006;
_levelIcon = _Dialog displayCtrl 1203;
_banktext = _Dialog displayCtrl 1007;
_healthText = _Dialog displayCtrl 1000;
_mvalue = _Dialog displayCtrl 2100;
_groupButton = _Dialog displayCtrl 1604;
_classText = _Dialog displayCtrl 1003;

_levelIcon ctrlSetText ([player_level] call lvl_getLevelImage);
_classText ctrlSetText format ["%1 niveau %2",(player_class call lvl_classToString),player_level];
_healthText ctrlSettext format["%1 / 100", round((1 - damage player) * 100)];
_foodtext ctrlSettext format["%1 / 100", round(hungerLevel)];
_watertext ctrlSetText format["%1 / 100", round(thirstLevel)];
_moneytext ctrlSetText format["%1$", [player getVariable ["cmoney", 0]] call fn_numbersText];
_banktext ctrlSetText format["%1$", [player getVariable ["bmoney", 0]] call fn_numbersText];

{
	_mvalue lbSetData [_mvalue lbAdd format ["$%1", [_x] call fn_numbersText], str _x];
} forEach [5, 15, 20, 25, 50, 75, 100, 200, 300, 400, 500, 1000, 2000, 3000, 4000, 5000, 10000, 15000, 20000, 25000, 50000];

[] spawn
{
	disableSerialization;
	_dialog = findDisplay playersys_DIALOG;
	while {!isNull _dialog} do
	{
		_escMenu = findDisplay 49;
		if (!isNull _escMenu) exitWith { _escMenu closeDisplay 0 }; // Force close Esc menu if open
		sleep 0.1;
	};
};
