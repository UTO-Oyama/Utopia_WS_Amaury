class M0 {
	name = "5.56 mm 30rnd STANAG";		// receipe name in menu
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}}; 	// [class,requiredLevel]
	craftingTime = 5;					// time required in seconds to craft this item

	required[] = {{"metal",1}};	// [itemType,number]
	result[] = {"30Rnd_556x45_Stanag",2}; 					// [itemType,number]

	craft_description = "auto"; //description
};
class M1 {
	name = "5.56 mm 30rnd Tracer (Red)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_556x45_Stanag_Tracer_Red",1};

	craft_description = "auto";
};
class M2 {
	name = "5.56 mm 30rnd Tracer (Green)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_556x45_Stanag_Tracer_Green",1};

	craft_description = "auto";
};
class M3 {
	name = "5.56 mm 20Rnd Dual Purpose Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"20Rnd_556x45_UW_mag",1};

	craft_description = "auto";
};
class M4 {
	name = "6.5 mm 30Rnd STANAG Mag";
	allowedClasses[] = {{"Medic",3},{"Sniper",3},{"Assault",2},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_65x39_caseless_mag",1};

	craft_description = "auto";
};
class M5 {
	name = "6.5 mm 30Rnd Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",4},{"Sniper",4},{"Assault",3},{"Engineer",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_65x39_caseless_green",1};

	craft_description = "auto";
};
class M7 {
	name = "7.62 mm 20Rnd Mag";
	allowedClasses[] = {{"Medic",3},{"Sniper",2},{"Assault",3},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"20Rnd_762x51_Mag",1};

	craft_description = "auto";
};
class M8 {
	name = ".408 7Rnd LRR Mag";
	allowedClasses[] = {{"Sniper",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"7Rnd_408_Mag",1};

	craft_description = "auto";
};
class M9 {
	name = "12.7 mm 5Rnd Mag";
	allowedClasses[] = {{"Sniper",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"5Rnd_127x108_Mag",1};

	craft_description = "auto";
};
class M10 {
	name = "6.5 mm 100Rnd Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"100Rnd_65x39_caseless_mag",1};

	craft_description = "auto";
};
class M11 {
	name = "6.5 mm 100Rnd Tracer (Red) Mag";
	allowedClasses[] = {{"Medic",3},{"Sniper",3},{"Assault",2},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"100Rnd_65x39_caseless_mag_Tracer",1};

	craft_description = "auto";
};
class M12 {
	name = "6.5 mm 200Rnd Belt";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"200Rnd_65x39_cased_Box",1};

	craft_description = "auto";
};
class M13 {
	name = "6.5 mm 200Rnd Belt Tracer (Yellow)";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"200Rnd_65x39_cased_Box_Tracer",1};

	craft_description = "auto";
};
class M14 {
	name = "9 mm 30Rnd Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Mag",1};

	craft_description = "auto";
};
class M15 {
	name = "9 mm 30Rnd Reload Tracer (Red) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Red_Mag",1};

	craft_description = "auto";
};
class M16 {
	name = "9 mm 30Rnd Reload Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Green_Mag",1};

	craft_description = "auto";
};
class M17 {
	name = "9 mm 16Rnd Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"16Rnd_9x21_Mag",1};

	craft_description = "auto";
};
class M18 {
	name = "9 mm 30Rnd Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Mag_SMG_02",1};

	craft_description = "auto";
};
class M19 {
	name = "9 mm 30Rnd Reload Tracer (Red) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red",1};

	craft_description = "auto";
};
class M20 {
	name = "9 mm 30Rnd Reload Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green",1};

	craft_description = "auto";
};
class M21 {
	name = "9 mm 16Rnd Reload Tracer (Red) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"16Rnd_9x21_red_Mag",1};

	craft_description = "auto";
};
class M22 {
	name = "9 mm 16Rnd Reload Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"16Rnd_9x21_green_Mag",1};

	craft_description = "auto";
};
class M23 {
	name = "RPG-42 Rocket";
	allowedClasses[] = {{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"RPG32_F",1};

	craft_description = "auto";
};
class M24 {
	name = "RPG-42 HE Rocket";
	allowedClasses[] = {{"Medic",4},{"Sniper",4},{"Assault",4},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"RPG32_HE_F",1};

	craft_description = "auto";
};
class M26 {
	name = "PCML Missile";
	allowedClasses[] = {{"Engineer",4}};
	craftingTime = 5;

	required[] = {{"metal",3}};
	result[] = {"NLAW_F",1};

	craft_description = "auto";
};
class M27 {
	name = "40 mm HE Grenade Round";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"1Rnd_HE_Grenade_shell",1};

	craft_description = "auto";
};
class M28 {
	name = "40 mm 3Rnd HE Grenade";
	allowedClasses[] = {{"Assault",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"3Rnd_HE_Grenade_shell",1};

	craft_description = "auto";
};
class M29 {
	name = "Smoke Round (White)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"1Rnd_Smoke_Grenade_shell",1};

