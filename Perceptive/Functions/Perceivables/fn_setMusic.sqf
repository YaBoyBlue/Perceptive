params ["_value"];

_min = 0;
_max = 100;

if (_value < _min) then { _value = _min };
if (_value > _max) then { _value = _max };

0 fadeMusic (_value * 0.01);
BLU_music = _value;

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1006) sliderSetPosition (_value);
(_display displayCtrl 1409) ctrlSetText (str _value);