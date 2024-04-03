waitUntil {!isNil "BLU_vehicleType"};
waitUntil {!isNil "BLU_defaultFOV"};
waitUntil {!isNil "BLU_currentVehicle"};
waitUntil {!isNil "BLU_currentUAV"};
waitUntil {!isNil "BLU_currentUAVRole"};

_zoomTemp = BLU_view;
_lastFOV = nil;
BLU_firstIncrease = 999;

while {true} do {
	BLU_fov = nil;

	switch (true) do {
		case (BLU_currentUAVRole == ""): {
			BLU_fov = round (BLU_defaultFOV / getObjectFOV BLU_currentVehicle);
		};
		default {
			BLU_fov = round (BLU_defaultFOV / getObjectFOV BLU_currentUAV);
		};
	};

	_lastFOV = BLU_fov;

	if (cameraView == "GUNNER") then {
		if ((BLU_ifScoped select 0) == 1) exitWith {
			if (BLU_fov > 1 && BLU_fov < BLU_firstIncrease) exitWith {				
				BLU_firstIncrease = BLU_fov;
				_zoomTemp = BLU_view;
				[BLU_view * (1 + ((BLU_ifScoped select 1) / 100))] call BLU_fnc_setView;
			};

			if (BLU_fov == 1) exitWith {				
				BLU_firstIncrease = 999;
				[_zoomTemp] call BLU_fnc_setView;
			};
		};

		if ((BLU_ifScoped select 0) == 2) exitWith {
			if (BLU_fov > 1 && BLU_fov < BLU_firstIncrease) exitWith {				
				BLU_firstIncrease = BLU_fov;
				_zoomTemp = BLU_view;
				[BLU_view  + (BLU_ifScoped select 1)] call BLU_fnc_setView;
			};

			if (BLU_fov == 1) exitWith {				
				BLU_firstIncrease = 999;
				[_zoomTemp] call BLU_fnc_setView;
			};
		};
	};

	if (cameraView != "GUNNER") then {
		if ((BLU_ifFocused select 0) == 1) exitWith {
			if (BLU_fov > 1 && BLU_fov < BLU_firstIncrease) exitWith {				
				BLU_firstIncrease = BLU_fov;
				_zoomTemp = BLU_view;
				[BLU_view * (1 + ((BLU_ifFocused select 1) / 100))] call BLU_fnc_setView;
			};

			if (BLU_fov == 1) exitWith {				
				BLU_firstIncrease = 999;
				[_zoomTemp] call BLU_fnc_setView;
			};
		};

		if ((BLU_ifFocused select 0) == 2) exitWith {
			if (BLU_fov > 1 && BLU_fov < BLU_firstIncrease) exitWith {				
				BLU_firstIncrease = BLU_fov;
				_zoomTemp = BLU_view;
				[BLU_view  + (BLU_ifFocused select 1)] call BLU_fnc_setView;
			};

			if (BLU_fov == 1) exitWith {				
				BLU_firstIncrease = 999;
				[_zoomTemp] call BLU_fnc_setView;
			};
		};
	};

	waitUntil {
		_newFOV1 = nil;
		_newFOV2 = nil;

		sleep 0.1;

		switch (true) do {
			case (BLU_currentUAVRole == ""): {
				_newFOV1 = round (BLU_defaultFOV / getObjectFOV BLU_currentVehicle);
			};
			default {
				_newFOV1 = round (BLU_defaultFOV / getObjectFOV BLU_currentUAV);
			};
		};

		sleep 0.1;

		switch (true) do {
			case (BLU_currentUAVRole == ""): {
				_newFOV2 = round (BLU_defaultFOV / getObjectFOV BLU_currentVehicle);
			};
			default {
				_newFOV2 = round (BLU_defaultFOV / getObjectFOV BLU_currentUAV);
			};
		};

		(_newFOV1 == _newFOV2) && _newFOV1 != _lastFOV;
	};
};