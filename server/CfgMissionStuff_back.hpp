/** centralization of server config by {utopia}Amaury **/

class cfgMissionVehicles {
	mission_APC[] = {"B_APC_Tracked_01_rcws_F","B_APC_Wheeled_01_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","I_APC_Wheeled_03_cannon_F"};
	mission_ArmedHeli[] = {"I_Heli_light_03_F","O_Heli_Light_02_F","B_Heli_Light_01_armed_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","B_Heli_Transport_03_black_F","B_CTRG_Heli_Transport_01_tropic_F","B_CTRG_Heli_Transport_01_sand_F","B_T_VTOL_01_armed_F","B_T_VTOL_01_armed_blue_F"};
	mission_CivHeli[] = {"B_Heli_Transport_03_unarmed_F","B_Heli_Light_01_stripped_F","B_Heli_Light_01_F","O_Heli_Light_02_unarmed_F","O_Heli_Transport_04_F","I_Heli_Transport_02_F","I_Heli_light_03_unarmed_F","I_C_Heli_Light_01_civil_F","B_T_VTOL_01_infantry_F"};
	mission_LightArmVeh[] = {"B_MRAP_01_gmg_F","B_MRAP_01_hmg_F","O_MRAP_02_hmg_F","O_MRAP_02_gmg_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F"};
	mission_MBT[] = {"B_APC_Tracked_01_AA_F","O_MBT_02_cannon_F","I_APC_tracked_03_cannon_F"}; //no MBT 
};

class cfgServerMissions
{
	class cfgBoxes {
		mission_USLaunchers[] =  {
			{"wep", {"launch_NLAW_F"}, 1 , 3},
			{"wep", {"launch_RPG32_F"}, 2 , 2},
			{"wep", {"launch_RPG7_F"}, 3 , 2},
			{"mag", {"HandGrenade"} , 4},
			{"mag", {"MiniGrenade"} , 6}
		};
		mission_USSpecial[] =  {

			{"wep", {"arifle_Katiba_F"}, 2 , 3},
			{"wep", {"arifle_Mk20_F"}, 1 , 3},
			{"wep", {"arifle_Mk20C_F"}, 1 , 3},
			{"wep", {"arifle_MXC_F"}, 2 , 3},
			{"wep", {"arifle_MX_F"}, 2 , 3},
			{"wep", {"hgun_PDW2000_F"}, 1 , 3},
			{"wep", {"SMG_05_F"}, 1, 3},
			{"wep", {"arifle_SDAR_F"}, 1, 3},
			{"wep", {"arifle_AKS_F"}, 2, 4},
			{"wep", {"SMG_05_F"}, 1, 3},
			{"wep", {"arifle_TRG20_F"}, 1, 3},
			{"wep", {"arifle_TRG21_F"}, 1, 3}
		};
		mission_Pistols[] =  {
			{"wep", {"hgun_ACPC2_F"},2,5},
			{"wep", {"hgun_P07_F"},2,5},
			{"wep", {"hgun_Rook40_F"},2,5}
		};
		mission_Main_A3snipers[] = {
			{"wep", {"arifle_MXM_F"}, 4 , 3},
			{"wep", {"srifle_DMR_01_F"}, 4 , 3},
			{"itm", "FirstAidKit" , 5},
			{"itm", "NVGoggles" , 5},
			{"itm", "ItemMap" , 2},
			{"itm", "optic_DMS" , 2},
			{"itm", "optic_Arco" , 1},
			{"itm", "optic_Aco" , 1},
			{"itm", "ItemGPS" , 2},
			{"wep", {"srifle_DMR_02_F"}, 4 , 3}
		};
	};
	class CfgTruck {
		main[] = {
			{"wep", {"arifle_Mk20_F"}, 1 , 2},
			{"wep", {"arifle_Mk20C_F"}, 1 , 2},
			{"wep", {"arifle_MXC_F"}, 2 , 4},

			{"mag", {"SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"} , 10},
			{"mag", {"MiniGrenade"} , 10},
			{"mag", {"SLAMDirectionalMine_Wire_Mag"} , 1},
			{"mag", {"APERSTripMine_Wire_Mag"} , 2},
			{"mag", {"DemoCharge_Remote_Mag"} , 1},

			{"itm", "FirstAidKit" , 20},
			{"itm", "NVGoggles" , 5},
			{"itm", "ItemMap" , 2},
			{"itm", "ItemGPS" , 2},
			{"itm", "MineDetector" , 2},
			{"itm", "optic_Hamr" , 2},
			{"itm", "optic_Arco" , 2},
			{"itm", "optic_Aco" , 2},
			{"itm", "optic_Holosight" , 2},
			{"itm", "optic_Holosight_smg" , 1},
			{"itm", "optic_MRCO" , 2},
			{"itm", "optic_Yorris" , 1},
			{"itm", "optic_MRD" , 1},
			{"itm", "acc_flashlight" , 2},
			{"itm", "acc_pointer_IR" , 2},
			{"itm", "muzzle_snds_acp" , 1},
			{"itm", "muzzle_snds_58_blk_F" , 1},
			{"itm", "muzzle_snds_H_khk_F" , 1},
			{"itm", "muzzle_snds_m_khk_F" , 1},
			{"itm", "muzzle_snds_B_khk_F" , 1}
		};
	};
};

class CfgVehicleSpawning {
	class vehicles {
		A3W_smallVehicles[] = {
			"C_Quadbike_01_F",
			{"B_Quadbike_01_F", "O_Quadbike_01_F", "I_Quadbike_01_F", "I_G_Quadbike_01_F"}
		};
		civilianVehicles[] = {
			"C_Hatchback_01_F",
			"C_Hatchback_01_sport_F",
			"C_SUV_01_F",
			{"C_Offroad_01_F", "I_G_Offroad_01_F"},
			{"C_Offroad_02_unarmed_F", "I_C_Offroad_02_unarmed_F"},
			{"C_Van_01_box_F", "C_Van_01_transport_F"}
		};
		lightMilitaryVehicles[] = {
			{"B_CTRG_LSV_01_light_F", "B_T_LSV_01_unarmed_F"},
			"O_T_LSV_02_unarmed_F",
			"I_G_Offroad_01_armed_F"
		};
		mediumMilitaryVehicles[] = {
			"B_MRAP_01_F"
		};
		waterVehicles[] = {
			"C_Scooter_Transport_01_F",
			"C_Boat_Civil_01_F"
		};

		staticWeaponsList[] = {};
		staticHeliList[] = {
			"C_Heli_Light_01_civil_F",
			"B_Heli_Light_01_F"
		};
		staticPlaneList[] = {};
		
		A3W_planeSpawnOdds = 0.5;
	};
	class vehicleInventory {
		vehicleItems[] = {
			"muzzle_snds_L", // 9mm
			"muzzle_snds_M", // 5.56mm
			"muzzle_snds_58_blk_F", // 5.8mm
			"muzzle_snds_acp", // .45 ACP
			"optic_Hamr",
			"optic_Aco",
			"optic_ACO_grn",
			"optic_aco_smg",
			"optic_Holosight",
			"optic_Holosight_smg",
			"acc_flashlight",
			"acc_pointer_IR",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		vehicleWeapons[] = {
			{"SMG_01_F" /*Vermin*/, "SMG_02_F" /*Sting*/, "SMG_05_F" /*MP5*/, "hgun_PDW2000_F"},
			{"arifle_TRG20_F", "arifle_TRG21_F"},
			{"arifle_Mk20C_F", "arifle_Mk20_F"},
			{"arifle_MXC_F", "arifle_MX_F"}
		};

	};
};