class craft_menu {
	idd = 23451;
	movingEnable = true;
	enableSimulation = true;
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by riril, v1.063, #Gudubi)
		////////////////////////////////////////////////////////

		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;

			x = 0.181273 * safezoneW + safezoneX;
			y = 0.176985 * safezoneH + safezoneY;
			w = 0.616207 * safezoneW;
			h = 0.64603 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};
		class craft_list: w_RscListBox
		{
			idc = 1500;

			x = 0.20252 * safezoneW + safezoneX;
			y = 0.244988 * safezoneH + safezoneY;
			w = 0.233734 * safezoneW;
			h = 0.476022 * safezoneH;
		};
		class component_2_img: RscPicture
		{
			idc = 1200;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.584994 * safezoneW + safezoneX;
			y = 0.261989 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.102005 * safezoneH;
		};
		class component_3_img: RscPicture
		{
			idc = 1201;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.701861 * safezoneW + safezoneX;
			y = 0.261989 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.102005 * safezoneH;
		};
		class component_1_img: RscPicture
		{
			idc = 1202;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.468127 * safezoneW + safezoneX;
			y = 0.261989 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.102005 * safezoneH;
		};
		class craft_category_cb: RscCombo
		{
			idc = 2100;

			x = 0.20252 * safezoneW + safezoneX;
			y = 0.755012 * safezoneH + safezoneY;
			w = 0.233734 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;

			text = "CRAFTING"; //--- ToDo: Localize;
			x = 0.446879 * safezoneW + safezoneX;
			y = 0.193986 * safezoneH + safezoneY;
			w = 0.2125 * safezoneW;
			h = 0.034 * safezoneH;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class result_component: RscPicture
		{
			idc = 1203;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.468127 * safezoneW + safezoneX;
			y = 0.517001 * safezoneH + safezoneY;
			w = 0.0849941 * safezoneW;
			h = 0.119005 * safezoneH;
		};
		class craft_desc_tbox: RscStructuredText
		{
			idc = 1100;

			x = 0.57437 * safezoneW + safezoneX;
			y = 0.448998 * safezoneH + safezoneY;
			w = 0.201861 * safezoneW;
			h = 0.289013 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.5};
		};
		class RscText_1002: RscText
		{
			idc = 1002;

			text = "Recettes de craft"; //--- ToDo: Localize;
			x = 0.191896 * safezoneW + safezoneX;
			y = 0.193986 * safezoneH + safezoneY;
			w = 0.191237 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class arrow_result_img: RscPicture
		{
			idc = 1204;

			text = "\A3\ui_f\data\IGUI\Cfg\Actions\arrow_down_gs.paa";
			x = 0.489376 * safezoneW + safezoneX;
			y = 0.431997 * safezoneH + safezoneY;
			w = 0.0318728 * safezoneW;
			h = 0.0680031 * safezoneH;
		};
		class craft_btn: w_RscButton
		{
			idc = 1600;

			text = "Crafter"; //--- ToDo: Localize;
			x = 0.468127 * safezoneW + safezoneX;
			y = 0.704009 * safezoneH + safezoneY;
			w = 0.0849941 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class RscButton_1601: w_RscButton
		{
			idc = 1601;

			text = "X"; //--- ToDo: Localize;
			x = 0.765607 * safezoneW + safezoneX;
			y = 0.193986 * safezoneH + safezoneY;
			w = 0.0212485 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class component_1_txt: RscStructuredText
		{
			idc = 1101;

			x = 0.468127 * safezoneW + safezoneX;
			y = 0.380995 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class component_2_txt: RscStructuredText
		{
			idc = 1102;

			x = 0.584994 * safezoneW + safezoneX;
			y = 0.380995 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class component_3_txt: RscStructuredText
		{
			idc = 1103;

			x = 0.701861 * safezoneW + safezoneX;
			y = 0.380995 * safezoneH + safezoneY;
			w = 0.0743699 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class result_component_txt: RscStructuredText
		{
			idc = 1104;

			x = 0.468127 * safezoneW + safezoneX;
			y = 0.653007 * safezoneH + safezoneY;
			w = 0.0849941 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class progress: RscProgressBar
		{
			idc = 4000;
			colorBar[] = {0,0.2,0,1};

			x = 0.468127 * safezoneW + safezoneX;
			y = 0.755012 * safezoneH + safezoneY;
			w = 0.308104 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};