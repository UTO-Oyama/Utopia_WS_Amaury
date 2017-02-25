/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

class basesCfg {
	mortar_reload = 15 * 60;
	mortar_max_dist = 2000;
	artillery_reload = 30 * 60;
	artillery_max_dist = 4000;

	class BLUFOR {
		marker = "west_main_base";
		levels[] = {
			{1,"b_level_1.sqf",100000,{"s_atm"}},
			{2,"b_level_2.sqf",300000,{"s_gunStore","s_mortar","s_atm"}},
			{3,"b_level_3.sqf",500000,{"s_gunStore","s_artillery","s_mortar","s_atm"}},
			{4,"b_level_4.sqf",40000,{"s_gunStore","s_mortar"}}
			//{5,"b_level_5.sqf",50000,{"s_gunStore","s_artillery"}}
		};

	};
	class OPFOR {
		marker = "east_main_base";
		levels[] = {
			{1,"o_level_1.sqf",100000,{"s_atm"}},
			{2,"o_level_2.sqf",300000,{"s_gunStore","s_mortar","s_atm"}},
			{3,"o_level_3.sqf",500000,{"s_gunStore","s_artillery","s_mortar","s_atm"}},
			{4,"o_level_4.sqf",40000,{"s_gunStore","s_mortar"}}
			//{5,"o_level_5.sqf",50000,{"s_gunStore","s_artillery"}}
		};
	};	


}; 