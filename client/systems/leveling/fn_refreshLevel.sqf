_levels_count = count (getArray (missionConfigFile >> "CfgLeveling" >> "levels"));
_maxLvlXP = player_level call lvl_getRequiredXP;

if(player_xp >= _maxLvlXP) then {
	if(player_level < _levels_count) then {
		player_xp = player_xp - _maxLvlXP;
		player_level = player_level + 1;
		hint parseText format ["<t size='1.2' align='center'>Bravo !</t> <br/> Vous êtes maintenant au niveau %1",player_level];
		player setVariable ["Level",player_level,true];
	}else{
		player_xp = _maxLvlXP;
	};
};
while {player_xp < 0} do {
	if(player_level != 0) then {
		_maxLvlXP = (player_level - 1) call lvl_getRequiredXP;
		player_level = player_level - 1;
		player_xp = _maxLvlXP + player_xp;
		player setVariable ["Level",player_level,true];
	}else{
		player_xp = 0;
	};
};