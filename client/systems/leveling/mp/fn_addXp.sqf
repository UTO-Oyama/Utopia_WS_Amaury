private _amount = param [0,0,[0]];
private _reason = param [1,0,[0]];

if("xpPlus" call lvl_haveCapacity) then {
	player_xp = player_xp + (_amount * 2);
}else{
	player_xp = player_xp + _amount;
};

[_amount,false,_reason] spawn lvl_updateLogHud;
[] spawn lvl_refreshLevel;