if (!isNull (findDisplay 112233)) exitWith {};

if (isNull (findDisplay 312)) then {
	findDisplay 46 createDisplay "Perceptive";
} else {
	findDisplay 312 createDisplay "Perceptive";
};

disableSerialization;

BLU_openedAs = BLU_vehicleType;
BLU_closedAs = BLU_vehicleType;

_display = findDisplay 112233;

_idcMan = 1600;
_idcGround = 1601;
_idcAir = 1602;
_idcViewText = 1102;
_idcViewSlider = 1000;
_idcViewField = 1400;
_idcObjectText = 1103;
_idcObjectSlider = 1001;
_idcObjectField = 1401;
_idcTerrainText = 1104;
_idcTerrainSlider = 1002;
_idcTerrainField = 1402;
_idcShadowText = 1105;
_idcShadowSlider = 1003;
_idcShadowField = 1403;
_idcSyncObjectList = 2100;
_idcSyncObjectField = 1404;
_idcIfFocusedList = 2101;
_idcIfFocusedField = 1405;
_idcIfScopedList = 2102;
_idcIfScopedField = 1406;
_idcEffectsText = 1113;
_idcEffectsSlider = 1004;
_idcEffectsField = 1407;
_idcAmbientText = 1114;
_idcAmbientSlider = 1005;
_idcAmbientField = 1408;
_idcMusicText = 1115;
_idcMusicSlider = 1006;
_idcMusicField = 1409;
_idcSyncAmbientList = 2103;
_idcSyncAmbientField = 1410; 
_idcSyncMusicList = 2104;
_idcSyncMusicField = 1411; 
_idcInMapList = 2105;
_idcInMapField = 1412;

_ctrlMan = _display displayCtrl _idcMan;
_ctrlGround = _display displayCtrl _idcGround;
_ctrlAir = _display displayCtrl _idcAir;
_ctrlViewText = _display displayCtrl _idcViewText;
_ctrlViewSlider = _display displayCtrl _idcViewSlider;
_ctrlViewField = _display displayCtrl _idcViewField;
_ctrlObjectText = _display displayCtrl _idcObjectText;
_ctrlObjectSlider = _display displayCtrl _idcObjectSlider;
_ctrlObjectField = _display displayCtrl _idcObjectField;
_ctrlTerrainText = _display displayCtrl _idcTerrainText;
_ctrlTerrainSlider = _display displayCtrl _idcTerrainSlider;
_ctrlTerrainField = _display displayCtrl _idcTerrainField;
_ctrlShadowText = _display displayCtrl _idcShadowText;
_ctrlShadowSlider = _display displayCtrl _idcShadowSlider;
_ctrlShadowField = _display displayCtrl _idcShadowField;
_ctrlSyncObjectList = _display displayCtrl _idcSyncObjectList;
_ctrlSyncObjectField = _display displayCtrl _idcSyncObjectField;
_ctrlIfFocusedList = _display displayCtrl _idcIfFocusedList;
_ctrlIfFocusedField = _display displayCtrl _idcIfFocusedField;
_ctrlIfScopedList = _display displayCtrl _idcIfScopedList;
_ctrlIfScopedField = _display displayCtrl _idcIfScopedField;
_ctrlEffectsText = _display displayCtrl _idcEffectsText;
_ctrlEffectsSlider = _display displayCtrl _idcEffectsSlider;
_ctrlEffectsField = _display displayCtrl _idcEffectsField;
_ctrlAmbientText = _display displayCtrl _idcAmbientText;
_ctrlAmbientSlider = _display displayCtrl _idcAmbientSlider;
_ctrlAmbientField = _display displayCtrl _idcAmbientField;
_ctrlMusicText = _display displayCtrl _idcMusicText;
_ctrlMusicSlider = _display displayCtrl _idcMusicSlider;
_ctrlMusicField = _display displayCtrl _idcMusicField;
_ctrlSyncAmbientList = _display displayCtrl _idcSyncAmbientList;
_ctrlSyncAmbientField = _display displayCtrl _idcSyncAmbientField;
_ctrlSyncMusicList = _display displayCtrl _idcSyncMusicList;
_ctrlSyncMusicField = _display displayCtrl _idcSyncMusicField;
_ctrlInMapList = _display displayCtrl _idcInMapList;
_ctrlInMapField = _display displayCtrl _idcInMapField;

_ctrlTerrainField ctrlEnable false;

//Set Tab Background

switch (BLU_vehicleType) do {
	case "man": {
		(_display displayCtrl 1600) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		]
	};
	case "ground": {
		(_display displayCtrl 1601) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		]
	};
	case "air": {
		(_display displayCtrl 1602) ctrlSetBackgroundColor [
			(profilenamespace getvariable ['GUI_BCG_RGB_R',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_G',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_B',0]),
			(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])
		]
	};
	Default {}; //Add error message
};

//AddButtonEH

{
	(_x select 0) ctrlAddEventHandler ["ButtonClick", 
		Format ["['%1'] call BLU_fnc_changedTab",_x select 1]
	];
} forEach [
	[_ctrlMan,		"man"],
	[_ctrlGround,	"ground"],
	[_ctrlAir,		"air"]
];

