for "_i" from 0 to 120 do {
	player setDammage (getDammage player - 0.1);
	{
		if(isPlayer _x && alive _x && playerSide isEqualTo side _x) then {
			player setDammage (getDammage player - 0.05);
		};
	}foreach (player nearEntities ["Man",5]);
	uiSleep 0.5;
};