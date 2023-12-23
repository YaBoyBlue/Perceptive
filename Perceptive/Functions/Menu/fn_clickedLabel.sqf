params ["_idcSlider","_idcField","_perceivable"];

_display = findDisplay 112233;
_sliderMin = (sliderRange (_display displayCtrl _idcSlider) select 0);

switch (_perceivable) do {
	case "view": {
		if (BLU_firstIncrease != 999) exitWith { [BLU_view] call BLU_fnc_setView };
		if ((BLU_view) != _sliderMin) then {
			BLU_viewTemp = (BLU_view);
			[500] call BLU_fnc_setView;	
		} else {
			[BLU_viewTemp] call BLU_fnc_setView;
		};
	};
	case "object": {
		if ((BLU_syncObject select 0) != 0) exitWith {};

		if ((BLU_object) != _sliderMin) then {
			BLU_objectTemp = (BLU_object);
			[500] call BLU_fnc_setObject;	
		} else {
			[BLU_objectTemp] call BLU_fnc_setObject;
		};
	};
	case "terrain": {
		if ((BLU_terrain) != 1) then {
			BLU_terrainTemp = (BLU_terrain);
			[1] call BLU_fnc_setTerrain;
		} else {
			_newValue = nil;

			switch (BLU_terrainManTemp) do {
				case 5: {_newValue = 3.125};
				case 4: {_newValue = 6.25};
				case 3: {_newValue = 12.5};
				case 2: {_newValue = 25};
				case 1: {_newValue = 50};
			};

			[BLU_terrainTemp] call BLU_fnc_setTerrain;
		};
	};
	case "shadow": {
		if (BLU_shadow != _sliderMin) then {
			BLU_shadowTemp = BLU_shadow;
			[0] call BLU_fnc_setShadow;	
		} else {
			[BLU_shadowTemp] call BLU_fnc_setShadow;
		};
	};
	case "effects": {
		if (BLU_effects != _sliderMin) then {
			BLU_effectsTemp = BLU_effects;
			[0] call BLU_fnc_setEffects;	
		} else {
			[BLU_effectsTemp] call BLU_fnc_setEffects;
		};
	};
	case "ambient": {
		if (BLU_ambient != _sliderMin) then {
			BLU_ambientTemp = BLU_ambient;
			[0] call BLU_fnc_setAmbient;	
		} else {
			[BLU_ambientTemp] call BLU_fnc_setAmbient;
		};
	};
	case "music": {
		if (BLU_music != _sliderMin) then {
			BLU_musicTemp = BLU_music;
			[0] call BLU_fnc_setMusic;	
		} else {
			[BLU_musicTemp] call BLU_fnc_setMusic;
		};
	};
};
