params ["_index","_list"];

if (BLU_clickedTab) exitWith {};

switch (_list) do {
	case "syncObject": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setSyncObject;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setSyncObject;
			};
			case 2: {
				[[_index,1000]] call BLU_fnc_setSyncObject;
			};
		};
	};
	case "ifFocused": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setIfFocused;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setIfFocused;
			};
			case 2: {
				[[_index,1000]] call BLU_fnc_setIfFocused;
			};
		};
	};
	case "ifScoped": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setIfScoped;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setIfScoped;
			};
			case 2: {
				[[_index,1000]] call BLU_fnc_setIfScoped;
			};
		};
	};
	case "syncAmbient": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setSyncAmbient;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setSyncAmbient;
			};
			case 2: {
				[[_index,10]] call BLU_fnc_setSyncAmbient;
			};
		};
	};
	case "syncMusic": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setSyncMusic;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setSyncMusic;
			};
			case 2: {
				[[_index,10]] call BLU_fnc_setSyncMusic;
			};
		};
	};
	case "inMap": {
		switch (_index) do {
			case 0: {
				[[_index,0]] call BLU_fnc_setInMap;
			};
			case 1: {
				[[_index,100]] call BLU_fnc_setInMap;
			};
			case 2: {
				[[_index,10]] call BLU_fnc_setInMap;
			};
		};
	};
};