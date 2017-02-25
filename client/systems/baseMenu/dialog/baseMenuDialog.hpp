class baseMenu {
	idd = 56321;
	movingEnable = true;
	enableSimulation = true;

	class controlsBackground {
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};
			x = 0.270002 * safezoneW + safezoneX;
			y = 0.18 * safezoneH + safezoneY;
			w = 0.46375 * safezoneW;
			h = 0.546 * safezoneH;
		};
	};


	class Controls {
		class RscButtonMenu_2400: w_RscButton
		{
			idc = 2400;
			text = "Access Gun Store"; //--- ToDo: Localize;
			x = 0.29 * safezoneW + safezoneX;
			y = 0.584 * safezoneH + safezoneY;
			w = 0.425003 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "%%%% argent en base"; //--- ToDo: Localize;
			x = 0.36 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.056 * safezoneH;
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "client\icons\money.paa";
			x = 0.29 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.0525 * safezoneW;
			h = 0.056 * safezoneH;
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.287499 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.148751 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscButton_1600: w_RscButton
		{
			idc = 1600;
			text = "Donate money to your team base"; //--- ToDo: Localize;
			x = 0.4575 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.255002 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Mortar service : Disabled"; //--- ToDo: Localize;
			x = 0.287498 * safezoneW + safezoneX;
			y = 0.483 * safezoneH + safezoneY;
			w = 0.212502 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Artillery service : Disabled"; //--- ToDo: Localize;
			x = 0.287498 * safezoneW + safezoneX;
			y = 0.534 * safezoneH + safezoneY;
			w = 0.212502 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Available in %%"; //--- ToDo: Localize;
			x = 0.52125 * safezoneW + safezoneX;
			y = 0.483 * safezoneH + safezoneY;
			w = 0.191251 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Available in %%"; //--- ToDo: Localize;
			x = 0.52125 * safezoneW + safezoneX;
			y = 0.534 * safezoneH + safezoneY;
			w = 0.191251 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class base_progress: RscProgressBar
		{
			idc = 2201;
			x = 0.29 * safezoneW + safezoneX;
			y = 0.248 * safezoneH + safezoneY;
			w = 0.42 * safezoneW;
			h = 0.056 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class text_header_base: RscText
		{
			idc = 1005;
			x = 0.4125 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class RscButtonMenu_2401: w_RscButton
		{
			idc = 2404;
			text = "Access ATM"; //--- ToDo: Localize;
			x = 0.29 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.425003 * safezoneW;
			h = 0.051 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};
