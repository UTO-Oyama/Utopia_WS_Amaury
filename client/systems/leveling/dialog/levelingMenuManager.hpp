class LevelingMenuManager {
	idd = 34563;
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Rasta Populos, v1.063, #Bomipo)
		////////////////////////////////////////////////////////

		class background: IGUIBack
		{
			idc = 2200;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};
			x = 0.1875 * safezoneW + safezoneX;
			y = 0.195025 * safezoneH + safezoneY;
			w = 0.5875 * safezoneW;
			h = 0.62 * safezoneH;
		};
		class xp_bar: RscProgressBar
		{
			idc = 2301;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.525 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class rank_picture: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.2025 * safezoneW + safezoneX;
			y = 0.296 * safezoneH + safezoneY;
			w = 0.031875 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class RscControlsGroup_2300: RscControlsGroup_NoScroll
		{
			idc = 2300;
			x = 0.2 * safezoneW + safezoneX;
			y = 0.36 * safezoneH + safezoneY;
			w = 0.565717 * safezoneW;
			h = 0.442019 * safezoneH;
			class controls
			{
				class perk_1: IGUIBack
				{
					idc = 2202;
					x = 0 * safezoneW;
					y = -5.06661e-008 * safezoneH;
					w = 0.57375 * safezoneW;
					h = 0.136 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.5};
				};
				class perk_2: IGUIBack
				{
					idc = 2203;
					x = 0 * safezoneW;
					y = 0.16 * safezoneH;
					w = 0.57375 * safezoneW;
					h = 0.136 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.5};
				};
				class perk_3: IGUIBack
				{
					idc = 2204;
					x = 0 * safezoneW;
					y = 0.32 * safezoneH;
					w = 0.57375 * safezoneW;
					h = 0.136 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.5};
				};
				class perk_4: IGUIBack
				{
					idc = 2205;
					x = 0 * safezoneW;
					y = 0.48 * safezoneH;
					w = 0.57375 * safezoneW;
					h = 0.136 * safezoneH;
					colorBackground[] = {-1,-1,-1,0.5};
				};
				class perk_1_img: RscPicture
				{
					idc = 1201;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = 0.0125 * safezoneW;
					y = 0.02 * safezoneH;
					w = 0.06375 * safezoneW;
					h = 0.102 * safezoneH;
				};
				class perk_2_img: RscPicture
				{
					idc = 1202;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = 0.0125 * safezoneW;
					y = 0.18 * safezoneH;
					w = 0.06375 * safezoneW;
					h = 0.102 * safezoneH;
				};
				class perk_3_img: RscPicture
				{
					idc = 1203;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = 0.0125 * safezoneW;
					y = 0.34 * safezoneH;
					w = 0.06375 * safezoneW;
					h = 0.102 * safezoneH;
				};
				class perk_4_img: RscPicture
				{
					idc = 1204;
					text = "#(argb,8,8,3)color(1,1,1,1)";
					x = 0.0125 * safezoneW;
					y = 0.5 * safezoneH;
					w = 0.06375 * safezoneW;
					h = 0.102 * safezoneH;
				};
				class perk_1_txt: RscText
				{
					idc = 1001;
					text = "Level X"; //--- ToDo: Localize;
					x = 0.2125 * safezoneW;
					y = -5.06661e-008 * safezoneH;
					w = 0.201875 * safezoneW;
					h = 0.034 * safezoneH;
				};
				class perk_2_txt: RscText
				{
					idc = 1000;
					text = "Level X"; //--- ToDo: Localize;
					x = 0.2125 * safezoneW;
					y = 0.17 * safezoneH;
					w = 0.2125 * safezoneW;
					h = 0.034 * safezoneH;
				};
				class perk_3_txt: RscText
				{
					idc = 1002;
					text = "Level X"; //--- ToDo: Localize;
					x = 0.2125 * safezoneW;
					y = 0.323 * safezoneH;
					w = 0.2125 * safezoneW;
					h = 0.034 * safezoneH;
				};
				class perk_4_txt: RscText
				{
					idc = 1003;
					text = "Level X"; //--- ToDo: Localize;
					x = 0.2125 * safezoneW;
					y = 0.48 * safezoneH;
					w = 0.2125 * safezoneW;
					h = 0.034 * safezoneH;
				};
				class perk_1_desc: RscStructuredText
				{
					idc = 1100;
					x = 0.0875 * safezoneW;
					y = 0.04 * safezoneH;
					w = 0.390424 * safezoneW;
					h = 0.0850036 * safezoneH;
				};
				class perk_2_desc: RscStructuredText
				{
					idc = 1101;
					x = 0.0875 * safezoneW;
					y = 0.2 * safezoneH;
					w = 0.3875 * safezoneW;
					h = 0.08 * safezoneH;
				};
				class perk_3_desc: RscStructuredText
				{
					idc = 1102;
					x = 0.0875 * safezoneW;
					y = 0.36 * safezoneH;
					w = 0.390424 * safezoneW;
					h = 0.0850036 * safezoneH;
				};
				class perk_4_desc: RscStructuredText
				{
					idc = 1103;
					x = 0.0875 * safezoneW;
					y = 0.52 * safezoneH;
					w = 0.390424 * safezoneW;
					h = 0.0850036 * safezoneH;
				};
				class activate_capacity_btn_1: w_RscButton
				{
					idc = 1600;
					text = "Activer"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.04 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class key_capacity_btn_1: w_RscButton
				{
					idc = 1601;
					text = "Touche"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.08 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class activate_capacity_btn_2: w_RscButton
				{
					idc = 1602;
					text = "Activer"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.2 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class key_capacity_btn_2: w_RscButton
				{
					idc = 1603;
					text = "Touche"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.24 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class activate_capacity_btn_3: w_RscButton
				{
					idc = 1604;
					text = "Activer"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.36 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class key_capacity_btn_3: w_RscButton
				{
					idc = 1605;
					text = "Touche"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.4 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class activate_capacity_btn_4: w_RscButton
				{
					idc = 1606;
					text = "Activer"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.52 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
				class key_capacity_btn_4: w_RscButton
				{
					idc = 1607;
					text = "Touche"; //--- ToDo: Localize;
					x = 0.4875 * safezoneW;
					y = 0.56 * safezoneH;
					w = 0.0696784 * safezoneW;
					h = 0.0340014 * safezoneH;
				};
			};
		};
		class xp_text: RscText
		{
			idc = 1004;
			text = "%%%% / %%%%"; //--- ToDo: Localize;
			x = 0.425 * safezoneW + safezoneX;
			y = 0.3 * safezoneH + safezoneY;
			w = 0.14875 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class player_name_header: RscStructuredText
		{
			idc = 1104;
			x = 0.2025 * safezoneW + safezoneX;
			y = 0.219 * safezoneH + safezoneY;
			w = 0.5625 * safezoneW;
			h = 0.06 * safezoneH;
			sizeEx = 1.5 * GUI_GRID_H;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};