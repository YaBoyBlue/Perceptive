params ["_value"];

_min = 0;
_max = 100;

if (_value < _min) then { _value = _min };
if (_value > _max) then { _value = _max };

0 fadeSound (_value * 0.01);
BLU_effects = _value;

switch (BLU_syncAmbient select 0) do {
	case 0: {};
	case 1: {
		_setAmbient = [
			(_value) * ((BLU_syncAmbient select 1) / 100),
			0
		] select (((_value) * ((BLU_syncAmbient select 1) / 100)) < 0);

		[_setAmbient] spawn BLU_fnc_setAmbient;
	};
	case 2: {
		_setAmbient = [
			(_value) - (BLU_syncAmbient select 1),
			0
		] select (((_value) - (BLU_syncAmbient select 1)) < 0);

		[_setAmbient] spawn BLU_fnc_setAmbient;
	};
	Default {};
};

switch (BLU_syncMusic select 0) do {
	case 0: {};
	case 1: {
		_setMusic = [
			(_value) * ((BLU_syncMusic select 1) / 100),
			0
		] select (((_value) * ((BLU_syncMusic select 1) / 100)) < 0);

		[_setMusic] spawn BLU_fnc_setMusic;
	};
	case 2: {
		_setMusic = [
			(_value) - (BLU_syncMusic select 1),
			0
		] select (((_value) - (BLU_syncMusic select 1)) < 0);

		[_setMusic] spawn BLU_fnc_setMusic;
	};
	Default {};
};

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1004) sliderSetPosition (_value);
(_display displayCtrl 1407) ctrlSetText (str _value);