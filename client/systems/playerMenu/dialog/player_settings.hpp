// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
#include "player_sys.sqf"


class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] execVM 'client\systems\playerMenu\item_list.sqf'";
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Rasta Populos, v1.063, #Gizuny)
		////////////////////////////////////////////////////////

		class mainBackground: IGUIBack
		{
			idc = 2200;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};
			x = 0.243567 * safezoneW + safezoneX;
			y = 0.142985 * safezoneH + safezoneY;
			w = 0.512865 * safezoneW;
			h = 0.680029 * safezoneH;
		};
		class inventory_list: w_RscListBox
		{
			idc = 1500;
			x = 0.560337 * safezoneW + safezoneX;
			y = 0.210987 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.45902 * safezoneH;
		};
		class drop_inventory_btn: w_RscButton
		{
			idc = 1600;
			text = "Lacher"; //--- ToDo: Localize;
			onButtonClick = "[1] execVM 'client\systems\playerMenu\itemfnc.sqf'";
			x = 0.560337 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class use_inventory_btn: w_RscButton
		{
			idc = 1601;
			text = "Utiliser"; //--- ToDo: Localize;
			onButtonClick = "[0] execVM 'client\systems\playerMenu\itemfnc.sqf'";
			x = 0.560337 * safezoneW + safezoneX;
			y = 0.755011 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class health_icon: w_RscPicture
		{
			idc = 1200;
			text = "client\icons\health.paa";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.227988 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class food_icon: w_RscPicture
		{
			idc = 1201;
			text = "client\icons\food.paa";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.295991 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class water_icon: w_RscPicture
		{
			idc = 1202;
			text = "client\icons\water.paa";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.363994 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class health_text: w_RscText
		{
			idc = 1000;
			x = 0.296362 * safezoneW + safezoneX;
			y = 0.225572 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class food_text: w_RscText
		{
			idc = 1001;
			x = 0.296362 * safezoneW + safezoneX;
			y = 0.295991 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class water_text: w_RscText
		{
			idc = 1002;
			x = 0.296362 * safezoneW + safezoneX;
			y = 0.363994 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class class_icon: w_RscPicture
		{
			idc = 1203;
			text = "";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.363994 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class class_text: w_RscText
		{
			idc = 1003;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.363994 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class money_value_combo: RscCombo
		{
			idc = 2100;
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.448998 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class drop_money_btn: w_RscButton
		{
			idc = 1602;
			text = "Lacher l argent"; //--- ToDo: Localize;
			onButtonClick = "[] execVM 'client\systems\playerMenu\dropMoney.sqf'";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.448998 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class close_btn: w_RscButton
		{
			idc = 1603;
			text = "Quitter"; //--- ToDo: Localize;
			onButtonClick = "[] execVM 'client\systems\playerMenu\closePlayerMenu.sqf'";
			x = 0.25111 * safezoneW + safezoneX;
			y = 0.772012 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class group_btn: w_RscButton
		{
			idc = 1604;
			text = "Gestion du groupe"; //--- ToDo: Localize;
			onButtonClick = "[] execVM 'client\systems\groupSystem\tryOpen.sqf'";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.551002 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class controls_btn: w_RscButton
		{
			idc = 1605;
			text = "Controles"; //--- ToDo: Localize;
			onButtonClick = "[] spawn loadKeysMenu";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.551002 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class viewSettings_btn: w_RscButton
		{
			idc = 1606;
			text = "Distance de vue"; //--- ToDo: Localize;
			onButtonClick = "call CHVD_fnc_openDialog";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.619005 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class spawn_quad_btn: w_RscButton
		{
			idc = 1607;
			text = "Quad de secours"; //--- ToDo: Localize;
			onButtonClick = "[] execVM 'client\functions\createQuad.sqf'";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.619005 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class base_menu_btn: w_RscButton
		{
			idc = 1608;
			text = "Base"; //--- ToDo: Localize;
			onButtonClick = "[] spawn fn_loadArtilleryMenu;";
	
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class crafting_btn: w_RscButton
		{
			idc = 1609;
			text = "Crafting"; //--- ToDo: Localize;
			onButtonClick = "[] spawn loadCraftingMenu;";
			x = 0.258652 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class level_menu_btn: w_RscButton
		{
			idc = 1610;
			text = "Competences"; //--- ToDo: Localize;
			onButtonClick = "[] spawn loadLevelingManager;";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.755011 * safezoneH + safezoneY;
			w = 0.135758 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class h_01: w_RscText
		{
			idc = 1004;
			text = "Votre inventaire"; //--- ToDo: Localize;
			x = 0.560337 * safezoneW + safezoneX;
			y = 0.159986 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.0340014 * safezoneH;
		};
		class h_02: w_RscText
		{
			idc = 1005;
			text = "Menu joueur"; //--- ToDo: Localize;
			x = 0.311447 * safezoneW + safezoneX;
			y = 0.159986 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.0340014 * safezoneH;
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class money_icon: w_RscPicture
		{
			idc = 1204;
			text = "client\icons\money.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.227988 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class bank_icon: w_RscPicture
		{
			idc = 1205;
			text = "client\icons\suatmm_icon.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.295991 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class money_text: w_RscText
		{
			idc = 1006;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.227988 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class bank_text: w_RscText
		{
			idc = 1007;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.295991 * safezoneH + safezoneY;
			w = 0.0980477 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};





/**
class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] execVM 'client\systems\playerMenu\item_list.sqf'";

	class controlsBackground {

		class MainBG : IGUIBack {
			idc = -1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};

			moving = true;
			x = 0.0; y = 0.1;
			w = .745; h = 0.65;
		};

		class TopBar: IGUIBack
		{
			idc = -1;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {A3W_UICOLOR_R, A3W_UICOLOR_G, A3W_UICOLOR_B, 0.8};

			x = 0;
			y = 0.1;
			w = 0.745;
			h = 0.05;
		};

		class MainTitle : w_w_w_RscText {
			idc = -1;
			text = "Inventaire virtuel";
			sizeEx = 0.04;
			shadow = 2;
			x = 0.260; y = 0.1;
			w = 0.3; h = 0.05;
		};

		class waterIcon : w_w_w_RscPicture {
			idc = -1;
			text = "client\icons\water.paa";
			x = 0.022; y = 0.2;
			w = 0.04 / (4/3); h = 0.04;
		};

		class foodIcon : w_w_w_RscPicture {
			idc = -1;
			text = "client\icons\food.paa";
			x = 0.022; y = 0.26;
			w = 0.04 / (4/3); h = 0.04;
		};

		class moneyIcon : w_w_w_RscPicture {
			idc = -1;
			text = "client\icons\money.paa";
			x = 0.022; y = 0.32;
			w = 0.04 / (4/3); h = 0.04;
		};

		class waterText : w_w_w_RscText {
			idc = water_text;
			text = "";
			sizeEx = 0.03;
			x = 0.06; y = 0.193;
			w = 0.3; h = 0.05;
		};

		class foodText : w_w_w_RscText {
			idc = food_text;
			sizeEx = 0.03;
			text = "";
			x = 0.06; y = 0.254;
			w = 0.3; h = 0.05;
		};

		class moneyText : w_w_w_RscText {
			idc = money_text;
			text = "";
			sizeEx = 0.03;
			x = 0.06; y = 0.313;
			w = 0.3; h = 0.05;
		};

		class distanceText : w_w_w_RscText {
			idc = view_range_text;
			text = "View range:";
			sizeEx = 0.025;
			x = 0.03; y = 0.40;
			w = 0.3; h = 0.02;
		};

		class uptimeText : w_w_w_RscText {
			idc = uptime_text;
			text = "";
			sizeEx = 0.030;
			x = 0.52; y = 0.69;
			w = 0.225; h = 0.03;
		};
	};

	class controls {

		class itemList : w_Rsclist {
			idc = item_list;
			x = 0.49; y = 0.185;
			w = 0.235; h = 0.325;
		};

		class DropButton : w_w_w_RscButton {
			idc = -1;
			text = "Lâcher";
			onButtonClick = "[1] execVM 'client\systems\playerMenu\itemfnc.sqf'";
			x = 0.610; y = 0.525;
			w = 0.116; h = 0.033 * safezoneH;
		};

		class UseButton : w_w_w_RscButton {
			idc = -1;
			text = "Utiliser";
			onButtonClick = "[0] execVM 'client\systems\playerMenu\itemfnc.sqf'";
			x = 0.489; y = 0.525;
			w = 0.116; h = 0.033 * safezoneH;
		};

		class moneyInput: w_RscCombo {
			idc = money_value;
			x = 0.610; y = 0.618;
			w = .116; h = .030;
		};

		class DropcButton : w_w_w_RscButton {
			idc = -1;
			text = "Lâcher";
			onButtonClick = "[] execVM 'client\systems\playerMenu\dropMoney.sqf'";
			x = 0.489; y = 0.60;
			w = 0.116; h = 0.033 * safezoneH;
		};

		class CloseButton : w_w_w_RscButton {
			idc = close_button;
			text = "Fermer";
			onButtonClick = "[] execVM 'client\systems\playerMenu\closePlayerMenu.sqf'";
			x = 0.02; y = 0.66;
			w = 0.125; h = 0.033 * safezoneH;
		};

		class GroupsButton : w_w_w_RscButton {
			idc = groupButton;
			text = "Gestion de groupe";
			onButtonClick = "[] execVM 'client\systems\groups\loadGroupManagement.sqf'";
			x = 0.158; y = 0.66;
			w = 0.225; h = 0.033 * safezoneH;
		};

		class btnDistanceNear : w_w_w_RscButton {
			idc = -1;
			text = "Near";
			onButtonClick = "setViewDistance 1100;";
			x = 0.02; y = 0.43;
			w = 0.125; h = 0.033 * safezoneH;
		};

		class btnDistanceMedium : w_w_w_RscButton {
			idc = -1;
			text = "Medium";
			onButtonClick = "setViewDistance 2200;";
			x = 0.02; y = 0.5;
			w = 0.125; h = 0.033 * safezoneH;
		};

		class btnDistanceFar : w_w_w_RscButton {
			idc = -1;
			text = "Far";
			onButtonClick = "setViewDistance 3300;";
			x = 0.02; y = 0.57;
			w = 0.125; h = 0.033 * safezoneH;
		};

		class btnDistanceInsane : w_w_w_RscButton {
			text = "Insane";
			onButtonClick = "setViewDistance 5000;";
			x = 0.02; y = 0.60;
			w = 0.125; h = 0.033 * safezoneH;
		};

		class btnDistanceCHVD : w_w_w_RscButton {
			idc = -1;
			text = "Viewdist.";
			onButtonClick = "call CHVD_fnc_openDialog";
			x = 0.02; y = 0.57;
			w = 0.125; h = 0.033 * safezoneH;
		};
		class btnSpawnQuad : w_w_w_RscButton {
			idc = -1;
			text = "Spawn quad.";
			onButtonClick = "[] execVM 'client\functions\createQuad.sqf'";
			x = 0.157; y = 0.57;
			w = 0.125; h = 0.033 * safezoneH;
		};
	};
};
**/