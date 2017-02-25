private _display = findDisplay 667;

PRIVATE _itemsList = _display displayCtrl 1500;
PRIVATE _pItemsList=  _display displayCtrl 1501;

private _header = _display displayCtrl 1000;

PRIVATE _items = item_box_currBox getVariable ["virtualItems",[[],5]];
private _maxItems = _items select 1;
PRIVATE _pItems = call mf_inventory_all;

lbClear _itemsList;
lbClear _pItemsList;

{
	_item = _x call mf_inventory_get;
	_name = _item select 2;
	_quantity = _item select 1;
	_cfgName = _item select 0;
	_icon = _item select 5;

	
	_index = _itemsList lbAdd _name;
	_itemsList lbSetData [_index,_cfgName];
	_itemsList lbSetPicture [_index,_icon];
}foreach (_items select 0);

{
	_name = _x select 2;
	_quantity = _x select 1;
	_cfgName = _x select 0;
	_icon = _x select 5;

	if(_quantity > 0) then {
	_index = _pItemsList lbAdd format["[%1] %2",_quantity,_name];
	_pItemsList lbSetData [_index,_cfgName];
	_pItemsList lbSetPicture [_index,_icon];
	};
}foreach _pItems;

_header ctrlSetText format ["Conteneur (%1/%2)",count (_items select 0),_maxItems];