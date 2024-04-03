switch (BLU_vehicleType) do {
	case "man": {
		profileNamespace setVariable ["BLU_viewMan",BLU_view];
		profileNamespace setVariable ["BLU_objectMan",BLU_object];
		profileNamespace setVariable ["BLU_terrainMan",BLU_terrain];
		profileNamespace setVariable ["BLU_shadowMan",BLU_shadow];
		profileNamespace setVariable ["BLU_syncObjectMan",BLU_syncObject];
		profileNamespace setVariable ["BLU_ifFocusedMan",BLU_ifFocused];
		profileNamespace setVariable ["BLU_ifScopedMan",BLU_ifScoped];
		profileNamespace setVariable ["BLU_effectsMan",BLU_effects];
		profileNamespace setVariable ["BLU_ambientMan",BLU_ambient];
		profileNamespace setVariable ["BLU_musicMan",BLU_music];
		profileNamespace setVariable ["BLU_syncAmbientMan",BLU_syncAmbient];
		profileNamespace setVariable ["BLU_syncMusicMan",BLU_syncMusic];
		profileNamespace setVariable ["BLU_inMapMan",BLU_inMap];
	};
	case "ground": {
		profileNamespace setVariable ["BLU_viewGround",BLU_view];
		profileNamespace setVariable ["BLU_objectGround",BLU_object];
		profileNamespace setVariable ["BLU_terrainGround",BLU_terrain];
		profileNamespace setVariable ["BLU_shadowGround",BLU_shadow];
		profileNamespace setVariable ["BLU_syncObjectGround",BLU_syncObject];
		profileNamespace setVariable ["BLU_ifFocusedGround",BLU_ifFocused];
		profileNamespace setVariable ["BLU_ifScopedGround",BLU_ifScoped];
		profileNamespace setVariable ["BLU_effectsGround",BLU_effects];
		profileNamespace setVariable ["BLU_ambientGround",BLU_ambient];
		profileNamespace setVariable ["BLU_musicGround",BLU_music];
		profileNamespace setVariable ["BLU_syncAmbientGround",BLU_syncAmbient];
		profileNamespace setVariable ["BLU_syncMusicGround",BLU_syncMusic];
		profileNamespace setVariable ["BLU_inMapGround",BLU_inMap];
	};
	case "air": {
		profileNamespace setVariable ["BLU_viewAir",BLU_view];
		profileNamespace setVariable ["BLU_objectAir",BLU_object];
		profileNamespace setVariable ["BLU_terrainAir",BLU_terrain];
		profileNamespace setVariable ["BLU_shadowAir",BLU_shadow];
		profileNamespace setVariable ["BLU_syncObjectAir",BLU_syncObject];
		profileNamespace setVariable ["BLU_ifFocusedAir",BLU_ifFocused];
		profileNamespace setVariable ["BLU_ifScopedAir",BLU_ifScoped];
		profileNamespace setVariable ["BLU_effectsAir",BLU_effects];
		profileNamespace setVariable ["BLU_ambientAir",BLU_ambient];
		profileNamespace setVariable ["BLU_musicAir",BLU_music];
		profileNamespace setVariable ["BLU_syncAmbientAir",BLU_syncAmbient];
		profileNamespace setVariable ["BLU_syncMusicAir",BLU_syncMusic];
		profileNamespace setVariable ["BLU_inMapAir",BLU_inMap];
	};
};

[] call BLU_fnc_getPerceivables;