/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

private _ctrl = _this select 0;
private _index = _this select 1;
private _display = ctrlParent _ctrl;
private _craft_category = _display displayCtrl 2100;
private _result_item_description_text = _display displayCtrl 1100;

private _window = _display displayCtrl 2200;

private _craft_btn = _display displayCtrl 1600;

private _comp_1_img = _display displayCtrl 1202;
private _comp_2_img = _display displayCtrl 1200; 
private _comp_3_img = _display displayCtrl 1201;
private _comp_1_txt = _display displayCtrl 1101;
private _comp_2_txt = _display displayCtrl 1102;
private _comp_3_txt = _display displayCtrl 1103;
private _comp_result_img = _display displayCtrl 1203;
private _comp_result_txt = _display displayCtrl 1104;

private _components = [[_comp_3_img,_comp_3_txt],[_comp_2_img,_comp_2_txt],[_comp_1_img,_comp_1_txt]];

_comp_3_img_posx = (ctrlPosition _comp_3_img) select 0;
_comp_1_img_posx = (ctrlPosition _comp_1_img) select 0;
_comp_2_img_posx = (ctrlPosition _comp_2_img) select 0;

_comp_3_txt_posx = (ctrlPosition _comp_3_txt) select 0;
_comp_1_txt_posx = (ctrlPosition _comp_1_txt) select 0;
_comp_2_txt_posx = (ctrlPosition _comp_2_txt) select 0;

_components_dist = _comp_3_img_posx  - _comp_1_img_posx;

private _category = (_craft_category lbData (lbCurSel _craft_category));

private _receipe = missionConfigFile >> "crafting" >> _category >> (_ctrl lbData _index);

if(_receipe isEqualTo configNull) exitWith {};

private _receipeLevel = _receipe call craft_getRequiredLevel;
private _receipeName = getText (_receipe >> "name");
private _requiredItems = getArray (_receipe >> "required");

private ["_outputItem","_outPutItemQty","_outputItemIcon","_outPutItemName"];

_result_item_description = getText (_receipe >> "craft_description");

switch (true) do { 
	case (_category == "weapons") : {
		_outputItem = getText (_receipe >> "result");
		_outPutItemQty = 1;
		_outPutItemName = getText (configFile >> "CfgWeapons" >> _outputItem >> "displayName");
		_outputItemIcon = getText (configFile >> "CfgWeapons" >> _outputItem >> "picture");

		if(_result_item_description == "auto") then {
			_result_item_description = getText (configFile >> "CfgWeapons" >> _outputItem >> "descriptionShort");
		};
	}; 
	case (_category in ["attachments","headgears","uniforms","vests"]) : {
		_outputItem = getText (_receipe >> "result");
		_outPutItemQty = 1;
		_outPutItemName = getText (configFile >> "CfgWeapons" >> _outputItem >> "displayName");
		_outputItemIcon = getText (configFile >> "CfgWeapons" >> _outputItem >> "picture");

		if(_result_item_description == "auto") then {
			_result_item_description = getText (configFile >> "CfgWeapons" >> _outputItem >> "descriptionShort");
		};
	}; 
	case (_category == "muzzles") : {
		_outputItem = getText (_receipe >> "result");
		_outPutItemQty = 1;
		_outPutItemName = getText (configFile >> "CfgWeapons" >> _outputItem >> "displayName");
		_outputItemIcon = getText (configFile >> "CfgWeapons" >> _outputItem >> "picture");

		if(_result_item_description == "auto") then {
			_result_item_description = getText (configFile >> "CfgWeapons" >> _outputItem >> "descriptionShort");
		};
	}; 
	case (_category == "items") : {
		_outputItem = getArray (_receipe >> "result");
		_outPutItemArray = (_outputItem select 0) call mf_inventory_get;
		_outPutItemQty = _outputItem select 1;
		_outPutItemName = _outPutItemArray select 2;
		_outputItemIcon = _outPutItemArray select 5;
	}; 
	case (_category in ["magazines","explosives"]) : {
		_outputItem = getArray (_receipe >> "result") select 0;
		_outPutItemQty = getArray (_receipe >> "result") select 1;
		_outPutItemName = getText (configFile >> "CfgMagazines" >> _outputItem >> "displayName");
		_outputItemIcon = getText (configFile >> "CfgMagazines" >> _outputItem >> "picture");

		if(_result_item_description == "auto") then {
			_result_item_description = getText (configFile >> "CfgMagazines" >> _outputItem >> "descriptionShort");
		};
	}; 
	case (_category in ["buildings","vehicles"]) : {
		_outputItem = getText (_receipe >> "result");
		_outPutItemQty = 1;
		_outPutItemName = getText (configFile >> "CfgVehicles" >> _outputItem >> "displayName");
		_outputItemIcon = getText (configFile >> "CfgVehicles" >> _outputItem >> "editorPreview");
	}; 
	default {  /*...code...*/ }; 
};


while {count _requiredItems < count _components} do {
	(_components select 0 select 0) ctrlSetText "";
	(_components select 0 select 0) ctrlSetTooltip "";
	(_components select 0 select 1) ctrlSetStructuredText text "";
	_components deleteAt 0;
};

_craft_btn ctrlEnable true;
_craft_btn ctrlSetTooltip "";

if !(_receipe call craft_hasCorrectClasslevel) then {
	_craft_btn ctrlEnable false;
	_craft_btn ctrlSetTooltip format["Niveau insuffisant (%1 requis)",_receipeLevel];
};

_craft_btn ctrlCommit 0;

{
	_pCtrl = _x select 0;
	_qTtyTxt = _x select 1;
	_color = "15FF00";

	private _itemArray = ((_requiredItems select _forEachIndex) select 0) call mf_inventory_get;
	_name = _itemArray select 2;
	_inventoryQty = _itemArray select 1;
	_icon = _itemArray select 5;

	_qTty = (_requiredItems select _forEachIndex) select 1;

	_pCtrl ctrlSetText _icon;
	_pCtrl ctrlSetTooltip _name;
	if(_qTty > _inventoryQty) then {_color = "FF0000";};
	_qTtyTxt ctrlSetStructuredText parseText format ["<t align='center' color='#%3'>%1/%2</t>",_inventoryQty,_qTty,_color];
}forEach _components;

_result_item_description_text ctrlSetStructuredText parseText format ["<t size='0.8' color='#008000' align='center'>%1</t><br/><t size='0.75'>%2</t>",_outPutItemName,_result_item_description];
_comp_result_img ctrlSetText _outputItemIcon;
_comp_result_img ctrlSetTooltip _outPutItemName;

_comp_result_txt ctrlSetStructuredText parseText format ["<t align='center'>%1</t>",_outPutItemQty];