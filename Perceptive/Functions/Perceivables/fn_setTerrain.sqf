params ["_value"];

_min = 1;
_max = 5;

if (_value < _min) then { _value = _min };
if (_value > _max) then { _value = _max };

_terrainGridValue = nil;

switch (_value) do {
	case 5: {_terrainGridValue = 3.125};
	case 4: {_terrainGridValue = 6.25};
	case 3: {_terrainGridValue = 12.5};
	case 2: {_terrainGridValue = 25};
	case 1: {_terrainGridValue = 50};
};

setTerrainGrid _terrainGridValue;
BLU_terrain = _value;

_display = findDisplay 112233;
if (isNull _display) exitWith {};

(_display displayCtrl 1002) sliderSetPosition (_value);
(_display displayCtrl 1402) ctrlSetText (str _terrainGridValue);