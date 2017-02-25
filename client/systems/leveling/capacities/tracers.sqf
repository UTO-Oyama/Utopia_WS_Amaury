[player,1] call bis_fnc_traceBullets;

[] spawn {
	uiSleep 60;
	[player,0] call bis_fnc_traceBullets;
};