//AddTextEH

{
	(_x select 0) ctrlAddEventHandler ["MouseButtonClick", 
		Format ["[%1, %2, '%3'] call BLU_fnc_clickedLabel",_x select 1, _x select 2, _x select 3]
	];
} forEach [
	[_ctrlViewText,		_idcViewSlider,		_idcViewField,		"view"],
	[_ctrlObjectText,	_idcObjectSlider,	_idcObjectField,	"object"],
	[_ctrlTerrainText,	_idcTerrainSlider,	_idcTerrainField,	"terrain"],
	[_ctrlShadowText,	_idcShadowSlider,	_idcShadowField,	"shadow"],
	[_ctrlEffectsText,	_idcEffectsSlider,	_idcEffectsField,	"effects"],
	[_ctrlAmbientText,	_idcAmbientSlider,	_idcAmbientField,	"ambient"],
	[_ctrlMusicText,	_idcMusicSlider,	_idcMusicField,		"music"]
];

//AddSliderEH

{
	(_x select 0) ctrlAddEventHandler ["SliderPosChanged",
		Format ["[_this select 1, '%1'] call BLU_fnc_movedSlider", _x select 1]
	];
} forEach [
	[_ctrlViewSlider,		"view"],
	[_ctrlObjectSlider,		"object"],
	[_ctrlTerrainSlider,	"terrain"],
	[_ctrlShadowSlider,		"shadow"],
	[_ctrlEffectsSlider,	"effects"],
	[_ctrlAmbientSlider,	"ambient"],
	[_ctrlMusicSlider,		"music"]
];

//AddFieldEH

{
	(_x select 0) ctrlAddEventHandler ["KeyUp",
		Format ["[%1, '%2'] call BLU_fnc_typedField", _x select 1, _x select 2]
	];
} forEach [
	[_ctrlViewField,	_idcViewField,		"view"],
	[_ctrlObjectField,	_idcObjectField,	"object"],
	[_ctrlTerrainField,	_idcTerrainField,	"terrain"],
	[_ctrlShadowField,	_idcShadowField,	"shadow"],
	[_ctrlEffectsField,	_idcEffectsField,	"effects"],
	[_ctrlAmbientField,	_idcAmbientField,	"ambient"],
	[_ctrlMusicField,	_idcMusicField,		"music"]
];

//Fill Lists

{
	_ctrlSyncObjectList lbAdd _x;
	_ctrlIfFocusedList lbAdd _x;
	_ctrlIfScopedList lbAdd _x;
	_ctrlSyncAmbientList lbAdd _x;
	_ctrlSyncMusicList lbAdd _x;
	_ctrlInMapList lbAdd _x;
} forEach ["none","percent","flat"];

//Set Perceivalbes

[] call BLU_fnc_setPerceivables;

//Add Sync/Zoom FieldEH

{
	(_x select 0) ctrlAddEventHandler ["KeyUp",
		Format ["[%1, '%2'] call BLU_fnc_typedExtraField", _x select 1, _x select 2]
	];
} forEach [
	[_ctrlSyncObjectField,	_idcSyncObjectField,	"syncObject"],
	[_ctrlIfFocusedField,	_idcIfFocusedField,		"ifFocused"],
	[_ctrlIfScopedField,	_idcIfScopedField,		"ifZoomed"],
	[_ctrlSyncAmbientField,	_idcSyncAmbientField,	"syncAmbient"],
	[_ctrlSyncMusicField,	_idcSyncMusicField,		"syncMusic"],
	[_ctrlInMapField, 		_idcInMapField, 		"inMap"]
];

//ByListEH

{
	(_x select 0) ctrlAddEventHandler ["LBSelChanged", 
		Format ["[_this select 1, '%1'] call BLU_fnc_selectedList", _x select 1]
	];
} forEach [
	[_ctrlSyncObjectList,	"syncObject"],
	[_ctrlIfFocusedList,	"ifFocused"],
	[_ctrlIfScopedList,		"ifScoped"],
	[_ctrlSyncAmbientList,	"syncAmbient"],
	[_ctrlSyncMusicList,	"syncMusic"],
	[_ctrlInMapList,		"inMap"]
];

//On Close

_display displayAddEventHandler ["Unload", {
	BLU_vehicleType = BLU_closedAs;

	switch (BLU_closedAs) do {
		case "man": {
			[] call BLU_fnc_savePerceivables;
		};
		case "ground": {
			[] call BLU_fnc_savePerceivables;
		};
		case "air": {
			[] call BLU_fnc_savePerceivables;
		};
	};

	BLU_vehicleType = BLU_openedAs;

	switch (BLU_openedAs) do {
		case "man": {
			[] call BLU_fnc_setPerceivables;
		};
		case "ground": {
			[] call BLU_fnc_setPerceivables;
		};
		case "air": {
			[] call BLU_fnc_setPerceivables;
		};
	};
}];