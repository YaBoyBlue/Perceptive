switch (BLU_vehicleType) do {
	case "man": {
		BLU_viewMax = BLU_viewMaxMan;
		BLU_view = BLU_viewMan;
		BLU_object = BLU_objectMan;
		BLU_terrain = BLU_terrainMan;
		BLU_shadow = BLU_shadowMan;
		BLU_syncObject = BLU_syncObjectMan;
		BLU_ifFocused = BLU_ifFocusedMan;
		BLU_ifScoped = BLU_ifScopedMan;
		BLU_effects = BLU_effectsMan;
		BLU_ambient = BLU_ambientMan;
		BLU_music = BLU_musicMan;
		BLU_syncAmbient = BLU_syncAmbientMan;
		BLU_syncMusic = BLU_syncMusicMan;
		BLU_inMap = BLU_inMapMan;
	};
	case "ground": {
		BLU_viewMax = BLU_viewMaxGround;
		BLU_view = BLU_viewGround;
		BLU_object = BLU_objectGround;
		BLU_terrain = BLU_terrainGround;
		BLU_shadow = BLU_shadowGround;
		BLU_syncObject = BLU_syncObjectGround;
		BLU_ifFocused = BLU_ifFocusedGround;
		BLU_ifScoped = BLU_ifScopedGround;
		BLU_effects = BLU_effectsGround;
		BLU_ambient = BLU_ambientGround;
		BLU_music = BLU_musicGround;
		BLU_syncAmbient = BLU_syncAmbientGround;
		BLU_syncMusic = BLU_syncMusicGround;
		BLU_inMap = BLU_inMapGround;
	};
	case "air": {
		BLU_viewMax = BLU_viewMaxAir;
		BLU_view = BLU_viewAir;
		BLU_object = BLU_objectAir;
		BLU_terrain = BLU_terrainAir;
		BLU_shadow = BLU_shadowAir;
		BLU_syncObject = BLU_syncObjectAir;
		BLU_ifFocused = BLU_ifFocusedAir;
		BLU_ifScoped = BLU_ifScopedAir;
		BLU_effects = BLU_effectsAir;
		BLU_ambient = BLU_ambientAir;
		BLU_music = BLU_musicAir;
		BLU_syncAmbient = BLU_syncAmbientAir;
		BLU_syncMusic = BLU_syncMusicAir;
		BLU_inMap = BLU_inMapAir;
	};
};

[BLU_view] spawn BLU_fnc_setView;
[BLU_object] spawn BLU_fnc_setObject; //May be redunant call... This Should be the only canse of such possibility.
[BLU_terrain] spawn BLU_fnc_setTerrain;
[BLU_shadow] spawn BLU_fnc_setShadow;
[BLU_syncObject] spawn BLU_fnc_setSyncObject;
[BLU_ifFocused] spawn BLU_fnc_setIfFocused;
[BLU_ifScoped] spawn BLU_fnc_setIfScoped;
[BLU_effects] spawn BLU_fnc_setEffects;
[BLU_ambient] spawn BLU_fnc_setAmbient; //May be redunant call... This Should be the only canse of such possibility.
[BLU_music] spawn BLU_fnc_setMusic; //May be redunant call... This Should be the only canse of such possibility.
[BLU_syncAmbient] spawn BLU_fnc_setSyncAmbient;
[BLU_syncMusic] spawn BLU_fnc_setSyncMusic;
[BLU_inMap] spawn BLU_fnc_setInMap;