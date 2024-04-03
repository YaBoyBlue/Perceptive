params ["_value","_perceivable"];

switch (_perceivable) do {
	case "view": {
		if (BLU_firstIncrease != 999) exitWith { [BLU_view] call BLU_fnc_setView };
		[_value] call BLU_fnc_setView;
	};
	case "object": {
		[_value] call BLU_fnc_setObject;
	};
	case "terrain": {
		[_value] call BLU_fnc_setTerrain;
	};
	case "shadow": {
		[_value] call BLU_fnc_setShadow;
	};
	case "effects": {
		[_value] call BLU_fnc_setEffects;
	};
	case "ambient": {
		[_value] call BLU_fnc_setAmbient;
	};
	case "music": {
		[_value] call BLU_fnc_setMusic;
	};
};