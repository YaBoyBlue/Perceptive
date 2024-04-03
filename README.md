# Perceptive

Perceptive is an Arma 3 addon inspired by CH View Distance which expands the users control in multiple ways. Including the ability to adjust the volume of effects, ambient, and music, from the same menu.

Settings will save to the profileNamespace and be loaded upon mission start. They will sync to and automatically adjust to the type of vehicle you're in. The menu can be opened, and the main options may be increased or decreased, with keybindings of the users choice.

## Playing with ACE

\Unfortunately, the ACE mod registers an every-second-event with CBA that will `fadeSound` and `fadeMusic` to your in-game settings. To ensure Perceptive correctly adjusts and maintains your sound settings, you must go into `Addon Options>Mission/Server(which ever setting applies), ADDON: Ace Hearing (this is the list at the top)>Set "Enable Combat Deafness"` to `false`.

## Accessing Menu and Options

The default key to open the menu is `P`. This, and the other settings can be adjusted by going to `Options>Controls>Show (this is the top drop-down list)>Perceptive`. Please look closely at the path; the Perceptive keybindings are found within the normal/vanilla Arma controls "Show" list, not within any addon controls sub-list or area.

## Main Options

Clicking the text label of these options will toggle the minimum, until clicked again.
- View distance.
- Object distance.
- Terrain quality (allows you to disable grass).
- Shadow distance.
- Effects volume.
- Ambient volume.
- Music Volume.

## Extra Options

These settings are adjustable through the below syncing options, and can be disabled all together.
- Focus (holding right-click) to increase view distance.
- Scope (handheld weapon, and vehicle weapon) to increase view distance.
- In map reduction of effects volume.

## Syncing

You can sync the object distance to the view distance, and the ambient volume, as well as music volume, to the effects volume.

Percent will sync the 'child' value to the specified percent of the 'parent' value.
Flat will sync the 'child' value to the 'parent' value, minus the specified value.

## Limiting Usage

Mission creators can limit the maximum value to which a user can set their view and object distance. This can be done through adding a mission parameter to the missions `description.ext`, with a class name of `ViewDistance`, or through the ACE by `Addon Options>Mission/Server/Client(which ever setting applies), ADDON: Ace View Distance Limiter (this is the list at the top)>Set "Enable ACE viewdistance"` to `true`, and adjust the `View Distance Limit` to your desired max. ACE will take precedence over a mission parameter if `Enable ACE viewdistance` is `true`, otherwise it will check for a mission parameter, and if no parameter is provided, the maximum view distance will default to the Arma normal 12000 meters.

Individually, if used, the ACE On Foot, Land Vehicle, and Air Vehicle, view distance limits must be greater than View Distance Limit, otherwise they will not be used.

## Resources

Most work was completed with the help of the [Arma 3 Community Wiki](https://community.bistudio.com/wiki/Category:Arma_3:_Scripting_Commands).

A few other addons, such as but not limited to ACE, were referenced for problem solving and general learning of addon development.

## Statistics

At the time of writing, this addon is `used in 970 collections`, has `had 18,328 unique visitors`, with `14,345 current subscribers`, and `725 favorites`, `201 total ratings`, with `194 positive ratings`, and `7 negative ratings`, for an `average of 5 stars`, on the [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=2726071493).