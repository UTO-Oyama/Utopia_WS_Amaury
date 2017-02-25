/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _pos = _this select	0;
private	 _side	= _this	 select	 1;

for "_i" from 1 to 10 do { // 10 shells
_rand_x = floor (random 40);
_rand_y = floor (random 40);


_shell = "Sh_120mm_HE" createvehicle [(_pos select 0) + (_rand_x * (random 2 - 1)),(_pos select 1) + (_rand_y * (random 2 - 1)),(_pos select 2) + 1500];
_shell setVectorDirandUp [[0,0,-1],[0.1,0.1,1]]; 
_shell setVelocity [0,0,-100];
uiSleep 4;
};

_side spawn {
uiSleep (getNumber (missionConfigFile >> "basesCfg" >> "mortar_reload"));
_infos = [server_bases,_this] call bis_fnc_getFromPairs;
[_infos,"hasFired",false] call bis_fnc_setToPairs;
[server_bases,_this,_infos] call bis_fnc_setToPairs;
};



_shell = "12Rnd_125mm_HE" createvehicle (position player);
_shell setVectorDirandUp [[0,0,-1],[0.1,0.1,1]]; 
_shell setVelocity [0,0,-100];