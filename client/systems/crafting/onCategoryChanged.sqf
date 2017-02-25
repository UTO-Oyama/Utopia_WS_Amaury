/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

private _ctrl = _this select 0;
private _index = _this select 1;

private _craft_list = (ctrlParent _ctrl) displayCtrl 1500;

lbClear _craft_list;

_newCategory = _ctrl lbData _index;


// We need to separate virtual items and weapons because the way to handle them is different
switch (true) do { 
	case (_newCategory == "weapons") : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgWeapons" >> (getText (_x >> "result")) >> "picture");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory == "items") : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _name = getText (_x >> "name");
				private _index = _craft_list lbAdd _name;
				private _itemicon = (((getArray (_x >> "result")) select 0) call mf_inventory_get) select 5;
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory in ["magazines","explosives"]) : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgMagazines" >> (getArray (_x >> "result") select 0) >> "picture");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory == "buildings") : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgVehicles" >> (getText (_x >> "result")) >> "editorPreview");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory == "vehicles") : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgVehicles" >> (getText (_x >> "result")) >> "picture");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory in ["attachments","headgears","uniforms","vests"]) : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgWeapons" >> (getText (_x >> "result")) >> "picture");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	case (_newCategory == "muzzles") : {
		{
			if(_x call craft_hasCorrectClass) then {
				private _name = getText (_x >> "name");
				private _requiredLevel = _x call craft_getRequiredLevel;
				private _index = _craft_list lbAdd _name;
				private _itemicon = getText (configFile >> "CfgWeapons" >> (getText (_x >> "result")) >> "picture");
				_craft_list lbSetData [_index,configName _x];
				_craft_list lbSetValue [_index,_requiredLevel];

				if(_x call craft_hasItems) then {
					_craft_list lbSetColor [_index,[0,1,0,1]];
				}else{ 
				 	_craft_list lbSetColor [_index,[255, 255, 0, 0.8]];
				};

				if !(_x call craft_hasCorrectClassLevel) then {
					_craft_list lbSetColor [_index,[255, 0, 0, 0.8]];
				};

				_craft_list lbSetPicture [_index,_itemicon];
			};
		}forEach ("true" configClasses (missionConfigFile >> "crafting" >> _newCategory));
	}; 
	default {  /*...code...*/ }; 
};

lbSortByValue _craft_list;

[_craft_list,lbCurSel _craft_list] call craft_onReceipeChanged;