params ["_value"];

_list = _value select 0;
_value = _value select 1;

if ((BLU_syncAmbient select 0) == 1) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 100) then { _value = 100 };
};

if ((BLU_syncAmbient select 0) == 2) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 100) then { _value = 100 };
};

BLU_syncAmbient = [_list, _value];

_display = findDisplay 112233;
if (isNull _display) exitWith {};

BLU_clickedTab = true;

(_display displayCtrl 2103) lbSetCurSel (_list);

if ((_list) == 0) exitWith {
	(_display displayCtrl 1410) ctrlSetText (str 0); 
	(_display displayCtrl 1410) ctrlEnable false;
	(_display displayCtrl 1005) ctrlEnable true;
	(_display displayCtrl 1408) ctrlEnable true;

	BLU_clickedTab = false;
};

if ((_list) == 1) exitWith {
	(_display displayCtrl 1410) ctrlSetText (str (_value));
	(_display displayCtrl 1410) ctrlEnable true;
	(_display displayCtrl 1005) ctrlEnable false;
	(_display displayCtrl 1408) ctrlEnable false;

	[BLU_effects * (_value / 100)] call BLU_fnc_setAmbient;

	BLU_clickedTab = false;
};

if ((_list) == 2) exitWith {
	(_display displayCtrl 1410) ctrlSetText (str (_value));
	(_display displayCtrl 1410) ctrlEnable true;
	(_display displayCtrl 1005) ctrlEnable false;
	(_display displayCtrl 1408) ctrlEnable false;

	[BLU_effects - _value] call BLU_fnc_setAmbient;

	BLU_clickedTab = false;
};