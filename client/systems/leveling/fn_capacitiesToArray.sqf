("true" configClasses (missionConfigFile >> "CfgLeveling" >> player_class >> "capacities")) apply {
	[
	configName _x,
	getText (_x >> "name"),
	getText (_x >> "icon"),
	getText (_x >> "description"),
	getNumber (_x >> "requiredLevel"),
	getNumber (_x >> 'active'),
	getText (_x >> 'actionScript'),
	getNumber (_x >> 'key'),
	getNumber (_x >> 'coolDown')
	]
};