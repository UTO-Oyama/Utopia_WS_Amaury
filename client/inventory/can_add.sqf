// script by [utopia] Amaury using MercyfulFate inventory system

#include "define.sqf"

private _full = true;
private _item = param [0,"",[""]];
private _quantityHandle = param[1,1,[0]];

_item = _item call mf_inventory_get;
private _max = _item select MAX;

_full = (_item select QTY) + _quantityHandle <= _max;

_full;

