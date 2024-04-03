class CfgFunctions {
	class BLU {
		class Perceptive {
			file = "Perceptive\Functions";

			class init { postInit = 1; };
			class watchVehicle {};
			class watchCameraView {};
			class watchFOV {};
			class watchMap {};
			class keyHandler {};
			class notify {};
		};

		class PerceptiveMenu {
			file = "Perceptive\Functions\Menu";

			class openMenu {};
			class changedTab {};
			class typedField {};
			class movedSlider {};
			class clickedLabel {};
			class selectedList {};
			class typedExtraField {};
		};

		class Perceivables {
			file = "Perceptive\Functions\Perceivables";

			class getPerceivables {};
			class savePerceivables {};
			class setPerceivables {};
			class setView {};
			class setObject {};
			class setTerrain {};
			class setShadow {};
			class setEffects {};
			class setAmbient {};
			class setMusic {};
			class setIfFocused {};
			class setIfScoped {};
			class setSyncAmbient {};
			class setSyncMusic {};
			class setSyncObject {};
			class setInMap {};
		};
	};
};