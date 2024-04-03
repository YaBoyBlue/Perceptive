params ["_idcExtraField","_extra"];

_display = findDisplay 112233;

switch (_extra) do {
	case "syncObject": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_syncObject select 0, _value]] call BLU_fnc_setSyncObject;
	};
	case "ifFocused": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_ifFocused select 0, _value]] call BLU_fnc_setIfFocused;
	};
	case "ifZoomed": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_ifScoped select 0, _value]] call BLU_fnc_setIfScoped;
	};
	case "syncAmbient": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_syncAmbient select 0, _value]] call BLU_fnc_setSyncAmbient;
	};
	case "syncMusic": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_syncMusic select 0, _value]] call BLU_fnc_setSyncMusic;
	};
	case "inMap": {
		_value = parseNumber (ctrlText (_display displayCtrl _idcExtraField));
		[[BLU_inMap select 0, _value]] call BLU_fnc_setInMap;
	};
};