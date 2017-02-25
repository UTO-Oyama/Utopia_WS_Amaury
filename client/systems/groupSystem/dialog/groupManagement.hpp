class groupManagement {
	idd = 12399;
	class controls {
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Rasta Populos, v1.063, #Cupako)
		////////////////////////////////////////////////////////

		class MainBackground: IGUIBack
		{
			idc = 2200;
			x = 0.197188 * safezoneW + safezoneX;
			y = 0.211 * safezoneH + safezoneY;
			w = 0.422344 * safezoneW;
			h = 0.561 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.5};
		};
		class members_list: w_RscListBox
		{
			idc = 1500;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.279 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.408 * safezoneH;
		};
		class members_header: RscText
		{
			idc = 1000;
			text = "Membres"; //--- ToDo: Localize;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.228 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "client\icons\money.paa";
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0398437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class group_money_text: RscText
		{
			idc = 1001;
			x = 0.260938 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.143437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class RscPicture_1201: RscPicture
		{
			idc = 1201;
			text = "\A3\ui_f\data\GUI\Rsc\RscDisplayMain\profile_player_ca.paa";
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.398 * safezoneH + safezoneY;
			w = 0.0398437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class group_members_text: RscText
		{
			idc = 1003;
			x = 0.260938 * safezoneW + safezoneX;
			y = 0.398 * safezoneH + safezoneY;
			w = 0.143437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class RscPicture_1202: RscPicture
		{
			idc = 1202;
			text = "\A3\ui_f\data\GUI\Cfg\Ranks\general_gs.paa";
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.483 * safezoneH + safezoneY;
			w = 0.0398437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class group_leader_text: RscText
		{
			idc = 1006;
			x = 0.260938 * safezoneW + safezoneX;
			y = 0.483 * safezoneH + safezoneY;
			w = 0.143437 * safezoneW;
			h = 0.068 * safezoneH;
		};
		class leave_group_btn: w_RscButton
		{
			idc = 1601;
			text = "Quitter le groupe"; //--- ToDo: Localize;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.704 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class header_left: RscText
		{
			idc = 1082;
			text = "UTOPIA GAMING"; //--- ToDo: Localize;
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.228 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.068 * safezoneH;
			sizeEx = 1.6 * GUI_GRID_H;
		};
		class leaderBackground: IGUIBack
		{
			idc = 2201;
			x = 0.635469 * safezoneW + safezoneX;
			y = 0.211 * safezoneH + safezoneY;
			w = 0.159375 * safezoneW;
			h = 0.561 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.5};
		};
		class send_invite: w_RscButton
		{
			idc = 1600;
			text = "Inviter"; //--- ToDo: Localize;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.279 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class kick_btn: w_RscButton
		{
			idc = 1602;
			text = "Kicker"; //--- ToDo: Localize;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.466 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class assign_leader_btn: w_RscButton
		{
			idc = 1603;
			text = "Assigner comme chef"; //--- ToDo: Localize;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.534 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Actions de leader"; //--- ToDo: Localize;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.228 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class players_list: RscCombo
		{
			idc = 2100;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.347 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.034 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Actions sur la liste des membres"; //--- ToDo: Localize;
			x = 0.643438 * safezoneW + safezoneX;
			y = 0.415 * safezoneH + safezoneY;
			w = 0.143437 * safezoneW;
			h = 0.034 * safezoneH;
			sizeEx = 0.75 * GUI_GRID_H;
		};
		class dissolve_btn: w_RscButton
		{
			idc = 1604;
			text = "Dissoudre"; //--- ToDo: Localize;
			x = 0.651406 * safezoneW + safezoneX;
			y = 0.704 * safezoneH + safezoneY;
			w = 0.1275 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class add_money_btn: w_RscButton
		{
			idc = 1605;
			text = "Ajouter de l'argent"; //--- ToDo: Localize;
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.636 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class lose_money_btn: w_RscButton
		{
			idc = 1606;
			text = "Retirer de l'argent"; //--- ToDo: Localize;
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.704 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.051 * safezoneH;
		};
		class money_combo: RscCombo
		{
			idc = 2101;
			x = 0.213125 * safezoneW + safezoneX;
			y = 0.585 * safezoneH + safezoneY;
			w = 0.19125 * safezoneW;
			h = 0.034 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};