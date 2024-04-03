params ["_value"];

_min = 0;
_max = 100;

if (_value < _min) then { _value = _min };
if (_value > _max) then { _value = _max };

0 fadeEnvironment (_value * 0.01);
BLU_ambient = _value;

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1005) sliderSetPosition (_value);
(_display displayCtrl 1408) ctrlSetText (str _value);