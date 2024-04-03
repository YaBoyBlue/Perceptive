waitUntil {!isNil "BLU_vehicleType"};
waitUntil {!isNil "BLU_currentVehicle"};
waitUntil {!isNil "BLU_currentUAV"};
waitUntil {!isNil "BLU_newVehicle"};

BLU_isGunner = nil;
BLU_defaultFOV = nil;

while {true} do {
	BLU_isGunner = (cameraView == "GUNNER");

	switch (true) do {
		case (BLU_currentUAVRole == ""): {
			BLU_defaultFOV = (getObjectFOV BLU_currentVehicle);
		};
		default {
			BLU_defaultFOV = (getObjectFOV BLU_currentUAV);
		};
	};

	BLU_newVehicle = false;

	waitUntil {
		sleep 0.2;

		_newView = (cameraView == "GUNNER");

		(_newView != BLU_isGunner && (BLU_vehicleType == "ground" || BLU_vehicleType == "air")) || BLU_newVehicle;
	};
};