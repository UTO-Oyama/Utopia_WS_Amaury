class ItemBoxMenu {
	idd=667;
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by riril, v1.063, #Pegenu)
		////////////////////////////////////////////////////////

		class bck_1: IGUIBack
		{
			idc = 2200;
			x = 0.4125 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.476 * safezoneH;
		};
		class cInv: w_RscListbox
		{
			idc = 1500;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.1925 * safezoneW;
			h = 0.35 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Container"; //--- ToDo: Localize;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.1925 * safezoneW;
			h = 0.028 * safezoneH;
			sizeEx = 1.2 * GUI_GRID_H;
		};
		class bck_2: IGUIBack
		{
			idc = 2201;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.14 * safezoneW;
			h = 0.476 * safezoneH;
		};
		class drop_item: w_RscButton
		{
			idc = 1001;
			text = "Déposer"; //--- ToDo: Localize;
			x = 0.26375 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class take_item: w_RscButton
		{
			idc = 1002;
			text = "Prendre"; //--- ToDo: Localize;
			x = 0.42125 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			w = 0.1925 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class pInv: w_RscListbox
		{
			idc = 1501;
			x = 0.26375 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.35 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Votre inventaire"; //--- ToDo: Localize;
			x = 0.26375 * safezoneW + safezoneX;
			y = 0.276 * safezoneH + safezoneY;
			w = 0.1225 * safezoneW;
			h = 0.028 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};