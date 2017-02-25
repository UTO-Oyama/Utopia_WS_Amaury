// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: customKeys.sqf
//	@file Author: AgentRev

// Load custom keys from profile

private ["_varName", "_defKeys", "_customKeys", "_isValid", "_voiceKeys"];


if(isnil {profileNamespace getVariable "utopia_keys"}) then {
	profileNamespace setVariable ["utopia_keys",[]];
};

{
	_keys = profileNamespace getVariable "utopia_keys";
	_key = [_keys,_x select 0,0] call bis_fnc_getFrompairs;
	if(_key == 0) then {
		[_keys,_x select 0,_x select 1] call bis_fnc_setToPairs;
	};
}
forEach
[
	["A3W_customKeys_adminMenu", 22], // 22 = U
    ["base_menu",61],
	["harvest", 35], // 35 = H
	["player_menu", 41], // 41 = Tilde (above Tab)
	["p_tags", 199], // 199 = Home, 219 = LWin, 220 = RWin
	["ear_plugs", 207], // 207 = End
	["level_menu",59],
	["crafting_menu",60]
];

_voiceKeys = [];
{ _voiceKeys append actionKeys _x } forEach
[
	"NextChannel",
	"PrevChannel",
	"PushToTalk",
	"PushToTalkAll",
	"PushToTalkCommand",
	"PushToTalkDirect",
	"PushToTalkGroup",
	"PushToTalkSide",
	"PushToTalkVehicle"
];

A3W_allVoiceChatKeys = compileFinal str _voiceKeys;
