params ["_value"];

_list = _value select 0;
_value = _value select 1;

if ((BLU_syncMusic select 0) == 1) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 100) then { _value = 100 };
};

if ((BLU_syncMusic select 0) == 2) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 100) then { _value = 100 };
};

BLU_syncMusic = [_list, _value];

_display = findDisplay 112233;
if (isNull _display) exitWith {};

BLU_clickedTab = true;

(_display displayCtrl 2104) lbSetCurSel (_list);

if ((_list) == 0) exitWith {
	(_display displayCtrl 1411) ctrlSetText (str 0); 
	(_display displayCtrl 1411) ctrlEnable false;
	(_display displayCtrl 1006) ctrlEnable true;
	(_display displayCtrl 1409) ctrlEnable true;

	BLU_clickedTab = false;
};

if ((_list) == 1) exitWith {
	(_display displayCtrl 1411) ctrlSetText (str (_value));
	(_display displayCtrl 1411) ctrlEnable true;
	(_display displayCtrl 1006) ctrlEnable false;
	(_display displayCtrl 1409) ctrlEnable false;

	[BLU_effects * (_value / 100)] call BLU_fnc_setMusic;

	BLU_clickedTab = false;
};

if ((_list) == 2) exitWith {
	(_display displayCtrl 1411) ctrlSetText (str (_value));
	(_display displayCtrl 1411) ctrlEnable true;
	(_display displayCtrl 1006) ctrlEnable false;
	(_display displayCtrl 1409) ctrlEnable false;

	[BLU_effects - _value] call BLU_fnc_setMusic;

	BLU_clickedTab = false;
};