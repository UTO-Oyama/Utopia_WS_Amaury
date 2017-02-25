// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2016 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: lockPick.sqf
//	@file Author: MercyfulFate, AgentRev, Gigatek
//	@file Description: Lockpick the nearest vehicle

#define DURATION 150
#define ANIMATION "AinvPknlMstpSlayWrflDnon_medic"

#define FORMAT2(STR1,STR2) format ["%1 %2", STR1, STR2]
#define ERR_FAILED "L'action a échoué !"
#define ERR_IN_VEHICLE "Vous ne pouvez pas faire ça dans un véhicule."
#define ERR_DISTANCE "Vous êtes trop loin du véhicule."
#define ERR_MOVED "Quelqu'un a bougé le véhicule."
#define ERR_TOWED "Quelqu'un a attaché le véhicule."
#define ERR_UNLOCKED "Le véhicule est déverouillé."
#define ERR_CREW "Quelqu'un est dans le véhicule."
#define ERR_DESTROYED "Le véhicule est détruit."
#define ERR_CANCELLED "Action annulée!"

private _vehicle = ["LandVehicle", "Air", "Ship"] call mf_nearest_vehicle;
private _checks =
{
	params ["_progress", "_vehicle"];
	private _failed = true;
	private _text = "";

	switch (true) do
	{
		case (!alive player): {}; // player is dead, no need for a notification
		case (vehicle player != player): { _text = FORMAT2(ERR_FAILED, ERR_IN_VEHICLE) };
		case (!alive _vehicle): { _text = FORMAT2(ERR_FAILED, ERR_DESTROYED) };
		case (locked _vehicle < 2): { _text = FORMAT2(ERR_FAILED, ERR_UNLOCKED) };
		case ({alive _x} count crew _vehicle > 0): { _text = FORMAT2(ERR_FAILED, ERR_CREW) };
		//case (!isNull (_vehicle getVariable ["R3F_LOG_est_deplace_par", objNull])): { _text = FORMAT2(ERR_FAILED, ERR_MOVED) };
		//case (!isNull (_vehicle getVariable ["R3F_LOG_est_transporte_par", objNull])): { _text = FORMAT2(ERR_FAILED, ERR_TOWED) };
		case (player distance _vehicle > (sizeOf typeOf _vehicle / 3) max 3): { _text = FORMAT2(ERR_FAILED, ERR_DISTANCE) };
		case (doCancelAction): { _text = ERR_CANCELLED; doCancelAction = false };
		default
		{
			_text = format ["crochetage %1%2 terminé", round(100 * _progress), "%"];
			_failed = false;
		};
	};

	[_failed, _text]
};

private _success = [DURATION, ANIMATION, _checks, [_vehicle]] call a3w_actions_start;

if (_success) then
{
	[_vehicle, 1] call A3W_fnc_setLockState; // Unlock
	_vehicle call fn_forceSaveVehicle;
	["Crochetage terminé !", 5] call mf_notify_client;
};

_success
