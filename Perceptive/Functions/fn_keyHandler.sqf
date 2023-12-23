params ["_keyEvent"];

switch (_keyEvent) do {
	case "view++": {
		_max = BLU_viewMax;
		_setPerceivable = [
			BLU_view + 100,
			BLU_viewMax
		] select ((BLU_view + 100) > BLU_viewMax);
		if (BLU_firstIncrease != 999) exitWith {};
		[_setPerceivable] call BLU_fnc_setView;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "View"] call BLU_fnc_notify;
	};
	case "view--": {
		_max = BLU_viewMax;
		_setPerceivable = [
			BLU_view - 100,
			500
		] select ((BLU_view - 100) < 500);
		if (BLU_firstIncrease != 999) exitWith {};
		[_setPerceivable] call BLU_fnc_setView;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "View"] call BLU_fnc_notify;
	};
	case "object++": {
		_max = BLU_viewMax;
		if ((BLU_syncObject select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_object + 100,
			BLU_viewMax
		] select ((BLU_object + 100) > BLU_viewMax);
		[_setPerceivable] call BLU_fnc_setObject;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Object"] call BLU_fnc_notify;
	};
	case "object--": {
		_max = BLU_viewMax;
		if ((BLU_syncObject select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_object - 100,
			500
		] select ((BLU_object - 100) < 500);
		[_setPerceivable] call BLU_fnc_setObject;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Object"] call BLU_fnc_notify;
	};
	case "terrain++": {
		_max = 5;
		_setPerceivable = [
			BLU_terrain + 1,
			5
		] select ((BLU_terrain + 1) > 5);
		[_setPerceivable] call BLU_fnc_setTerrain;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Terrain"] call BLU_fnc_notify;
	};
	case "terrain--": {
		_max = 5;
		_setPerceivable = [
			BLU_terrain - 1,
			1
		] select ((BLU_terrain - 1) < 1);
		[_setPerceivable] call BLU_fnc_setTerrain;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Terrain"] call BLU_fnc_notify;
	};
	case "shadow++": {
		_max = 200;
		_setPerceivable = [
			BLU_shadow + 10,
			200
		] select ((BLU_shadow + 10) > 200);
		[_setPerceivable] call BLU_fnc_setShadow;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Shadow"] call BLU_fnc_notify;
	};
	case "shadow--": {
		_max = 200;
		_setPerceivable = [
			BLU_shadow - 10,
			0
		] select ((BLU_shadow - 10) < 0);
		[_setPerceivable] call BLU_fnc_setShadow;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Shadow"] call BLU_fnc_notify;
	};
	case "effects++": {
		_max = 100;
		_setPerceivable = [
			BLU_effects + 10,
			100
		] select ((BLU_effects + 10) > 100);
		[_setPerceivable] call BLU_fnc_setEffects;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Effects"] call BLU_fnc_notify;
	};
	case "effects--": {
		_max = 100;
		_setPerceivable = [
			BLU_effects - 10,
			0
		] select ((BLU_effects - 10) < 0);
		[_setPerceivable] call BLU_fnc_setEffects;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Effects"] call BLU_fnc_notify;
	};
	case "ambient++": {
		_max = 100;
		if ((BLU_syncAmbient select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_ambient + 10,
			100
		] select ((BLU_ambient + 10) > 100);
		[_setPerceivable] call BLU_fnc_setAmbient;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Ambient"] call BLU_fnc_notify;
	};
	case "ambient--": {
		_max = 100;
		if ((BLU_syncAmbient select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_ambient - 10,
			0
		] select ((BLU_ambient - 10) < 0);
		[_setPerceivable] call BLU_fnc_setAmbient;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Ambient"] call BLU_fnc_notify;
	};
	case "music++": {
		_max = 100;
		if ((BLU_syncMusic select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_music + 10,
			100
		] select ((BLU_music + 10) > 100);
		[_setPerceivable] call BLU_fnc_setMusic;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Music"] call BLU_fnc_notify;
	};
	case "music--": {
		_max = 100;
		if ((BLU_syncMusic select 0) != 0) exitWith {};
		_setPerceivable = [
			BLU_music - 10,
			0
		] select ((BLU_music - 10) < 0);
		[_setPerceivable] call BLU_fnc_setMusic;
		[] call BLU_fnc_savePerceivables;
		[_max, _setPerceivable, "Music"] call BLU_fnc_notify;
	};
}