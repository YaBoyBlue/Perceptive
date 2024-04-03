[] spawn {
	waitUntil { sleep 0.5; !isNull player; };

	//Notify

	cutRsc["Notify","PLAIN"];	

	NTFY_GUI_GRID_X = ((safeZoneX + (safeZoneW - ((safezoneW / safezoneH) min 1.2))));
	NTFY_GUI_GRID_Y = ((safeZoneY));
	NTFY_GUI_GRID_W = ((((safezoneW / safezoneH) min 1.2) / 40));
	NTFY_GUI_GRID_H = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
	NTFY_GUI_GRID_WAbs = (((safezoneW / safezoneH) min 1.2));
	NTFY_GUI_GRID_HAbs = ((((safezoneW / safezoneH) min 1.2) / 1.2));

	NTFY_list = [];
	NTFY_limit = 3;
	NTFY_life = 1;
	NTFY_x = 25.71 * NTFY_GUI_GRID_W + NTFY_GUI_GRID_X;
	NTFY_y = 5.43 * NTFY_GUI_GRID_H + NTFY_GUI_GRID_Y;
	NTFY_w = 10 * NTFY_GUI_GRID_W;
	NTFY_h = 1.25 * NTFY_GUI_GRID_H;
	NTFY_s = NTFY_h + 0.01;

	// NTFY_x = 1.7;
	// NTFY_y = -0.2;
	// NTFY_w = 0.3;
	// NTFY_h = 0.05;

	//[1.7,-0.2,0.3,0.05]

	//Perceptive

	BLU_viewMax = 12000;
	BLU_viewMaxMan = 12000;
	BLU_viewMaxGround = 12000;
	BLU_viewMaxAir = 12000;

	[] spawn {
		waitUntil { sleep 0.1; !isNil "BLU_view"; };

		if (!isNil "ace_viewdistance_enabled") then {
			while {true} do {
				if (ace_viewdistance_enabled) then {
					if (ace_viewdistance_limitViewDistance >= 500) then {
						BLU_viewMaxMan = ace_viewdistance_limitViewDistance;
						BLU_viewMaxGround = ace_viewdistance_limitViewDistance;
						BLU_viewMaxAir = ace_viewdistance_limitViewDistance;
					};
					if (ace_viewdistance_viewDistanceOnFoot > ace_viewdistance_limitViewDistance) then {
						BLU_viewMaxMan = ace_viewdistance_viewDistanceOnFoot;
					};
					if (ace_viewdistance_viewDistanceLandVehicle > ace_viewdistance_limitViewDistance) then {
						BLU_viewMaxGround = ace_viewdistance_viewDistanceLandVehicle;
					};
					if (ace_viewdistance_viewDistanceAirVehicle > ace_viewdistance_limitViewDistance) then {
						BLU_viewMaxAir = ace_viewdistance_viewDistanceAirVehicle;
					};

					switch (BLU_vehicleType) do {
						case "man": {
							if (BLU_view > BLU_viewMaxMan) then {
								[BLU_viewMaxMan] call BLU_fnc_setView;
							};
							BLU_viewMax = BLU_viewMaxMan;
						};
						case "ground": {
							if (BLU_view > BLU_viewMaxGround) then {
								[BLU_viewMaxGround] call BLU_fnc_setView;
							};
							BLU_viewMax = BLU_viewMaxGround;
						};
						case "air": {
							if (BLU_view > BLU_viewMaxAir) then {
								[BLU_viewMaxAir] call BLU_fnc_setView;
							};
							BLU_viewMax = BLU_viewMaxAir;
						};
					};
				} else {
					BLU_viewMax = ["ViewDistance", 12000] call BIS_fnc_getParamValue;
				};

				sleep 1;
			};
		};
	};

	BLU_clickedTab = false;

	BLU_vehicleType = nil;
	BLU_vehicleTemp = nil;
	BLU_newVehicle = nil;

	BLU_view = nil;
	BLU_object = nil;
	BLU_terrain = nil;
	BLU_shadow = nil;
	BLU_syncObject = nil;
	BLU_ifFocused = nil;
	BLU_ifScoped = nil;
	BLU_effects = nil;
	BLU_ambient = nil;
	BLU_music = nil;
	BLU_syncAmbient = nil;
	BLU_syncMusic = nil;
	BLU_inMap = nil;

	BLU_viewDefault = 1000;
	BLU_objectDefault = 1000;
	BLU_terrainDefault = 3;
	BLU_shadowDefault = 100;
	BLU_syncObjectDefault = [0,0];
	BLU_ifFocusedDefault = [0,0];
	BLU_ifScopedDefault = [0,0];
	BLU_effectsDefault = 50;
	BLU_ambientDefault = 50;
	BLU_musicDefault = 50;
	BLU_syncAmbientDefault = [0,0];
	BLU_syncMusicDefault = [0,0];
	BLU_inMapDefault = [0,0];

	BLU_viewMan = profileNamespace getVariable ["BLU_viewMan", BLU_viewDefault];
	BLU_objectMan = profileNamespace getVariable ["BLU_objectMan", BLU_objectDefault];
	BLU_terrainMan = profileNamespace getVariable ["BLU_terrainMan", BLU_terrainDefault];
	BLU_shadowMan = profileNamespace getVariable ["BLU_shadowMan", BLU_shadowDefault];
	BLU_syncObjectMan = profileNamespace getVariable ["BLU_syncObjectMan",BLU_syncObjectDefault];
	BLU_ifFocusedMan = profileNamespace getVariable ["BLU_ifFocusedMan",BLU_ifFocusedDefault];
	BLU_ifScopedMan = profileNamespace getVariable ["BLU_ifScopedMan",BLU_ifScopedDefault];
	BLU_effectsMan = profileNamespace getVariable ["BLU_effectsMan", BLU_effectsDefault];
	BLU_ambientMan = profileNamespace getVariable ["BLU_ambientMan", BLU_ambientDefault];
	BLU_musicMan = profileNamespace getVariable ["BLU_musicMan", BLU_musicDefault];
	BLU_syncAmbientMan = profileNamespace getVariable ["BLU_syncAmbientMan",BLU_syncAmbientDefault];
	BLU_syncMusicMan = profileNamespace getVariable ["BLU_syncMusicMan",BLU_syncMusicDefault];
	BLU_inMapMan = profileNamespace getVariable ["BLU_inMapMan",BLU_inMapDefault];

	BLU_viewGround = profileNamespace getVariable ["BLU_viewGround", BLU_viewDefault];
	BLU_objectGround = profileNamespace getVariable ["BLU_objectGround", BLU_objectDefault];
	BLU_terrainGround = profileNamespace getVariable ["BLU_terrainGround", BLU_terrainDefault];
	BLU_shadowGround = profileNamespace getVariable ["BLU_shadowGround", BLU_shadowDefault];
	BLU_syncObjectGround = profileNamespace getVariable ["BLU_syncObjectGround",BLU_syncObjectDefault];
	BLU_ifFocusedGround = profileNamespace getVariable ["BLU_ifFocusedGround",BLU_ifFocusedDefault];
	BLU_ifScopedGround = profileNamespace getVariable ["BLU_ifScopedGround",BLU_ifScopedDefault];
	BLU_effectsGround = profileNamespace getVariable ["BLU_effectsGround", BLU_effectsDefault];
	BLU_ambientGround = profileNamespace getVariable ["BLU_ambientGround", BLU_ambientDefault];
	BLU_musicGround = profileNamespace getVariable ["BLU_musicGround", BLU_musicDefault];
	BLU_syncAmbientGround = profileNamespace getVariable ["BLU_syncAmbientGround",BLU_syncAmbientDefault];
	BLU_syncMusicGround = profileNamespace getVariable ["BLU_syncMusicGround",BLU_syncMusicDefault];
	BLU_inMapGround = profileNamespace getVariable ["BLU_inMapGround",BLU_inMapDefault];

	BLU_viewAir = profileNamespace getVariable ["BLU_viewAir", BLU_viewDefault];
	BLU_objectAir = profileNamespace getVariable ["BLU_objectAir", BLU_objectDefault];
	BLU_terrainAir = profileNamespace getVariable ["BLU_terrainAir", BLU_terrainDefault];
	BLU_shadowAir = profileNamespace getVariable ["BLU_shadowAir", BLU_shadowDefault];
	BLU_syncObjectAir = profileNamespace getVariable ["BLU_syncObjectAir",BLU_syncObjectDefault];
	BLU_ifFocusedAir = profileNamespace getVariable ["BLU_ifFocusedAir",BLU_ifFocusedDefault];
	BLU_ifScopedAir = profileNamespace getVariable ["BLU_ifScopedAir",BLU_ifScopedDefault];
	BLU_effectsAir = profileNamespace getVariable ["BLU_effectsAir", BLU_effectsDefault];
	BLU_ambientAir = profileNamespace getVariable ["BLU_ambientAir", BLU_ambientDefault];
	BLU_musicAir = profileNamespace getVariable ["BLU_musicAir", BLU_musicDefault];
	BLU_syncAmbientAir = profileNamespace getVariable ["BLU_syncAmbientAir",BLU_syncAmbientDefault];
	BLU_syncMusicAir = profileNamespace getVariable ["BLU_syncMusicAir",BLU_syncMusicDefault];
	BLU_inMapAir = profileNamespace getVariable ["BLU_inMapAir",BLU_inMapDefault];

	_handleVehicle = [] spawn BLU_fnc_watchVehicle;
	_handleCameraView = [] spawn BLU_fnc_watchCameraView;
	_handleZoom = [] spawn BLU_fnc_watchFOV;
	_handleMap = [] spawn BLU_fnc_watchMap;
};