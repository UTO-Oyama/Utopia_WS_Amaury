/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

private _cfgEntry = _this;
private _requiredItems = getArray (_cfgEntry >> "required");
private _cancraft = true;

{
	_cName = _x select 0;
	_quantity = _x select 1;

	if(_cName call mf_inventory_count < _quantity) exitWith {
		_cancraft = false;
	};
}forEach _requiredItems;

_cancraft