	craft_description = "auto";
};
class M30 {
	name = "3Rnd 3GL Smoke Rounds (White)";
	allowedClasses[] = {{"Assault",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"3Rnd_Smoke_Grenade_shell",1};

	craft_description = "auto";
};
class M31 {
	name = "Smoke Round (Red)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"1Rnd_SmokeRed_Grenade_shell",1};

	craft_description = "auto";
};
class M32 {
	name = "3Rnd 3GL Smoke Rounds (Red)";
	allowedClasses[] = {{"Assault",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"3Rnd_SmokeRed_Grenade_shell",1};

	craft_description = "auto";
};
class M33 {
	name = "Smoke Round (Green)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"1Rnd_SmokeGreen_Grenade_shell",1};

	craft_description = "auto";
};
class M34 {
	name = "3Rnd 3GL Smoke Rounds (Green)";
	allowedClasses[] = {{"Assault",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"3Rnd_SmokeGreen_Grenade_shell",1};

	craft_description = "auto";
};
class M37 {
	name = "Smoke Grenade (White)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"SmokeShell",1};

	craft_description = "auto";
};
class M38 {
	name = "Smoke Grenade (Red)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"SmokeShellRed",1};

	craft_description = "auto";
};
class M39 {
	name = "Smoke Grenade (Green)";
	allowedClasses[] = {{"Medic",2},{"Sniper",2},{"Assault",2},{"Engineer",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"SmokeShellGreen",1};

	craft_description = "auto";
};
class M40 {
	name = "6.5 mm 200Rnd Belt Case";
	allowedClasses[] = {{"Medic",2}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"200Rnd_65x39_Belt",1};

	craft_description = "auto";
};
class M41 {
	name = "6.5 mm 200Rnd Belt Case Tracer (Red)";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"200Rnd_65x39_Belt_Tracer_Red",1};

	craft_description = "auto";
};
class M42 {
	name = "6.5 mm 200Rnd Belt Case Tracer (Green)";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"200Rnd_65x39_Belt_Tracer_Green",1};

	craft_description = "auto";
};
class M43 {
	name = "Designator Batteries";
	allowedClasses[] = {{"Sniper",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"Laserbatteries",1};

	craft_description = "auto";
};
class M44 {
	name = ".45 ACP 30Rnd Vermin Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_45ACP_Mag_SMG_01",1};

	craft_description = "auto";
};
class M45 {
	name = ".45 ACP 30Rnd Vermin Tracers (Red) Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",1};

	craft_description = "auto";
};
class M46 {
	name = ".45 ACP 30Rnd Vermin Tracers (Green) Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",1};

	craft_description = "auto";
};
class M47 {
	name = ".45 ACP 9Rnd Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"9Rnd_45ACP_Mag",1};

	craft_description = "auto";
};
class M48 {
	name = "7.62 mm 150Rnd Box";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_762x51_Box",1};

	craft_description = "auto";
};
class M49 {
	name = "7.62 mm 150Rnd Tracer (Green) Box";
	allowedClasses[] = {{"Medic",5}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_762x51_Box_Tracer",1};

	craft_description = "auto";
};
class M50 {
	name = "7.62 mm 150Rnd Box";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_762x54_Box",1};

	craft_description = "auto";
};
class M51 {
	name = "7.62 mm 150Rnd Tracer (Green) Box";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_762x54_Box_Tracer",1};

	craft_description = "auto";
};
class M52 {
	name = "Titan AA Missile";
	allowedClasses[] = {{"Engineer",5}};
	craftingTime = 5;

	required[] = {{"metal",3}};
	result[] = {"Titan_AA",1};

	craft_description = "auto";
};
class M53 {
	name = "Titan AP Missile";
	allowedClasses[] = {{"Engineer",5}};
	craftingTime = 5;

	required[] = {{"metal",3}};
	result[] = {"Titan_AP",1};

	craft_description = "auto";
};
class M54 {
	name = "Titan AT Missile";
	allowedClasses[] = {{"Engineer",5}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"Titan_AT",1};

	craft_description = "auto";
};
class M57 {
	name = ".45 ACP 11Rnd Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"11Rnd_45ACP_Mag",1};

	craft_description = "auto";
};
class M58 {
	name = ".45 ACP 6Rnd Cylinder";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"6Rnd_45ACP_Cylinder",1};

	craft_description = "auto";
};
class M60 {
	name = "7.62mm 10Rnd Mag";
	allowedClasses[] = {{"Sniper",4},{"Assault",5}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_762x54_Mag",1};

	craft_description = "auto";
};
class M61 {
	name = "12.7mm 5Rnd APDS Mag";
	allowedClasses[] = {{"Sniper",6}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"5Rnd_127x108_APDS_Mag",1};

	craft_description = "auto";
};
class M62 {
	name = "IR Grenade [NATO]";
	allowedClasses[] = {{"Medic",3},{"Assault",3},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"B_IR_Grenade",1};

