class levelingMenu {
	idd = 34562;
	movingEnable = 0;
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by riril, v1.063, #Bovabu)
		////////////////////////////////////////////////////////

		class cbackground: IGUIBack
		{
			idc = 2200;

			x = 0.234393 * safezoneW + safezoneX;
			y = 0.210987 * safezoneH + safezoneY;
			w = 0.552462 * safezoneW;
			h = 0.544025 * safezoneH;
		};
		class class_pic: RscPicture
		{
			idc = 1200;

			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.415006 * safezoneW + safezoneX;
			y = 0.227987 * safezoneH + safezoneY;
			w = 0.361225 * safezoneW;
			h = 0.340016 * safezoneH;
		};
		class class_desc: RscStructuredText
		{
			idc = 1100;

			x = 0.245018 * safezoneW + safezoneX;
			y = 0.585004 * safezoneH + safezoneY;
			w = 0.531213 * safezoneW;
			h = 0.153007 * safezoneH;
		};
		class class_list: w_RscListBox
		{
			idc = 1500;

			x = 0.245018 * safezoneW + safezoneX;
			y = 0.227987 * safezoneH + safezoneY;
			w = 0.159364 * safezoneW;
			h = 0.340016 * safezoneH;
		};
		class headerTitle: RscText
		{
			idc = 1000;

			text = "Choisissez votre  classe"; //--- ToDo: Localize;
			x = 0.393757 * safezoneW + safezoneX;
			y = 0.159984 * safezoneH + safezoneY;
			w = 0.276231 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		class class_validate_btn: w_RscButton
		{
			idc = 1600;

			text = "Valider"; //--- ToDo: Localize;
			x = 0.234393 * safezoneW + safezoneX;
			y = 0.772012 * safezoneH + safezoneY;
			w = 0.552462 * safezoneW;
			h = 0.0340016 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};