// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.2
//	@file Name: playerActions.sqf
//	@file Author: [404] Deadbeat, [404] Costlyy, [GoT] JoSchaap, AgentRev
//	@file Created: 20/11/2012 05:19

{ [player, _x] call fn_addManagedAction } forEach
[
	["Ranger l'arme", { player action ["SwitchWeapon", player, player, 100] }, [], -11, false, false, "", "vehicle player == player && currentWeapon player != '' && (stance player != 'CROUCH' || currentWeapon player != handgunWeapon player)"], // A3 v1.58 bug, holstering handgun while crouched causes infinite anim loop
	["Sortir l'arme", { player action ["SwitchWeapon", player, player, 0] }, [], -11, false, false, "", "vehicle player == player && currentWeapon player == '' && primaryWeapon player != ''"],

	["<img image='client\icons\money.paa'/> Ramasser l'argent", "client\actions\pickupMoney.sqf", [], 1, false, false, "", "{_x getVariable ['owner', ''] != 'mission'} count (player nearEntities ['Land_Money_F', 5]) > 0"],

	["<t color='#3232FF'><img image='client\icons\r3f_contents.paa'/>Stockage d'items</t>",loadItemBoxMenu,[], 1, false, false, "","{!isnil {_x getVariable 'virtualItems'}} count (player nearEntities [['AllVehicles','ReammoBox_F','Scrapyard_base_F'], 5]) > 0"],

	//Added by [utopia]Amaury
	["<img image='\a3\Ui_f\data\Map\Markers\Military\flag_CA.paa'/> Menu base", {[] spawn fn_loadBaseMenu},[],1,true,true,"","count (nearestObjects [player,['Flag_CSAT_F'],10]) >= 1 && playerSide isEqualTo east"],
	["<img image='\a3\Ui_f\data\Map\Markers\Military\flag_CA.paa'/> Menu base", {[] spawn fn_loadBaseMenu},[],1,true,true,"","count (nearestObjects [player,['Flag_UNO_F'],10]) >= 1 && playerSide isEqualTo west"],
	["<img image='\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\heal_ca.paa'/> Soins [base]",{player execVM "client\systems\leveling\capacities\minimalHeal.sqf"}, [], 3, false, false, "", "player isKindOf 'Man' && alive player && ([player,0.26] call lvl_isDamaged) && vehicle player == player && count (nearestObjects [player,['Flag_UNO_F','Flag_CSAT_F'],10]) >= 1"],

	[format ["<t color='%1'>[</t>Menu des contrôles<t color='%1'>]</t>", "#008000"],{_this spawn loadKeysMenu},[], -10, false],

	[format ["<t color='%1'>[</t>Bug Box<t color='%1'>]</t>", "#00FFFF"],{_this spawn fn_loadDebugBox},[], -10, false],


	["<t color='#FF0000'>Hacker l'ordinateur</t>","client\functions\hackComputer.sqf",[],1,true,true,"","count (nearestObjects [player,['Land_Laptop_unfolded_F'],1.5]) == 1"],

	["<img image='\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\transport_ca.paa'/> <t color='#FFFFFF'>Annuler l'action</t>", { doCancelAction = true }, [], 1, false, false, "", "mutexScriptInProgress"],

	["<img image='client\icons\repair.paa'/> Démonter", "client\actions\salvage.sqf", [], 1.1, false, false, "", "!isNull cursorTarget && !alive cursorTarget && {cursorTarget isKindOf 'AllVehicles' && !(cursorTarget isKindOf 'Man') && player distance cursorTarget <= (sizeOf typeOf cursorTarget / 3) max 3}"],

	// If you have a custom vehicle licence system, simply remove/comment the following action
	["<img image='client\icons\r3f_unlock.paa'/> Acquérir le véhicule", "client\actions\takeOwnership.sqf", [cursorTarget], 1, false, false, "", "alive cursorTarget && player distance cursorTarget <= (sizeOf typeOf cursorTarget / 3) max 3 && {{cursorTarget isKindOf _x} count ['LandVehicle','Ship','Air'] > 0 && {locked cursorTarget < 2 && !(cursorTarget getVariable ['objectLocked',false]) && cursorTarget getVariable ['ownerUID','0'] != getPlayerUID player}}"],

	["[0]"] call getPushPlaneAction,
	["Pousser", "server\functions\pushVehicle.sqf", [2.5, true], 1, false, false, "", "[2.5] call canPushVehicleOnFoot"],
	["Pousser vers l'avant", "server\functions\pushVehicle.sqf", [2.5], 1, false, false, "", "[2.5] call canPushWatercraft"],
	["Pousser vers l'arrière", "server\functions\pushVehicle.sqf", [-2.5], 1, false, false, "", "[-2.5] call canPushWatercraft"],

	["<t color='#FF0000'>Ejection d'urgence</t>",  { [[], fn_emergencyEject] execFSM "call.fsm" }, [], -9, false, true, "", "(vehicle player) isKindOf 'Air' && !((vehicle player) isKindOf 'ParachuteBase')"],
	["<t color='#FF00FF'>Ouvrir le parachute</t>", A3W_fnc_openParachute, [], 20, true, true, "", "vehicle player == player && (getPos player) select 2 > 2.5"]
];

