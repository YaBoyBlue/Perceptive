params ["_value"];

_min = 500;
_max = BLU_viewMax;

if (_value < _min) exitWith {};
if (_value > _max) then { _value = _max };

setObjectViewDistance (_value);
BLU_object = _value;

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1001) sliderSetPosition (_value);
(_display displayCtrl 1401) ctrlSetText (str _value);