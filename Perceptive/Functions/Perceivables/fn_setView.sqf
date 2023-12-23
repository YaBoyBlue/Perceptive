params ["_value"];

_min = 500;
_max = BLU_viewMax;

if (_value < _min) exitWith {};
if (_value > _max) then { _value = _max };

setViewDistance (_value);
BLU_view = _value;

switch (BLU_syncObject select 0) do {
	case 0: {};
	case 1: {
		_setObject = [
			(_value) * ((BLU_syncObject select 1) / 100),
			0
		] select (((_value) * ((BLU_syncObject select 1) / 100)) < 0);

		[_setObject] spawn BLU_fnc_setObject;
	};
	case 2: {
		_setObject = [
			(_value) - (BLU_syncObject select 1),
			0
		] select (((_value) - (BLU_syncObject select 1)) < 0);

		[_setObject] spawn BLU_fnc_setObject;
	};
	Default {};
};

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1000) sliderSetPosition (_value);
(_display displayCtrl 1400) ctrlSetText (str _value);