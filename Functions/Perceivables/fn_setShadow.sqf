params ["_value"];

_min = 0;
_max = 200;

if (_value < _min) then { _value = _min };
if (_value > _max) then { _value = _max };

setShadowDistance (_value);
BLU_shadow = _value;

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1003) sliderSetPosition (_value);
(_display displayCtrl 1403) ctrlSetText (str _value);