	craft_description = "auto";
};
class M63 {
	name = "IR Grenade [CSAT]";
	allowedClasses[] = {{"Medic",3},{"Assault",3},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"O_IR_Grenade",1};

	craft_description = "auto";
};
class M64 {
	name = "IR Grenade [AAF]";
	allowedClasses[] = {{"Medic",3},{"Assault",3},{"Engineer",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"I_IR_Grenade",1};

	craft_description = "auto";
};
class M65 {
	name = ".338 LM 10Rnd Mag";
	allowedClasses[] = {{"Sniper",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_338_Mag",1};

	craft_description = "auto";
};
class M66 {
	name = ".338 NM 10Rnd Mag";
	allowedClasses[] = {{"Medic",5}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"130Rnd_338_Mag",1};

	craft_description = "auto";
};
class M67 {
	name = "12.7mm 10Rnd Mag";
	allowedClasses[] = {{"Sniper",3},{"Assault",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_127x54_Mag",1};

	craft_description = "auto";
};
class M68 {
	name = "9.3mm 150Rnd Belt";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"150Rnd_93x64_Mag",1};

	craft_description = "auto";
};
class M69 {
	name = "9.3mm 10Rnd Mag";
	allowedClasses[] = {{"Sniper",4},{"Assault",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_93x64_DMR_05_Mag",1};

	craft_description = "auto";
};
class M70 {
	name = "9 mm 10Rnd Mag";
	allowedClasses[] = {{"Medic",1},{"Sniper",1},{"Assault",1},{"Engineer",1}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_9x21_Mag",1};

	craft_description = "auto";
};
class M71 {
	name = "5.8 mm 30Rnd Mag";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_580x42_Mag_F",1};

	craft_description = "auto";
};
class M72 {
	name = "5.8 mm 30Rnd Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_580x42_Mag_Tracer_F",1};

	craft_description = "auto";
};
class M73 {
	name = "5.8 mm 100Rnd Mag";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"100Rnd_580x42_Mag_F",1};

	craft_description = "auto";
};
class M74 {
	name = "5.8 mm 100Rnd Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"100Rnd_580x42_Mag_Tracer_F",1};

	craft_description = "auto";
};
class M75 {
	name = "6.5 mm 20Rnd Mag";
	allowedClasses[] = {{"Sniper",2},{"Assault",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"20Rnd_650x39_Cased_Mag_F",1};

	craft_description = "auto";
};
class M76 {
	name = ".50 BW 10Rnd Caseless Mag";
	allowedClasses[] = {{"Sniper",4}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"10Rnd_50BW_Mag_F",1};

	craft_description = "auto";
};
class M77 {
	name = "5.56 mm 150Rnd Mag";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_556x45_Drum_Mag_F",1};

	craft_description = "auto";
};
class M78 {
	name = "5.56 mm 150Rnd Tracer (Red) Mag";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"150Rnd_556x45_Drum_Mag_Tracer_F",1};

	craft_description = "auto";
};
class M79 {
	name = "7.62 mm 30Rnd Reload Tracer (Yellow) Mag";
	allowedClasses[] = {{"Medic",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_762x39_Mag_F",1};

	craft_description = "auto";
};
class M80 {
	name = "7.62 mm 30Rnd Reload Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",2}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_762x39_Mag_Green_F",1};

	craft_description = "auto";
};
class M81 {
	name = "7.62 mm 30Rnd Tracer (Yellow) Mag";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_762x39_Mag_Tracer_F",1};

	craft_description = "auto";
};
class M82 {
	name = "7.62 mm 30Rnd Tracer (Green) Mag";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_762x39_Mag_Tracer_Green_F",1};

	craft_description = "auto";
};
class M83 {
	name = "5.45 mm 30Rnd Reload Tracer (Yellow) Mag";
	allowedClasses[] = {{"Assault",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_545x39_Mag_F",1};

	craft_description = "auto";
};
class M84 {
	name = "5.45 mm 30Rnd Tracer (Yellow) Mag";
	allowedClasses[] = {{"Assault",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"30Rnd_545x39_Mag_Tracer_F",1};

	craft_description = "auto";
};
class M85 {
	name = "5.56 mm 200Rnd Reload Tracer (Yellow) Box";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"200Rnd_556x45_Box_F",1};

	craft_description = "auto";
};
class M86 {
	name = "5.56 mm 200Rnd Tracer (Yellow) Box";
	allowedClasses[] = {{"Medic",3}};
	craftingTime = 5;

	required[] = {{"metal",1}};
	result[] = {"200Rnd_556x45_Box_Tracer_F",1};

	craft_description = "auto";
};
class M87 {
	name = "PG-7VM HEAT Grenade";
	allowedClasses[] = {{"Engineer",4}};
	craftingTime = 5;

	required[] = {{"metal",2}};
	result[] = {"RPG7_F",1};

	craft_description = "auto";
};