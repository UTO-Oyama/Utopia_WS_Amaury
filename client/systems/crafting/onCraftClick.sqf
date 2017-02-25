/**
@Author : [utopia] Amaury
@Creation : 22/11/16
@Modification : 27/11/16
@Description : 
**/

disableSerialization;

private _display = findDisplay 23451;
private _craft_list = _display displayCtrl 1500;
private _index = lbCurSel _craft_list;
private _craft_category = _display displayCtrl 2100;
private _craftBar = _display displayCtrl 4000;
private _cancel = false;

if(progressPosition _craftBar > 0) exitWith {
	hintSilent "Un objet est déjà en cours de création ...";
};

_category = (_craft_category lbData (lbCurSel _craft_category));
_receipe = missionConfigFile >> "crafting" >> _category >> (_craft_list lbData _index);
_receipeName = getText (_receipe >> "name");
_requiredItems = getArray (_receipe >> "required");
_crafting_time = getNumber (_receipe >> "craftingTime");

private ["_outputItem","_outputClassName","_outputQtty","_name"];

switch (true) do {
	case (_category == "weapons"):{
		_outputItem = getText (_receipe >> "result");

		_outputClassName = _outputItem;
		_outputQtty = 1;

		_name = getText (configFile >> "CfgWeapons" >> _outputClassName >> "displayName");
	};
	case (_category in ["attachments","uniforms","vests","headgears"]):{
		_outputItem = getText (_receipe >> "result");

		_outputClassName = _outputItem;
		_outputQtty = 1;

		_name = getText (configFile >> "CfgWeapons" >> _outputClassName >> "displayName");
	};
	case (_category == "muzzles"):{
		_outputItem = getText (_receipe >> "result");

		_outputClassName = _outputItem;
		_outputQtty = 1;

		_name = getText (configFile >> "CfgWeapons" >> _outputClassName >> "displayName");
	};
	case (_category == "items"):{
		_outputItem = getArray (_receipe >> "result");

		_outputClassName = _outputItem select 0;
		_outputQtty = _outputItem select 1;

		_outputItemProperties = _outputClassName call mf_inventory_get;
		_name = _outputItemProperties select 2;
		if !([_outputClassName,_outputQtty] call mf_inventory_can_add) then {
			_cancel = true;
		};
	};
	case (_category in ["magazines","explosives"]):{
		_outputItem = getArray (_receipe >> "result");

		_outputClassName = _outputItem select 0;
		_outputQtty = _outputItem select 1;

		_name = getText (configFile >> "CfgMagazines" >> _outputClassName >> "displayName");
	};
	case (_category in ["buildings","vehicles"]):{
		_outputItem = getText (_receipe >> "result");

		_outputClassName = _outputItem;
		_outputQtty = 1;

		_result = ["Etes vous sûr ? <br/> Vérifiez que vous êtes dans une zone sûre avec assez d'espace sinon le véhicule risque d'être endommagé voir détruit.", "Confirmer", true, true] call BIS_fnc_guiMessage;
		if(!_result) then {
			_cancel = true;
		};
		_name = getText (configFile >> "CfgVehicles" >> _outputClassName >> "displayName");
	};
};

if(_cancel) exitWith {
	hintSilent "Vous n'avez pas assez de place sur vous.";
};

if !(_receipe call craft_hasItems) exitWith {
	hintSilent "Il manque des items.";
};


_crafting_time = _crafting_time * 10;

for "_i" from 0 to _crafting_time do {
	if(isNull _craftBar) exitWith {
		_cancel = true;
	};
	_craftBar progressSetPosition (((100 / (_crafting_time / 10)) * _i) / 100) / 10;
	uiSleep 0.1;
};

if(_cancel) exitWith {
	hintSilent "Le crafting a été annulé";
};


{
	_cName = _x select 0;
	_quantity = _x select 1;

	[_cName,_quantity] call mf_inventory_remove;
}forEach _requiredItems;

switch (true) do { 
	case (_category == "weapons") : {
		if(player canAdd _outputClassName) then {
			player addWeapon _outputClassName;
			hintSilent format["L'arme %1 a été craft.",_name];
		}else{
			_wpHolder = "groundweaponholder" createVehicleLocal (getPosATL player);
			_wpHolder addWeaponCargo [_outputClassName,1];
			hintSilent format["L'arme %1 a été craft et a été déposée sur le sol. (visible uniquement par vous).\nSi elle n'est pas ramassée , l'arme sera détruite dans 1 minute.",_name];
			_wpHolder spawn {
				UIsleep 60;
				deleteVehicle _this;
			};
			_wpHolder setPosATL (getPosATL player);
		};
	}; 
	case (_category in ["attachments","uniforms","vests","headgears"]) : {
		if(player canAdd _outputClassName) then {
			player addItem _outputClassName;
			hintSilent format["%1 a été ajouté à votre inventaire.",_name];
		}else{
			_wpHolder = "groundweaponholder" createVehicleLocal (getPosATL player);
			_wpHolder addItemCargo [_outputClassName,1];
			hintSilent format["L'objet a été déposée sur le sol. (visible uniquement par vous).\nSi il n'est pas ramassé , il sera détruit dans 1 minute.",_name];
			_wpHolder spawn {
				UIsleep 60;
				deleteVehicle _this;
			};
			_wpHolder setPosATL (getPosATL player);
		};
	}; 
	case (_category == "muzzles") : {
		if(player canAdd _outputClassName) then {
			player addItem _outputClassName;
			hintSilent format["%1 a été ajouté à votre inventaire.",_name];
		}else{
			_wpHolder = "groundweaponholder" createVehicleLocal (getPosATL player);
			_wpHolder addItemCargo [_outputClassName,1];
			hintSilent format["L'attachement d'arme %1 a été craft et a été déposée sur le sol. (visible uniquement par vous).\nSi il n'est pas ramassé , il sera détruit dans 1 minute.",_name];
			_wpHolder spawn {
				UIsleep 60;
				deleteVehicle _this;
			};
			_wpHolder setPosATL (getPosATL player);
		};
	}; 
	case (_category in ["buildings","vehicles"]) : {
		_outputClassName createVehicle (position player);
	}; 
	case (_category == "items")  : {
		[_outputClassName,_outputQtty] call mf_inventory_add;
		hintSilent format["%1 %2 ont été craftés",_outputQtty,_name];
	}; 
	case (_category in ["magazines","explosives"]) : {
		if(player canAdd [_outputClassName,_outputQtty]) then {
			player addMagazines [_outputClassName,_outputQtty];
			hintSilent format["Les %1 %2 ont été craft.",_outputQtty,_name];
		}else{
			_wpHolder = "groundweaponholder" createVehicleLocal (getPosATL player);
			_wpHolder addMagazineCargo [_outputClassName,_outputQtty];
			hintSilent format["Les chargeurs ont été déposés sur le sol. (visible uniquement par vous).\nSi elle n'est pas ramassée , l'arme sera détruite dans 1 minute.",_name];
			_wpHolder spawn {
				UIsleep 60;
				deleteVehicle _this;
			};
			_wpHolder setPosATL (getPosATL player);
		};
	};
	default {  /*...code...*/ }; 
};


_category_sel = lbCurSel _craft_category;
_craft_sel = lbCurSel _craft_list;

[_craft_category,_category_sel] call craft_onCategoryChanged;
[_craft_list,_craft_sel] call craft_onReceipeChanged;

_craftBar progressSetPosition 0;

with missionNamespace do { [true] spawn fn_savePlayerData };