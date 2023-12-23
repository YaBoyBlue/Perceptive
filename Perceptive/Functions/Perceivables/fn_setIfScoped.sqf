params ["_value"];

_list = _value select 0;
_value = _value select 1;

if ((BLU_ifScoped select 0) == 1) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 100) then { _value = 100 };
};

if ((BLU_ifScoped select 0) == 2) then {
	if (_value < 0) then { _value = 0 };
	if (_value > 12000) then { _value = 12000 };
};

BLU_ifScoped = [_list, _value];

_display = findDisplay 112233;
if (isNull _display) exitWith {};

BLU_clickedTab = true;

(_display displayCtrl 2102) lbSetCurSel (_list);

if ((_list) == 0) exitWith {
	(_display displayCtrl 1406) ctrlSetText (str 0); 
	(_display displayCtrl 1406) ctrlEnable false;

	BLU_clickedTab = false;
};

if ((_list) == 1) exitWith {
	(_display displayCtrl 1406) ctrlSetText (str (_value));
	(_display displayCtrl 1406) ctrlEnable true;

	BLU_clickedTab = false;
};

if ((_list) == 2) exitWith {
	(_display displayCtrl 1406) ctrlSetText (str (_value));
	(_display displayCtrl 1406) ctrlEnable true;

	BLU_clickedTab = false;
};