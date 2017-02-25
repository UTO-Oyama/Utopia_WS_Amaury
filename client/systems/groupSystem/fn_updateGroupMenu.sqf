_groupInfos = param[0,[],[[]]];
_members = param[1,[],[[]]];

_groupID = _groupInfos param [0,0];
_groupSide = _groupInfos param [1,sideEmpty];
_groupOwner = _groupInfos param [2,""];
_groupName =  _groupInfos param [3,""];
_groupBank = _groupInfos param [4,0];

disableSerialization;

if(isNull findDisplay 12399) then {
	[] call fn_loadGroupMenu;
};

_display = findDisplay 12399;
_money = _display displayCtrl 1001;
_groupMembersCapacity = _display displayCtrl 1003;
_leader = _display displayCtrl 1006;
_groupHeader = _display displayCtrl 1082;
_leaderActionsHeader = _display displayCtrl 1004;
_members_list = _display displayCtrl 1500;
_p_list = _display displayCtrl 2100;
_invite_btn = _display displayCtrl 1600;
_add_money_btn = _display displayCtrl 1605;
_withdraw_money_btn = _display displayCtrl 1606;
_leaderBckGround = _display displayCtrl 2201;
_money_cb = _display displayCtrl 2101;
_leave_group_btn = _display displayCtrl 1601;
_delete_group = _display displayCtrl 1604;
_new_leader_btn = _display displayCtrl 1603;
_kick_btn = _display displayCtrl 1602;

_groupHeader ctrlSetText groupId group player;
_groupMembersCapacity ctrlSetText format ["Capacité : %1 / %2",count _members,12];
_money ctrlSetText format ["En banque : %1$",_groupBank];

_delete_group ctrlShow false;
_new_leader_btn ctrlShow false;
_kick_btn ctrlShow false;
_leaderBckGround ctrlShow false;
_p_list ctrlShow false;
_invite_btn ctrlShow false;
_leaderActionsHeader ctrlShow false;

_withdraw_money_btn ctrlEnable false;
_withdraw_money_btn ctrlSetTooltip "Vous avez besoin d'être chef de groupe pour retirer de l'argent";

lbClear _money_cb;
lbClear _p_list;
lbClear _members_list;

{
 	_idx = _money_cb lbAdd format ["%1$",_x];
 	_money_cb lbSetValue [_idx,_x];
} forEach [25,50,100,500,1000,5000,10000];

if(getPlayerUID player isEqualTo _groupOwner) then {
	_delete_group ctrlShow true;
	_new_leader_btn ctrlShow true;
	_kick_btn ctrlShow true;
	_leaderBckGround ctrlShow true;
	_p_list ctrlShow true;
	_invite_btn ctrlShow true;
	_leaderActionsHeader ctrlShow true;

	_withdraw_money_btn ctrlEnable true;
	_withdraw_money_btn ctrlSetTooltip "";

	{
		if(side _x isEqualTo playerSide && !(_x isEqualTo player)) then {
		_idx = _p_list lbAdd (name _X);
		_p_list lbSetData [_idx,getPlayerUID _x];
		};
	}foreach allPlayers;
};

if(count nearestObjects [player,["Land_Atm_01_F","Land_Atm_02_F"],5] == 0) then {
	_add_money_btn ctrlEnable false;
	_withdraw_money_btn ctrlEnable false;
	_add_money_btn ctrlSetTooltip "Vous avez besoin d'être près d'un ATM";
}; 


{
	_uid = _x select 0;
	_name = _x select 1;
	_class = _x select 2;
	_level = _x select 3;

	_pListUids = allPlayers apply {getPlayerUID _x};

	if(_groupOwner isEqualTo _uid) then {
		_leader ctrlSetText format ["%1",_name];
		_name = "[Chef]" + _name;
	};

	_idx = _members_list lbAdd _name;
	_members_list lbSetData [_idx,_uid];
	_members_list lbSetPicture [_idx,(_level call lvl_getlevelImage)];
	_members_list lbSetTooltip [_idx,format["%1 niveau %2",_class call lvl_classToString,_level]];

	if !(_uid in _pListUids) then {
		_members_list lbSetColor [_idx,[1,0.5,0,0.5]];
		_members_list lbSetValue [_idx,999];
		_members_list lbSetTooltip [_idx,format["%1 niveau %2 [HORS LIGNE]",_class call lvl_classToString,_level]];
	}else{
		_members_list lbSetValue [_idx,-_level];
	};

	lbSortByValue _members_list;
}foreach _members;