if (["A3W_vehicleLocking"] call isConfigOn) then
{
	[player, ["<img image='client\icons\r3f_unlock.paa'/> Casser le verrou", "addons\scripts\lockPick.sqf", [cursorTarget], 1, false, false, "", "alive cursorTarget && player distance cursorTarget <= (sizeOf typeOf cursorTarget / 3) max 3 && {{cursorTarget isKindOf _x} count ['LandVehicle','Ship','Air'] > 0 && {locked cursorTarget == 2 && !(cursorTarget getVariable ['A3W_lockpickDisabled',false]) && cursorTarget getVariable ['ownerUID','0'] != getPlayerUID player && 'ToolKit' in items player}}"]] call fn_addManagedAction;
};

// Hehehe...
if !(288520 in getDLCs 1) then
{
	[player, ["<t color='#00FFFF'>Monter en pilote</t>", "client\actions\moveInDriver.sqf", [], 6, true, true, "", "cursorTarget isKindOf 'Kart_01_Base_F' && player distance cursorTarget < 3.4 && isNull driver cursorTarget"]] call fn_addManagedAction;
};

if (["A3W_savingMethod", "profile"] call getPublicVar == "extDB") then
{
	if (["A3W_vehicleSaving"] call isConfigOn) then
	{
		[player, ["<img image='client\icons\save.paa'/> Sauvegarder de force", { cursorTarget call fn_forceSaveVehicle }, [], -9.5, false, true, "", "call canForceSaveVehicle"]] call fn_addManagedAction;
	};

	if (["A3W_staticWeaponSaving"] call isConfigOn) then
	{
		[player, ["<img image='client\icons\save.paa'/> Sauvegarder de force", { cursorTarget call fn_forceSaveObject }, [], -9.5, false, true, "", "call canForceSaveStaticWeapon"]] call fn_addManagedAction;
	};
};

if("med_tech" call lvl_haveCapacity) then {
	_id = [player, 
	["<img image='\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\heal_ca.paa'/> Soins ",{cursorTarget execVM "client\systems\leveling\capacities\minimalHeal.sqf"}, [], 3, false, false, "", "cursorTarget isKindOf 'Man' && alive cursorTarget && ([cursorTarget,0.26] call lvl_isDamaged) && vehicle player == player && cursorTarget distance player < 5"]
	] call fn_addManagedAction;
	[player, 
	["<img image='\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\heal_ca.paa'/> Soins personnel",{player execVM "client\systems\leveling\capacities\minimalHeal.sqf"}, [], 3, false, false, "", "player isKindOf 'Man' && alive player && ([player,0.26] call lvl_isDamaged) && vehicle player == player"]
	] call fn_addManagedAction;
};

if("basic_repair" call lvl_haveCapacity) then {
	[player, 
	["<img image='\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa'/> Réparations basiques",{cursorTarget execVM "client\systems\leveling\capacities\minimalrepair.sqf"}, [], 3, false, false, "", "{([_x,0.3] call lvl_isDamaged) && alive _x}count (nearestObjects[player,['LandVehicle','Air'],6]) > 0 && vehicle player == player && cursorTarget distance player < 5"]
	] call fn_addManagedAction;
};

[player,
	["<img image='\A3\ui_f\data\IGUI\RscIngameUI\RscUnitInfoAirRTDFull\ico_insp_hand_ca.paa'/> Cacher le corps",{cursorTarget execVM "client\systems\leveling\capacities\hideBody.sqf"}, [], 3, false, false, "", "!alive cursorTarget && cursorTarget isKindOf 'Man' && vehicle player == player && cursorTarget distance player < 5"]
] call fn_addManagedAction;

if("stable_shot" call lvl_haveCapacity) then {
	player setUnitRecoilCoefficient 0.50;
};

if("recuperation" call lvl_haveCapacity) then {
	[player, 
	["<img image='\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa'/> Récupération",{cursorTarget execVM "client\systems\leveling\capacities\disassembleWp.sqf"}, [], 3, false, false, "", 
	"cursorTarget isKindOf 'GroundWeaponHolder' || cursorTarget isKindOf 'MineBase' && vehicle player == player && cursorTarget distance player < 5"]
	] call fn_addManagedAction;
};

if("reload_instinct" call lvl_haveCapacity) then {
	player addEventHandler ["fired",{
		if (needReload player == 1) then {reload player};
	}];
};