params ["_vehicleType","_all"];

[] call BLU_fnc_savePerceivables;

BLU_clickedTab = true;
BLU_vehicleType = _vehicleType;
_display = findDisplay 112233;
ctrlSetFocus (_display displayCtrl 1100);

switch (_vehicleType) do {
	case "man": {
		BLU_closedAs = "man";

		(_display displayCtrl 1601) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1602) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1600) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		];
	};
	case "ground": {
		BLU_closedAs = "ground";

		(_display displayCtrl 1600) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1602) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1601) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		];
	};
	case "air": {
		BLU_closedAs = "air";

		(_display displayCtrl 1600) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1601) ctrlSetBackgroundColor [0,0,0,0.5];
		(_display displayCtrl 1602) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		];
	};
	Default {"Error in fn_menuBtnEHC"};
};

[] call BLU_fnc_setPerceivables;
