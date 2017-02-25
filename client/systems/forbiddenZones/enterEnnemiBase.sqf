player_inforbiddenZone = true;

"Zone interdite" hintC "Vous êtes dans la zone ennemie , sortez avant d'être tué !";
[] spawn {
	private _counter = 60;
	while {player_inforbiddenZone && _counter >= 0} do {
		if(!player_inforbiddenZone) exitWith {};
		hintSilent format["Vous allez mourrir dans %1 secondes...",_counter];
		_counter = _counter - 1;
		uiSleep 1;
	};
	if(player_inforbiddenZone) then {
		player setDamage 1;
	};
};