class controlsMenu {
	idd=12333;
	class Controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Rasta Populos, v1.063, #Devyki)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};
			x = 0.39441 * safezoneW + safezoneX;
			y = 0.108983 * safezoneH + safezoneY;
			w = 0.21118 * safezoneW;
			h = 0.646028 * safezoneH;
		};
		class w_RscPicture_1200: w_RscPicture
		{
			idc = 1200;
			text = "client\icons\playermenu.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.176986 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class p_menu_btn: w_RscButton
		{
			idc = 1600;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.176986 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1000: w_RscText
		{
			idc = 1000;
			text = "Player Menu"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.176986 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1009: w_RscText
		{
			idc = 1009;
			text = "Controles"; //--- ToDo: Localize;
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.108983 * safezoneH + safezoneY;
			w = 0.181011 * safezoneW;
			h = 0.0510022 * safezoneH;
			sizeEx = 1.4 * GUI_GRID_H;
		};
		class w_RscPicture_1201: w_RscPicture
		{
			idc = 1201;
			text = "\A3\ui_f\data\IGUI\RscInGameUI\RscUnitInfoAirRTDFull\ico_cpt_sound_OFF_ca.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.26199 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscPicture_1202: w_RscPicture
		{
			idc = 1202;
			text = "\A3\ui_f\data\GUI\Rsc\RscDisplayMain\profile_player_ca.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.346994 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscPicture_1203: w_RscPicture
		{
			idc = 1203;
			text = "\A3\ui_f\data\IGUI\RscInGameUI\RscUnitInfoAirRTDFull\ico_insp_hand_0_ca.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.431997 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscPicture_1204: w_RscPicture
		{
			idc = 1204;
			text = "\A3\ui_f\Data\GUI\Cfg\Ranks\private_gs.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.517001 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscPicture_1205: w_RscPicture
		{
			idc = 1205;
			text = "\A3\ui_f\data\GUI\Rsc\RscDisplayArsenal\spaceGarage_ca.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.602004 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscPicture_1206: w_RscPicture
		{
			idc = 1206;
			text = "\A3\ui_f\data\Map\diary\signal_ca.paa";
			x = 0.409494 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.0301685 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1001: w_RscText
		{
			idc = 1001;
			text = "Bouchons"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.26199 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1002: w_RscText
		{
			idc = 1002;
			text = "Tags"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.346994 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1003: w_RscText
		{
			idc = 1003;
			text = "Recolter"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.431997 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1004: w_RscText
		{
			idc = 1004;
			text = "Classe"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.517001 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1005: w_RscText
		{
			idc = 1005;
			text = "Crafting"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.602004 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class w_RscText_1006: w_RscText
		{
			idc = 1006;
			text = "Base Menu"; //--- ToDo: Localize;
			x = 0.447205 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.0754213 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class earPlugs_btn: w_RscButton
		{
			idc = 1601;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.26199 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class tags_btn: w_RscButton
		{
			idc = 1602;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.346994 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class harvest_btn: w_RscButton
		{
			idc = 1603;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.431997 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class class_btn: w_RscButton
		{
			idc = 1604;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.517001 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class craft_btn: w_RscButton
		{
			idc = 1605;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.602004 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		class base_btn: w_RscButton
		{
			idc = 1606;
			x = 0.530169 * safezoneW + safezoneX;
			y = 0.687008 * safezoneH + safezoneY;
			w = 0.0603371 * safezoneW;
			h = 0.0510022 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};