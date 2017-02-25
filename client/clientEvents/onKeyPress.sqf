// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: onKeyPress.sqf
//	@file Author: [404] Deadbeat, [404] Costlyy, AgentRev
//	@file Created: 20/11/2012 05:19
//	@file Args:

private ["_key", "_shift", "_ctrl", "_alt", "_handled"];

_key = _this select 1;
_shift = _this select 2;
_ctrl = _this select 3;
_alt = _this select 4;

_handled = false;

// ********** Hardcoded keys **********
// keycodes are defined in client\clientEvents\customKeys.sqf

{
	_pkey = _x select 1;
	if(_pkey isEqualTo _key) then {
		_handled = switch (_x select 0) do { 
			case "ear_plugs" : { 
				if (soundVolume > 0.5) then {
					0.5 fadeSound 0.2;
					["You've inserted your earplugs.", 5] call mf_notify_client;
				}else{
					0.5 fadeSound 1;
					["You've taken out your earplugs.", 5] call mf_notify_client;
				};
				true
			}; 
			case "player_menu" : {  
				[] spawn loadPlayerMenu; true
			}; 
			case "p_tags" : {
				showPlayerNames = if (isNil "showPlayerNames") then { true } else { !showPlayerNames }; true
			};
			case "harvest" : {
				[] spawn craft_tryHarvest; true
			};
			case "level_menu" : {
				[] spawn loadLevelingManager; true
			}; 
			case "crafting_menu" : {
				[] spawn loadCraftingMenu; true
			};
			case "base_menu" : {
				[] spawn fn_loadArtilleryMenu; true
			}; 
			case "A3W_customKeys_adminMenu":{
				execVM "client\systems\adminPanel\checkAdmin.sqf"; true
			};
			default {false};
		};
	};
}foreach (profileNamespace getVariable "utopia_keys");

// ********** Action keys **********

// Parachute
if (!_handled && _key in actionKeys "GetOver") then
{
	if (!alive player) exitWith {};

	_veh = vehicle player;

	if (_veh == player) exitWith
	{
		// allow opening parachute only above 2.5m
		if ((getPos player) select 2 > 2.5) then
		{
			true call A3W_fnc_openParachute;
			_handled = true;
		};
	};

	// 1 sec cooldown after parachute is deployed so you don't start falling again if you double-tap the key
	if (_veh isKindOf "ParachuteBase" && (isNil "A3W_openParachuteTimestamp" || {diag_tickTime - A3W_openParachuteTimestamp >= 1})) then
	{
		moveOut player;
		_veh spawn
		{
			sleep 1;
			deleteVehicle _this;
		};
	};
};

// Eject
if (!_handled && _key in actionKeys "GetOut") then
{
	_veh = vehicle player;

	if (alive player && _veh != player) then
	{
		if (_ctrl && {_veh isKindOf 'Air' && !(_veh isKindOf 'ParachuteBase')}) then
		{
			[] spawn
			{
				if !(["Voulez vous vraiment vous éjecter ?", "Confirmer", true, true] call BIS_fnc_guiMessage) exitWith {};
				[[], fn_emergencyEject] execFSM "call.fsm";
			};
		};
	};
};

// Scoreboard
if (!_handled && _key in actionKeys "NetworkStats") then
{
	if (_key != 25 || // 25 = P
	   ((!_ctrl || {!(486539289 in actionKeys "NetworkPlayers") && isNil "TFAR_fnc_TaskForceArrowheadRadioInit"}) && // 486539289 = Left Ctrl + P
	   (!_shift || {!(704643042 in actionKeys "NetworkPlayers")}))) then // 704643042 = Left Shift + P
	{
		if (alive player && isNull (uiNamespace getVariable ["ScoreGUI", displayNull])) then
		{
			call loadScoreboard;
		};

		_handled = true;
	};
};

// Push-to-talk
if (!_handled && _key in call A3W_allVoiceChatKeys) then
{
	[true] call fn_voiceChatControl;
};

// UAV feed
if (!_handled && _key in (actionKeys "UavView" + actionKeys "UavViewToggle")) then
{
	if (["A3W_disableUavFeed"] call isConfigOn) then
	{
		_handled = true;
	};
};

// Override prone reload freeze (ffs BIS)
if (!_handled && _key in (actionKeys "MoveDown" + actionKeys "MoveUp")) then
{
	if ((toLower animationState player) find "reloadprone" != -1) then
	{
		[player, format ["AmovPknlMstpSrasW%1Dnon", [player, true] call getMoveWeapon]] call switchMoveGlobal;
		reload player;
	};
};

_handled
