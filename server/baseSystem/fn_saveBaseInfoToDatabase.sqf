/**
@ Author : [utopia] Amaury
@ Creation : 4/12/16
@
**/

private _side = param[0,""];
private _money = param[1,0];
private _level = param[2,0];

[format ["updateServerBase:%1:%2:%3",_side,_money,_level]] call extDB_Database_async;