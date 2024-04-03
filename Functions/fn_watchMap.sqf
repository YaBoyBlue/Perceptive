waitUntil {!isNil "BLU_vehicleType"};

BLU_mapTemp = nil;
_lastMapState = visibleMap;

while {true} do {
	if (visibleMap) then {
		BLU_mapTemp = BLU_effects;
		_lastMapState = true;

		switch (BLU_inMap select 0) do {
			case 0: {};
			case 1: {		
				[BLU_effects - (BLU_effects * ((BLU_inMap select 1) / 100))] call BLU_fnc_setEffects;
			};
			case 2: {		
				[BLU_effects - (BLU_inMap select 1)] call BLU_fnc_setEffects;
			};
			Default {};
		};
	};

	if (!visibleMap && _lastMapState == true) then {
		_lastMapState = false;
		[BLU_mapTemp] call BLU_fnc_setEffects;
	};

	waitUntil {
		sleep 0.1;

		visibleMap != _lastMapState;
	};
};