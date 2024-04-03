#include "cfgFunctions.hpp"
#include "Displays\BaseControls.hpp"
#include "Displays\Perceptive.hpp"
#include "Displays\Notify.hpp"

class CfgPatches
{
	class Perceptive
	{
		name = "Perceptive (View and Audio)";
		author = "YaBoyBlue";
		url = "";

		requiredVersion = 1.60;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgUserActions
{
    class BLU_OpenMenu
    {
        displayName = "Menu Open";
        tooltip = "This keybind will open the menu.";
        onActivate = "[] call BLU_fnc_openMenu";
    };

    class BLU_increaseView
    {
        displayName = "View Increase";
        tooltip = "This keybind will increase the view distance.";
        onActivate = "['view++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseView
    {
        displayName = "View Decrease";
        tooltip = "This keybind will decrease the view distance.";
        onActivate = "['view--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseObject
    {
        displayName = "Object Increase";
        tooltip = "This keybind will increase the Object distance.";
        onActivate = "['object++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseObject
    {
        displayName = "Object Decrease";
        tooltip = "This keybind will decrease the Object distance.";
        onActivate = "['object--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseTerrain
    {
        displayName = "Terrain Increase";
        tooltip = "This keybind will increase the Terrain distance.";
        onActivate = "['terrain++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseTerrain
    {
        displayName = "Terrain Decrease";
        tooltip = "This keybind will decrease the Terrain distance.";
        onActivate = "['terrain--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseShadow
    {
        displayName = "Shadow Increase";
        tooltip = "This keybind will increase the Shadow distance.";
        onActivate = "['shadow++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseShadow
    {
        displayName = "Shadow Decrease";
        tooltip = "This keybind will decrease the Shadow distance.";
        onActivate = "['shadow--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseEffects
    {
        displayName = "Effects Increase";
        tooltip = "This keybind will increase the Effects distance.";
        onActivate = "['effects++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseEffects
    {
        displayName = "Effects Decrease";
        tooltip = "This keybind will decrease the Effects distance.";
        onActivate = "['effects--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseAmbient
    {
        displayName = "Ambient Increase";
        tooltip = "This keybind will increase the Ambient distance.";
        onActivate = "['ambient++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseAmbient
    {
        displayName = "Ambient Decrease";
        tooltip = "This keybind will decrease the Ambient distance.";
        onActivate = "['ambient--'] call BLU_fnc_keyHandler";
    };

    class BLU_increaseMusic
    {
        displayName = "Music Increase";
        tooltip = "This keybind will increase the Music distance.";
        onActivate = "['music++'] call BLU_fnc_keyHandler";
    };

    class BLU_decreaseMusic
    {
        displayName = "Music Decrease";
        tooltip = "This keybind will decrease the Music distance.";
        onActivate = "['music--'] call BLU_fnc_keyHandler";
    };
};

class CfgDefaultKeysPresets
{
	class Arma2
	{
		class Mappings
		{
            BLU_OpenMenu[] = { 0x19 };
		};
	};
};

class UserActionGroups
{
    class Perceptive
    {
        name = "Perceptive";
        isAddon = 0;
        group[] = {
            "BLU_OpenMenu",
            "BLU_increaseView","BLU_decreaseView",
            "BLU_increaseObject","BLU_decreaseObject",
            "BLU_increaseTerrain","BLU_decreaseTerrain",
            "BLU_increaseShadow","BLU_decreaseShadow",
            "BLU_increaseEffects","BLU_decreaseEffects",
            "BLU_increaseAmbient","BLU_decreaseAmbient",
            "BLU_increaseMusic","BLU_decreaseMusic"
        };
    };
};