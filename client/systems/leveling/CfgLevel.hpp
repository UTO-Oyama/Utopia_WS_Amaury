/**
@Author : [utopia] Amaury
@Creation : 13/11/16
@Modification : 27/11/16
@Description : 
**/

#define true 1
#define false 0

class CfgLeveling {
	level_xp_multiplicator = 1.5; // not used

	levels[] = {
		{0,"RECRUE","\A3\ui_f\data\GUI\Cfg\Ranks\private_gs.paa",100},
		{1,"SOLDAT","\A3\ui_f\data\GUI\Cfg\Ranks\private_gs.paa",2000},
		{2,"CAPORAL","\A3\ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa",5000},
		{3,"SERGENT","\A3\ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa",7500},
		{4,"Major","\A3\ui_f\data\GUI\Cfg\Ranks\major_gs.paa",10000},
		{5,"Lieutenant","\A3\ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa",15000},
		{6,"Capitaine","\A3\ui_f\data\GUI\Cfg\Ranks\captain_gs.paa",17000},
		{7,"Colonel","\A3\ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa",19000},
		{8,"Général","\A3\ui_f\data\GUI\Cfg\Ranks\general_gs.paa",20000}
	};

	class Medic {
		name = "Médecin";
		picture = "\A3\EditorPreviews_f\Data\cfgVehicles\B_medic_F.jpg";
		icon = "\A3\characters_f\data\ui\icon_medic_ca.paa";
		description = "/!\ Les classes sont permanentes (changement via item spécial)<br/>Un médic , spécialisé dans les soins et les armes lourdes (mitrailleuses).<br/>(Le matériel de spawn ne correspond pas à l'image)";

		class capacities {
			class med_tech {
				name = "Techniques Médicales";
				icon = "\A3\ui_f\data\IGUI\Cfg\HoldActions\holdAction_reviveMedic_ca.paa";
				description = "Vous permet de prodiguer des premiers soins et de réanimer les morts.";
				requiredLevel = 2;

				active = false;
			};
			class med_tent {
				name = "Régénération expérimentale";
				icon = "client\icons\health.paa";
				description = "Régénère votre vie et celle de vos alliés proches.<br/>Durée : 1 minute | Rechargement : 10 minutes";
				requiredLevel = 4;

				active = true;
				coolDown = 600; 	//begin at the end of actionScript
				key = 32;
				actionScript = "client\systems\leveling\capacities\med_regen.sqf";
			};
			class no_breathe {
				name = "Visée parfaite";
				icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\target_ca.paa";
				description = "Plus de viseur qui tremble , plus de problèmes.<br/>Durée : 3 minutes | Rechargement : 15 minutes";
				requiredLevel = 6;

				coolDown = 900; 	
				key = 0;
				actionScript = "client\systems\leveling\capacities\noBreathe.sqf";
				
				active = true;
			};
		};

		class gear {
			class west {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_ACPC2_F";

				magazines[] = {{"9Rnd_45ACP_Mag",2}};
				items[] = {{"FirstAidKit",1}};

				uniform = "U_B_CombatUniform_mcam";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_khk";
			};
			class east {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_ACPC2_F";

				magazines[] = {{"9Rnd_45ACP_Mag",2}};
				items[] = {{"FirstAidKit",1}};

				uniform = "U_O_CombatUniform_ocamo";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_brn";
			};
			class guer {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_ACPC2_F";

				magazines[] = {{"9Rnd_45ACP_Mag",2}};
				items[] = {{"FirstAidKit",1}};

				uniform = "U_I_CombatUniform";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_oli";
			};
		};
	};

	class Assault {
		name = "Fusillier";
		picture = "\A3\EditorPreviews_f\Data\cfgVehicles\B_soldier_AAA_F.jpg";
		icon = "\A3\ui_f\data\IGUI\Cfg\Hints\Rifle_ca.paa";
		description = "/!\ Les classes sont permanentes (changement via item spécial)<br/>Un soldat d'assaut , armes à craft et capacités assez polyvalentes.<br/>(Le matériel de spawn ne correspond pas à l'image)";

		class capacities {
			class reload_instinct {
				name = "Rechargement auto";
				icon = "\A3\ui_f\data\IGUI\Cfg\Actions\reload_ca.paa";
				description = "Recharge automatiquement dès que le chargeur est vide.";
				requiredLevel = 2;

				active = false;
			};
			class xpPlus {
				name = "Boost d'expérience";
				icon = "\A3\ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_sidebar_hide_up.paa";
				description = "2x plus d'expérience.";
				requiredLevel = 4;

				active = false;
			};
			class no_breathe {
				name = "Visée parfaite";
				icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\target_ca.paa";
				description = "Plus de viseur qui tremble , plus de problèmes.<br/>Durée : 3 minutes | Rechargement : 15 minutes";
				requiredLevel = 6;

				coolDown = 900; 	
				key = 0;
				actionScript = "client\systems\leveling\capacities\noBreathe.sqf";
				
				active = true;
			};
		};



		class gear {
			class west {
				primaryWeapon = "arifle_Mk20_F";
				secondaryWeapon = "";
				handgunWeapon = "";

				magazines[] = {{"30Rnd_556x45_Stanag",1}};
				items[] = {{"",0}};

