private _theBOX = objNull;

{
	if(!isnil {_x getVariable "virtualItems"}) exitWith {
		_theBOX = _x;
	};
}foreach (player nearEntities [['AllVehicles','ReammoBox_F','Scrapyard_base_F'], 5]);


if(_theBOX isEqualTo objNull || !alive player) exitWith {};
if !(isNull findDisplay 667) exitWith {};

item_box_currBox = _theBOX; //global because need it

disableSerialization;

createDialog "ItemBoxMenu";

private _display = findDisplay 667;

_itemsList = _display displayCtrl 1500;
_pItemsList=  _display displayCtrl 1501;

_dropBtn = _display displayCtrl 1001;
_takeBtn = _display displayCtrl 1002;

_dropBtn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 667;
	_pItemsList=  _display displayCtrl 1501;
	_dropped = _pItemsList lbData (lbCurSel _pItemsList);
	if(_dropped == "") exitWith {};

	_boxItems = item_box_currBox getVariable ["virtualItems",[[],5]];
	_maxContainerItems = _boxItems select 1;
	_containeritems = _boxItems select 0;

	if(count _containeritems >= _maxContainerItems) exitWith {hintSilent "Le conteneur est plein :("};

	_findIndex = _containeritems find _dropped;

	[_dropped,1] call mf_inventory_remove;
    (_boxItems select 0) pushBack _dropped;

    item_box_currBox setVariable ["virtualItems",_boxItems,true];

	call fn_updateItemsLists;
}];
_takeBtn ctrlAddEventHandler ["ButtonClick",{
	_display = findDisplay 667;

	_display = findDisplay 667;
	_itemsList =  _display displayCtrl 1500;
	_taken = _itemsList lbData (lbCurSel _itemsList);
	if(_taken == "") exitWith {};

	_boxItems = item_box_currBox getVariable ["virtualItems",[[],5]];
	_maxContainerItems = _boxItems select 1;

	(_boxItems select 0) deleteAt ((_boxItems select 0) find _taken);

	if (_taken call mf_inventory_is_full) exitWith {hintSilent "Votre inventaire est plein";};
	[_taken,1] call mf_inventory_add;
	item_box_currBox setVariable ["virtualItems",_boxItems,true];

	call fn_updateItemsLists;
}];

call fn_updateItemsLists;
