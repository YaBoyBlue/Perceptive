params ["_max","_value","_perceivable"];

disableSerialization;

_display = uiNamespace getVariable ["Notify", displayNull];

if (isNull _display) then {
	cutRsc["Notify","PLAIN"];
	waitUntil {!isNull (uiNamespace getVariable ["Notify", displayNull]);};
	_display = uiNamespace getVariable ["Notify", displayNull];
};

_xPos = NTFY_x;
_yPos = NTFY_y + (NTFY_s * (count NTFY_list));
_width = NTFY_w;
_height = NTFY_h;

_ctrl = _display ctrlCreate ["RscStructuredText", -1];
_ctrl ctrlSetPosition [_xPos,_yPos,_width,_height];
_ctrl ctrlSetStructuredText parseText format ["<t size='%1'><t size='1' align='center' valign='middle'>%2: %3 / %4</t> </t>", 1.2, _perceivable, _value, _max];
_ctrl ctrlSetBackgroundColor [0,0,0,0.6];
_ctrl ctrlSetFade 1;
_ctrl ctrlCommit 0;

NTFY_list insert [count NTFY_list, [_ctrl]];

if ((count NTFY_list) > NTFY_limit) then {
	(NTFY_list select 0) ctrlSetPosition [NTFY_x, NTFY_y - NTFY_s];
	(NTFY_list select 0) ctrlSetFade 1;
	(NTFY_list select 0) ctrlCommit 0.3;
	
	[(NTFY_list select 0)] spawn {
		waitUntil {sleep 0.01; (ctrlFade (_this select 0) == 1)};
		ctrlDelete (_this select 0);
	};

	NTFY_list deleteAt 0;

	{
		_x ctrlSetPosition [NTFY_x, NTFY_y + (NTFY_s * _forEachIndex)];
		_x ctrlCommit 0.3;
	} forEach NTFY_list;
};

[NTFY_list select (count NTFY_list - 1)] spawn {
	params ["_lastCtrl"];

	_seconds = 0;

	while {true} do {
		_seconds = _seconds + 1;

		if (_seconds == NTFY_life * 10) then { 
			_seconds = 0; 

			private _ctrl = (NTFY_list select 0);

			_ctrl ctrlSetPosition [NTFY_x, NTFY_y - NTFY_s];
			_ctrl ctrlSetFade 1;
			_ctrl ctrlCommit 0.3;

			[_ctrl] spawn {
				waitUntil {sleep 0.01; (ctrlFade (_this select 0) == 1)};
				ctrlDelete (_this select 0);
			};

			NTFY_list deleteAt 0;

			{
				_x ctrlSetPosition [NTFY_x, NTFY_y + (NTFY_s * _forEachIndex)];
				_x ctrlCommit 0.3;
			} forEach NTFY_list;
		};

		if (count NTFY_list == 0) exitWith {};
		if (_lastCtrl != NTFY_list select (count NTFY_list - 1)) exitWith {};

		sleep 0.1;
	};
};

_ctrl ctrlSetFade 0;
_ctrl ctrlCommit 0.3;