				uniform = "U_B_CombatUniform_mcam";
				goggles = "";
				headgear = "H_HelmetB_grass";
				vest = "V_TacVest_khk";
			};
			class east {
				primaryWeapon = "arifle_Mk20_F";
				secondaryWeapon = "";
				handgunWeapon = "";

				magazines[] = {{"30Rnd_556x45_Stanag",1}};
				items[] = {{"",0}};

				uniform = "U_O_CombatUniform_ocamo";
				goggles = "";
				headgear = "H_HelmetB_grass";
				vest = "V_TacVest_brn";
			};
			class guer {
				primaryWeapon = "arifle_Mk20_F";
				secondaryWeapon = "";
				handgunWeapon = "";

				magazines[] = {{"30Rnd_556x45_Stanag",1}};
				items[] = {{"",0}};

				uniform = "U_I_CombatUniform";
				goggles = "";
				headgear = "H_HelmetB_grass";
				vest = "V_TacVest_oli";
			};
		};

	};

	class Engineer {
		name = "Ingénieur";
		picture = "\A3\EditorPreviews_f\Data\cfgVehicles\B_engineer_F.jpg";
		icon = "\A3\characters_f\data\ui\icon_eng_ca.paa";
		description = "/!\ Les classes sont permanentes (changement via item spécial)<br/>Un ingénieur , spécialisé dans la démolition et la réparation. Il possède dans sa liste de craft une large variété de lance-roquette et d'explosifs.<br/>(Le matériel de spawn ne correspond pas à l'image)";

		class capacities {
			class basic_repair {
				name = "Réparation de fortune";
				icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa";
				description = "Permet de remettre un véhicule en état de marche.";
				requiredLevel = 2;

				active = false;
			};
			class recuperation {
				name = "Récupération";
				icon = "\A3\ui_f\data\IGUI\Cfg\Actions\engine_on_ca.paa";
				description = "Récupère 2x plus de métal dans les épaves.<br/>Permet également de démonter les armes ,mines,explosifs...";
				requiredLevel = 4;

				active = false;
			};
		};



		class gear {
			class west {
				primaryWeapon = "SMG_02_F";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2},{"30Rnd_9x21_Mag_SMG_02",2}};
				items[] = {{"",0}};

				uniform = "U_B_CombatUniform_mcam_vest";
				goggles = "";
				headgear = "H_HelmetB_light";
				vest = "V_TacVest_khk";
			};
			class east {
				primaryWeapon = "SMG_02_F";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2},{"30Rnd_9x21_Mag_SMG_02",2}};
				items[] = {{"",0}};

				uniform = "U_O_CombatUniform_ocamo";
				goggles = "";
				headgear = "H_HelmetB_light";
				vest = "V_TacVest_brn";
			};
			class guer {
				primaryWeapon = "SMG_02_F";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2},{"30Rnd_9x21_Mag_SMG_02",2}};
				items[] = {{"",0}};

				uniform = "U_IG_Guerilla2_2";
				goggles = "";
				headgear = "H_HelmetB_light";
				vest = "V_TacVest_oli";
			};
		};
	};

	class Sniper {
		name = "Sniper";
		picture = "\A3\EditorPreviews_f\Data\cfgVehicles\B_sniper_F.jpg";
		icon = "\A3\ui_f\data\IGUI\Cfg\Hints\Sniper_ca.paa";
		description = "/!\ Les classes sont permanentes (changement via item spécial)<br/>Un snipeur , possède tous les snipeurs longue/moyenne/courte distance dans sa liste de crafting et possède des capacités utiles au tir.<br/>(Le matériel de spawn ne correspond pas à l'image)";

		class capacities {
			class stable_shot {
				name = "Tir stable";
				icon = "\A3\ui_f\data\GUI\Cfg\Hints\Recoil_ca.paa";
				description = "Moins de recul lors des tirs.";
				requiredLevel = 2;

				active = false;
			};
			class tracers {
				name = "Aide ballistique";
				icon = "\A3\ui_f\data\GUI\Cfg\Hints\Tracers_CA.paa";
				description = "On voit la trajectoire de vos balles . Pas mal non ?<br/>Durée : 1 minute | Rechargement : 5 minutes";
				requiredLevel = 4;

				coolDown = 300; 	
				key = 0;
				actionScript = "client\systems\leveling\capacities\tracers.sqf";
				
				active = true;
			};
			class no_breathe {
				name = "Visée parfaite";
				icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\target_ca.paa";
				description = "Plus de viseur qui tremble , plus de problèmes.<br/>Durée : 3 minutes | Rechargement : 15 minutes";
				requiredLevel = 6;

				coolDown = 900; 	
				key = 0;
				actionScript = "client\systems\leveling\capacities\noBreathe.sqf";
				
				active = true;
			};
		};


		class gear {
			class west {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2}};
				items[] = {{"",0}};

				uniform = "U_B_T_Sniper_F";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_khk";
			};
			class east {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2}};
				items[] = {{"",0}};

				uniform = "U_O_T_Sniper_F";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_brn";
			};
			class guer {
				primaryWeapon = "";
				secondaryWeapon = "";
				handgunWeapon = "hgun_P07_F";

				magazines[] = {{"16Rnd_9x21_Mag",2}};
				items[] = {{"",0}};

				uniform = "U_B_T_Sniper_F";
				goggles = "";
				headgear = "";
				vest = "V_TacVest_oli";
			};
		};
	};
};