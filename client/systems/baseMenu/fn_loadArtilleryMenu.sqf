disableSerialization;
if !(isNull	findDisplay	541235) exitWith {};

createDialog "RemoteServiceMenu";

_display = findDisplay	541235;

_art_btn = _display	displayCtrl	2400;
_mort_btn = _display displayCtrl 2401;

_art_btn ctrlEnable false;
_mort_btn ctrlEnable false;

_art_btn ctrlAddEventHandler	["ButtonClick",{
	(findDisplay 541235) closeDisplay 0;
	openMap [true,false];
	hintSilent "Please select the artillery fire position.";
	["art_pos","onMapSingleClick", {
		[_pos,(call fn_getPlayerTeamStr),player] remoteExec ["fn_artilleryRequest",2];
		["art_pos","onMapSingleClick"] call bis_fnc_removeStackedEventHandler;
},  []] call BIS_fnc_addStackedEventHandler;
}];

_mort_btn	ctrlAddEventHandler	["ButtonClick",{
	(findDisplay 541235) closeDisplay 0;
	openMap [true,false];
	hintSilent "Please select the mortar fire position.";
	["art_pos","onMapSingleClick", {
		[_pos,(call fn_getPlayerTeamStr),player] remoteExec ["fn_mortarRequest",2];
		["art_pos","onMapSingleClick"] call bis_fnc_removeStackedEventHandler;
},  []] call BIS_fnc_addStackedEventHandler;
}];

[player,(call fn_getPlayerTeamStr)] remoteExecCall ["fn_sendServicesMenu",2];