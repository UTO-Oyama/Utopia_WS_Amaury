// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
/*
	@file Version: 1.0
	@file Name: hud.hpp
	@file Author: [404] Deadbeat, [KoS] Bewilderbeest
	@file Created: 11/09/2012 04:23
	@file Args:
*/

#define hud_status_idc 3600
#define hud_vehicle_idc 3601
#define hud_activity_icon_idc 3602
#define hud_activity_textbox_idc 3603

class WastelandHud {
	idd = -1;
	fadeout=0;
	fadein=0;
	duration = 1e10;
	name= "WastelandHud";
	onLoad = "uiNamespace setVariable ['WastelandHud', _this select 0]";

	class controlsBackground {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by riril, v1.063, #Wygote)
		////////////////////////////////////////////////////////

		class main_background: IGUIBack
		{
			idc = 2200;
			x = 0.234375 * safezoneW + safezoneX;
			y = 0.955 * safezoneH + safezoneY;
			w = 0.765 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class health_bar: RscProgressBar
		{
			idc = 2201;
			x = 0.245 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.085 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class health_icon: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.33 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class food_bar: RscProgressBar
		{
			idc = 2202;
			x = 0.3725 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.085 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class food_icon: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.4575 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class water_bar: RscProgressBar
		{
			idc = 2203;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.085 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class water_icon: RscPicture
		{
			idc = 1202;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.585 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class money_icon: RscPicture
		{
			idc = 1203;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.701875 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class bank_icon: RscPicture
		{
			idc = 1204;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.81875 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class xp_bar: RscProgressBar
		{
			idc = 2206;
			x = 0.8825 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.085 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class class_icon: RscPicture
		{
			idc = 1205;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.9675 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class xp_logs: RscListbox
		{
			idc = 1500;
			x = 0.884375 * safezoneW + safezoneX;
			y = 0.789 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.136 * safezoneH;
			sizeEx = 0.6 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0};
		};
		class money_text: RscStructuredText
		{
			idc = 1001;
			text = "1000"; //--- ToDo: Localize;
			x = 0.6275 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.074375 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class bank_text: RscStructuredText
		{
			idc = 1000;
			text = "1000"; //--- ToDo: Localize;
			x = 0.744375 * safezoneW + safezoneX;																																
			y = 0.962 * safezoneH + safezoneY;
			w = 0.074375 * safezoneW;
			h = 0.034 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class level_text: RscText
		{
			idc = 1002;
			x = 0.86125 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.02125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class xp_text: RscStructuredText
		{
			idc = 1003;
			x = 0.891125 * safezoneW + safezoneX;
			y = 0.972 * safezoneH + safezoneY;
			w = 0.08375 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 11000;
			text = "<t align='center' size='1.2'>Utopia Gaming</t><br/><t align='center' size='0.7'>ts.utopiagaming.org</t>"; //--- ToDo: Localize;
			x = 0.863125 * safezoneW + safezoneX;
			y = 0.279 * safezoneH + safezoneY;
			w = 0.12625 * safezoneW;
			h = 0.136 * safezoneH;
			colorText[] = {-1,-1,-1,0.5};
		};
		class WastelandHud_ActivityIcon:w_RscText
		{
			idc = hud_activity_icon_idc;
			type = CT_STRUCTURED_TEXT;
			size = 0.03;
			x = safeZoneX + (safeZoneW * 0.007);
			y = safeZoneY + (safeZoneH * 0.011);
			w = (0.06 * 3/4) * safezoneW;
			h = 0.05 * safezoneH;
			colorText[] = {1,1,1,1};
			lineSpacing = 2;
			colorBackground[] = {0,0,0,0};
			text = "";
			shadow = 2;
			class Attributes {
				align = "center";
				valign = "middle";
			};
		};
		class WastelandHud_ActivityTextBox:w_RscText
		{
			idc = hud_activity_textbox_idc;
			type = CT_STRUCTURED_TEXT;
			size = 0.03;
			x = safeZoneX + (safeZoneW * 0.055);
			y = safeZoneY + (safeZoneH * 0.011);
			w = 0.18 * safezoneW;
			h = 0.05 * safezoneH;
			colorText[] = {1,1,1,1};
			lineSpacing = 2;
			colorBackground[] = {0,0,0,0};
			text = "";
			shadow = 1;
			class Attributes {
				align = "left";
				valign = "middle";
			};
		};
		class WastelandHud_Vehicle:w_RscText
		{
			idc = hud_vehicle_idc;
			type = CT_STRUCTURED_TEXT;
			size = 0.040;
			x = safeZoneX + safeZoneW - 0.42;
			y = safeZoneY + safeZoneH - 0.33;
			w = 0.4; h = 0.65;
			colorText[] = {1,1,1,1};
			lineSpacing = 3;
			colorBackground[] = {0,0,0,0};
			text = "";
			shadow = 2;
			class Attributes {
				align = "right";
			};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};
