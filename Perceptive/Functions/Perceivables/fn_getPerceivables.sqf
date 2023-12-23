switch (BLU_vehicleType) do {
	case "man": {
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
	};
	case "ground": {
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
	};
	case "air": {
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
	};
};