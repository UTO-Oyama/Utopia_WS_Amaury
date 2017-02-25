// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: customGroup.sqf
//	@file Author: AgentRev

if (!isServer) exitWith {};

private ["_group", "_pos", "_nbUnits", "_unitTypes", "_uPos", "_unit"];

_group = _this select 0;
_pos = _this select 1;
_nbUnits = param [2, 7, [0]];
_radius = param [3, 10, [0]];

_unitTypes =
[
	"C_man_polo_1_F", "C_man_polo_1_F_euro", "C_man_polo_1_F_afro", "C_man_polo_1_F_asia",
	"C_man_polo_2_F", "C_man_polo_2_F_euro", "C_man_polo_2_F_afro", "C_man_polo_2_F_asia",
	"C_man_polo_3_F", "C_man_polo_3_F_euro", "C_man_polo_3_F_afro", "C_man_polo_3_F_asia",
	"C_man_polo_4_F", "C_man_polo_4_F_euro", "C_man_polo_4_F_afro", "C_man_polo_4_F_asia",
	"C_man_polo_5_F", "C_man_polo_5_F_euro", "C_man_polo_5_F_afro", "C_man_polo_5_F_asia",
	"C_man_polo_6_F", "C_man_polo_6_F_euro", "C_man_polo_6_F_afro", "C_man_polo_6_F_asia"
];

for "_i" from 1 to _nbUnits do
{
	_uPos = _pos vectorAdd ([[random _radius, 0, 0], random 360] call BIS_fnc_rotateVector2D);
	_unit = _group createUnit [_unitTypes call BIS_fnc_selectRandom, _uPos, [], 0, "Form"];
	_unit setPosATL _uPos;

	removeAllWeapons _unit;
	removeAllAssignedItems _unit;
	removeUniform _unit;
	removeVest _unit;
	removeBackpack _unit;
	removeHeadgear _unit;
	removeGoggles _unit;

	if (_unit == leader _group) then
	{
		_unit setRank "CAPTAIN";
		_unit setVariable ["xp",500];
	}else{
		_unit setRank "LIEUTENANT";
	};

	switch (true) do
	{
		// RPG every 7 units, starting from second one
		case (_i % 6 == 0):
		{
			_unit addUniform "U_B_T_Soldier_F";
			_unit addHeadgear "H_HelmetB_tna_F";
			_unit addVest "V_PlateCarrierSpec_tna_F";
			_unit addWeapon "arifle_SPAR_02_blk_F";
			_unit addBackpack "B_Carryall_khk";
			_unit addMagazine "150Rnd_556x45_Drum_Mag_F";
			_unit addMagazine "150Rnd_556x45_Drum_Mag_F";
			_unit addMagazine "150Rnd_556x45_Drum_Mag_F";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "HandGrenade";
			_unit addMagazine "SmokeShellGreen";
			_unit addMagazine "SmokeShellGreen";
			_unit addItem "firstAidKit";
			_unit addItem "firstAidKit";
			_unit addItem "itemRadio";

			_unit setVariable ["xp",250];

		};
		case (_i % 7 == 0):
		{
			_unit addUniform "U_B_T_Soldier_F";
			_unit addHeadgear "H_HelmetB_tna_F";
			_unit addVest "V_PlateCarrierSpec_tna_F";
			_unit addWeapon "arifle_AKM_F";
			_unit addWeapon "launch_B_Titan_short_tna_F";
			_unit addBackpack "B_Bergen_rgr";
			_unit addMagazine "Titan_AT";
			_unit addMagazine "Titan_AP";
			_unit addMagazine "Titan_AT";
			_unit addMagazine "Titan_AT";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "30Rnd_762x39_Mag_F";
			_unit addMagazine "SmokeShellGreen";
			_unit addItem "firstAidKit";
			_unit addItem "firstAidKit";
			_unit addItem "itemRadio";

			_unit setVariable ["xp",300];

		};
		case ((_i + 5) % 5 == 0):
		{
			_unit addUniform "U_B_CTRG_Soldier_F";
			_unit addHeadgear "H_HelmetB_TI_tna_F";
			_unit addBackpack "B_Carryall_khk";
			_unit addVest "V_TacVest_oli";
			_unit addWeapon "arifle_MXM_DMS_LP_BI_snds_F";

			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "30Rnd_556x45_Stanag";
			_unit addMagazine "HandGrenade";
			_unit addMagazine "SmokeShellGreen";
			_unit addMagazine "SmokeShellGreen";
			_unit addItem "itemRadio";

			_unit addItem "firstAidKit";
			_unit addItem "firstAidKit";

			_unit setVariable ["xp",250];
		};
		// Rifleman
		default
		{
			_unit addUniform "U_B_T_Soldier_F";
			_unit addHeadgear "H_HelmetB_tna_F";
			_unit addVest "V_PlateCarrierSpec_tna_F";
			_unit addWeapon "arifle_MX_khk_ACO_Pointer_Snds_F";
			_unit addBackpack "B_Carryall_khk";

			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "30Rnd_65x39_caseless_mag";
			_unit addMagazine "HandGrenade";
			_unit addMagazine "SmokeShellGreen";
			_unit addMagazine "SmokeShellGreen";
			_unit addItem "itemRadio";

			_unit addItem "firstAidKit";
			_unit addItem "firstAidKit";

			_unit setVariable ["xp",200];
		};
	};

	_unit setSkill 0.85;

	_unit addRating 1e11;
	_unit spawn refillPrimaryAmmo;
	_unit addEventHandler ["Killed", server_playerDied];
};

[_group, _pos] call defendArea;
