private _return = -1;
{
	if((_x select 0) isEqualTo _this) exitWith {
		_return = _x select 3;
	};
}forEach getArray (missionConfigFile >> "CfgLeveling" >> "levels");

_return