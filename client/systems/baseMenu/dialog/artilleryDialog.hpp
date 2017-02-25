class RemoteServiceMenu {
	idd = 541235;
	movingEnable = true;
	enableSimulation = true;
	class controlsBackground {
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			colorText[] = {1, 1, 1, 1};
			colorBackground[] = {0,0,0,0.6};
			x = 0.287498 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.425003 * safezoneW;
			h = 0.204 * safezoneH;
		};
	};



	class Controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by riril, v1.063, #Pexaha)
		////////////////////////////////////////////////////////

		class RscButtonMenu_2400: w_RscButton
		{
			idc = 2400;
			text = "ARTILLERY"; //--- ToDo: Localize;
			x = 0.308749 * safezoneW + safezoneX;
			y = 0.517 * safezoneH + safezoneY;
			w = 0.170001 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class RscButtonMenu_2401: w_RscButton
		{
			idc = 2401;
			text = "MORTAR"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.517 * safezoneH + safezoneY;
			w = 0.191251 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Remote base menu"; //--- ToDo: Localize;
			x = 0.308749 * safezoneW + safezoneX;
			y = 0.449 * safezoneH + safezoneY;
			w = 0.382503 * safezoneW;
			h = 0.034 * safezoneH;
			sizeEx = 1.2 * GUI_GRID_H;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};