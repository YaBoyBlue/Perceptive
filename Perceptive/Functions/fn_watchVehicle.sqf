while {true} do {
	BLU_currentVehicle = vehicle player;
	BLU_currentUAV = getConnectedUAV player;
	BLU_currentUAVRole = UAVControl BLU_currentUAV select 1;

	switch (true) do {
		case (BLU_currentUAVRole != ""): {
			switch (true) do {
				_vehIsLand = BLU_currentUAV isKindOf "LandVehicle";
				_vehIsShip = BLU_currentUAV isKindOf "Ship";
				_vehIsAir = BLU_currentUAV isKindOf "Air";

				case (!_vehIsLand && !_vehIsShip && !_vehIsAir): {
					BLU_vehicleType = "man";
					
					[] call BLU_fnc_setPerceivables;
				};
				case (_vehIsLand || _vehIsShip): {
					BLU_vehicleType = "ground";
					
					[] call BLU_fnc_setPerceivables;
				};
				case (_vehIsAir): {
					BLU_vehicleType = "air";
					
					[] call BLU_fnc_setPerceivables;
				};
				default {};
			};
		};
		default {
			switch (true) do {

				_vehIsLand = BLU_currentVehicle isKindOf "LandVehicle";
				_vehIsShip = BLU_currentVehicle isKindOf "Ship";
				_vehIsAir = BLU_currentVehicle isKindOf "Air";

				case (!_vehIsLand && !_vehIsShip && !_vehIsAir): {
					BLU_vehicleType = "man";
					
					[] call BLU_fnc_setPerceivables;
				};
				case (_vehIsLand || _vehIsShip): {
					BLU_vehicleType = "ground";
					
					[] call BLU_fnc_setPerceivables;
				};
				case (_vehIsAir): {
					BLU_vehicleType = "air";
					
					[] call BLU_fnc_setPerceivables;
				};
				default {};
			};
		};
	};

	BLU_newVehicle = true;

	waitUntil {
		sleep 0.2;

		_newVehicle = vehicle player;
		_newUAV = UAVControl (getConnectedUAV player) select 1;

		_newVehicle != BLU_currentVehicle || _newUAV != BLU_currentUAVRole;
	};
	
	if (!isNull(findDisplay 112233)) then {
		(findDisplay 112233) closeDisplay 1;
	};
};