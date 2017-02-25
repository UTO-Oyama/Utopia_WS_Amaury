// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//@file Version: 1.0
//@file Name: heal.sqf
//@file Author: MercyfulFate
//@file Created: 21/7/2013 16:00
//@file Description: Try to heal yourself with a medkit

#define DURATION 5
#define ANIMATION "AinvPknlMstpSlayWrflDnon_medic"
#define ERR_NOT_ENOUGH_HEALTH "Vous êtes trop endommagé pour l'utiliser."
#define ERR_FULL_HEALTH "Vous êtes en pleine forme , pourquoi en gâcher un ?."
#define ERR_CANCELLED "Soin annulé"
private ["_checks", "_success"];
if (damage player < 0.005) exitWith {
	[ERR_FULL_HEALTH, 5] call mf_notify_client;
	false;
};

if (damage player > 0.255) exitWith {
	[ERR_NOT_ENOUGH_HEALTH, 5] call mf_notify_client;
	false;
};

_checks = {
	private ["_progress","_failed", "_text"];
	_progress = _this select 0;
	_text = "";
	_failed = true;
	switch (true) do {
		case (!alive player): {}; // player is dead, no need for a notification
		case (damage player > 0.255): {_text = ERR_NOT_ENOUGH_HEALTH};
		case (damage player < 0.005): {_text = ERR_FULL_HEALTH};
		case (doCancelAction): {_text = ERR_CANCELLED; doCancelAction = false;};
		default {
			_text = format["Kit de soin appliqué à %1%2", round(100 * _progress), "%"];
			_failed = false;
		};
	};
	[_failed, _text];
};

_success = [DURATION, ANIMATION, _checks, []] call a3w_actions_start;

if (_success) then {
	player setDamage 0;
	["Vous êtes soigné !", 5] call mf_notify_client;
};
_success;
