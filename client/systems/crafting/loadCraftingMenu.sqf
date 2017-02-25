/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/
disableSerialization;

if !(isNull findDisplay 23451) exitWith {};

createDialog "craft_menu";
private _display = findDisplay 23451;

private _craft_list = _display displayCtrl 1500;
private _craft_category = _display displayCtrl 2100;

private _comp_1_img = _display displayCtrl 1202;
private _comp_2_img = _display displayCtrl 1200; 
private _comp_3_img = _display displayCtrl 1201;

private _comp_1_txt = _display displayCtrl 1101;
private _comp_2_txt = _display displayCtrl 1102;
private _comp_3_txt = _display displayCtrl 1103;

private _comp_result_img = _display displayCtrl 1203;
private _comp_result_txt = _display displayCtrl 1204;

private _craft_description = _display displayCtrl 1100;
private _craft_btn = _display displayCtrl 1600;
private _close_btn = _display displayCtrl 1601;

_craft_category ctrlAddEventHandler ["LBSelChanged",craft_onCategoryChanged];
_craft_list ctrlAddEventHandler ["LBSelChanged",craft_onReceipeChanged];
_craft_btn ctrlAddEventHandler ["ButtonClick",{_this spawn craft_onCraftClick}];
_close_btn ctrlAddEventHandler ["ButtonClick",{(findDisplay 23451) closeDisplay 0;}];

{
	_index = _craft_category lbAdd getText (_x >> "name");
	_craft_category lbSetData [_index,configName _x];
}forEach ("true" configClasses (missionConfigFile >> "crafting"));

_comp_1_img ctrlSetText "";
_comp_2_img ctrlSetText "";
_comp_3_img ctrlSetText "";
_comp_result_img ctrlSetText "";

_craft_category lbSetCurSel 0;
if(lbSize _craft_list > 0) then {
	_craft_list lbSetCurSel 0;
};


