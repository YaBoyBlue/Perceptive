#define GUI_GRID_X	((safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))
#define GUI_GRID_Y	((safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2))
#define GUI_GRID_W	((((safezoneW / safezoneH) min 1.2) / 40))
#define GUI_GRID_H	(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))
#define GUI_GRID_WAbs	(((safezoneW / safezoneH) min 1.2))
#define GUI_GRID_HAbs	((((safezoneW / safezoneH) min 1.2) / 1.2))

// #define GUI_GRID_X	(0)
// #define GUI_GRID_Y	(0)
// #define GUI_GRID_W	(0.025)
// #define GUI_GRID_H	(0.04)
// #define GUI_GRID_WAbs	(1)
// #define GUI_GRID_HAbs	(1)

class Perceptive
{
	idd = 112233;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Blue, v1.063, #Zuqevi)
		////////////////////////////////////////////////////////

		class menuHeader: RscStructuredText
		{
			idc = 1100;

			text = "Perceptive"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 19.3133 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class tabMan: RscButton
		{
			idc = 1600;

			text = "No Vehicle"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.29781 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "View and audio settings related to being on foot."; //--- ToDo: Localize;
		};
		class tabGround: RscButton
		{
			idc = 1601;

			text = "Ground Vehicle"; //--- ToDo: Localize;
			x = 16.64 * GUI_GRID_W + GUI_GRID_X;
			y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
			w = 5.87795 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "View and audio settings related to being in a ground, static, or water vehicle."; //--- ToDo: Localize;
		};
		class tabAir: RscButton
		{
			idc = 1602;

			text = "Air Vehicle"; //--- ToDo: Localize;
			x = 22.94 * GUI_GRID_W + GUI_GRID_X;
			y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.29781 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "View and audio settings related to being in an air vehicle."; //--- ToDo: Localize;
		};
		class viewHeader: RscStructuredText
		{
			idc = 1101;

			text = "View Settings"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 2.2 * GUI_GRID_H + GUI_GRID_Y;
			w = 19.3133 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class viewBackground: IGUIBack
		{
			idc = 2202;

			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 3.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 19.3133 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class viewText: RscStructuredText
		{
			idc = 1102;
			class Attributes {
				align = "right";
			};

			text = "VIEW:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class viewSlider: RscXSliderH
		{
			idc = 1000;
			sliderRange[] = {500,12000};
			sliderStep = 100;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class viewField: RscEdit
		{
			idc = 1400;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class objectText: RscStructuredText
		{
			idc = 1103;
			class Attributes {
				align = "right";
			};

			text = "OBJECT:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class objectSlider: RscXSliderH
		{
			idc = 1001;
			sliderRange[] = {500,12000};
			sliderStep = 100;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class objectField: RscEdit
		{
			idc = 1401;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class terrainText: RscStructuredText
		{
			idc = 1104;
			class Attributes {
				align = "right";
			};

			text = "TERRAIN:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class terrainSlider: RscXSliderH
		{
			idc = 1002;
			sliderRange[] = {1,5};
			sliderStep = 1;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class terrainField: RscEdit
		{
			idc = 1402;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class shadowText: RscStructuredText
		{
			idc = 1105;
			class Attributes {
				align = "right";
			};

			text = "SHADOW:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class shadowSlider: RscXSliderH
		{
			idc = 1003;
			sliderRange[] = {0,200};
			sliderStep = 1;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class shadowField: RscEdit
		{
			idc = 1403;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class syncObjectText1: RscStructuredText
		{
			idc = 1106;
			class Attributes {
				align = "right";
			};

			text = "SYNC OBJECT TO VIEW BY:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncObjectList: RscCombo
		{
			idc = 2100;

			x = 20.84 * GUI_GRID_W + GUI_GRID_X;
			y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class syncObjectText2: RscStructuredText
		{
			idc = 1107;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.62 * GUI_GRID_W + GUI_GRID_X;
			y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncObjectField: RscEdit
		{
			idc = 1404;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class ifFocusedText1: RscStructuredText
		{
			idc = 1108;
			class Attributes {
				align = "right";
			};

			text = "IF FOCUSED, INCREASE VIEW BY:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class ifFocusedList: RscCombo
		{
			idc = 2101;

			x = 20.84 * GUI_GRID_W + GUI_GRID_X;
			y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class ifFocusedText2: RscStructuredText
		{
			idc = 1109;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.62 * GUI_GRID_W + GUI_GRID_X;
			y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class ifFocusedField: RscEdit
		{
			idc = 1405;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class ifScopedText1: RscStructuredText
		{
			idc = 1110;
			class Attributes {
				align = "right";
			};

			text = "IF SCOPED, INCREASE VIEW BY:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class ifScopedList: RscCombo
		{
			idc = 2102;

			x = 20.84 * GUI_GRID_W + GUI_GRID_X;
			y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class ifScopedText2: RscStructuredText
		{
			idc = 1111;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.62 * GUI_GRID_W + GUI_GRID_X;
			y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class ifScopedField: RscEdit
		{
			idc = 1406;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class soundHeader: RscStructuredText
		{
			idc = 1112;

			text = "Sound Settings"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 14.4 * GUI_GRID_H + GUI_GRID_Y;
			w = 19.3133 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class soundBackground: IGUIBack
		{
			idc = 2204;

			x = 9.92 * GUI_GRID_W + GUI_GRID_X;
			y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 19.3332 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class effectsText: RscStructuredText
		{
			idc = 1113;
			class Attributes {
				align = "right";
			};

			text = "EFFECTS:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class effectsSlider: RscXSliderH
		{
			idc = 1004;
			sliderRange[] = {0,100};
			sliderStep = 1;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class effectsField: RscEdit
		{
			idc = 1407;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class ambientText: RscStructuredText
		{
			idc = 1114;
			class Attributes {
				align = "right";
			};

			text = "AMBIENT:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class ambientSlider: RscXSliderH
		{
			idc = 1005;
			sliderRange[] = {0,100};
			sliderStep = 1;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class ambientField: RscEdit
		{
			idc = 1408;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class musicText: RscStructuredText
		{
			idc = 1115;
			class Attributes {
				align = "right";
			};

			text = "MUSIC:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class musicSlider: RscXSliderH
		{
			idc = 1006;
			sliderRange[] = {0,100};
			sliderStep = 1;

			x = 13.7 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.1757 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class musicField: RscEdit
		{
			idc = 1409;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class syncAmbientText1: RscStructuredText
		{
			idc = 1116;
			class Attributes {
				align = "right";
			};

			text = "SYNC AMBIENT TO EFFECTS BY:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncAmbientList: RscCombo
		{
			idc = 2103;

			x = 20.84 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class syncAmbientText2: RscStructuredText
		{
			idc = 1117;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.62 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncAmbientField: RscEdit
		{
			idc = 1410;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class syncMusicText1: RscStructuredText
		{
			idc = 1118;
			class Attributes {
				align = "right";
			};

			text = "SYNC MUSIC TO EFFECTS BY:"; //--- ToDo: Localize;
			x = 9.93 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncMusicList: RscCombo
		{
			idc = 2104;

			x = 20.84 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class syncMusicText2: RscStructuredText
		{
			idc = 1119;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.62 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class syncMusicField: RscEdit
		{
			idc = 1411;

			text = "99999"; //--- ToDo: Localize;
			x = 26.3 * GUI_GRID_W + GUI_GRID_X;
			y = 22 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class RscStructuredText_1120: RscStructuredText
		{
			idc = 1120;
			class Attributes {
				align = "right";
			};

			text = "IN MAP, REDUCE EFFECTS BY:"; //--- ToDo: Localize;
			x = 9.92 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.9162 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class RscCombo_2105: RscCombo
		{
			idc = 2105;

			x = 20.83 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.77867 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class RscStructuredText_1121: RscStructuredText
		{
			idc = 1121;
			class Attributes {
				align = "right";
			};

			text = "OF:"; //--- ToDo: Localize;
			x = 24.58 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.67941 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1 * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class RscEdit_1412: RscEdit
		{
			idc = 1412;

			text = "99999"; //--- ToDo: Localize;
			x = 26.25 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 2.51912 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

		// ////////////////////////////////////////////////////////
		// // GUI EDITOR OUTPUT START (by Blue, v1.063, #Fanohu)
		// ////////////////////////////////////////////////////////

		// class menuHeader: RscStructuredText
		// {
		// 	idc = 1100;

		// 	text = "Perceptive"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 0 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 23.176 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class tabMan: RscButton
		// {
		// 	idc = 1600;

		// 	text = "No Vehicle"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 7.55737 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	tooltip = "View and audio settings related to being on foot."; //--- ToDo: Localize;
		// };
		// class tabGround: RscButton
		// {
		// 	idc = 1601;

		// 	text = "Ground Vehicle"; //--- ToDo: Localize;
		// 	x = 15.97 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 7.05354 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	tooltip = "View and audio settings related to being in a ground, static, or water vehicle."; //--- ToDo: Localize;
		// };
		// class tabAir: RscButton
		// {
		// 	idc = 1602;

		// 	text = "Air Vehicle"; //--- ToDo: Localize;
		// 	x = 23.53 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 1.1 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 7.55737 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	tooltip = "View and audio settings related to being in an air vehicle."; //--- ToDo: Localize;
		// };
		// class viewHeader: RscStructuredText
		// {
		// 	idc = 1101;

		// 	text = "View Settings"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 2.2 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 23.176 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.8};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class viewBackground: IGUIBack
		// {
		// 	idc = 2202;

		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 3.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 23.176 * GUI_GRID_W;
		// 	h = 11 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class viewText: RscStructuredText
		// {
		// 	idc = 1102;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "VIEW:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class viewSlider: RscXSliderH
		// {
		// 	idc = 1000;
		// 	sliderRange[] = {500,12000};
		// 	sliderStep = 100;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class viewField: RscEdit
		// {
		// 	idc = 1400;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 3.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class objectText: RscStructuredText
		// {
		// 	idc = 1103;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OBJECT:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class objectSlider: RscXSliderH
		// {
		// 	idc = 1001;
		// 	sliderRange[] = {500,12000};
		// 	sliderStep = 100;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class objectField: RscEdit
		// {
		// 	idc = 1401;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 5.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class terrainText: RscStructuredText
		// {
		// 	idc = 1104;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "TERRAIN:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class terrainSlider: RscXSliderH
		// {
		// 	idc = 1002;
		// 	sliderRange[] = {1,5};
		// 	sliderStep = 1;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class terrainField: RscEdit
		// {
		// 	idc = 1402;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 6.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class shadowText: RscStructuredText
		// {
		// 	idc = 1105;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SHADOW:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class shadowSlider: RscXSliderH
		// {
		// 	idc = 1003;
		// 	sliderRange[] = {0,200};
		// 	sliderStep = 1;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class shadowField: RscEdit
		// {
		// 	idc = 1403;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 8.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncObjectText1: RscStructuredText
		// {
		// 	idc = 1106;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC OBJECT TO VIEW BY:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncObjectList: RscCombo
		// {
		// 	idc = 2100;

		// 	x = 21.01 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class syncObjectText2: RscStructuredText
		// {
		// 	idc = 1107;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.54 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncObjectField: RscEdit
		// {
		// 	idc = 1404;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 9.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ifFocusedText1: RscStructuredText
		// {
		// 	idc = 1108;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IF FOCUSED, INCREASE VIEW BY:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class ifFocusedList: RscCombo
		// {
		// 	idc = 2101;

		// 	x = 21.01 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class ifFocusedText2: RscStructuredText
		// {
		// 	idc = 1109;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.54 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class ifFocusedField: RscEdit
		// {
		// 	idc = 1405;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 11.3 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ifScopedText1: RscStructuredText
		// {
		// 	idc = 1110;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IF SCOPED, INCREASE VIEW BY:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class ifScopedList: RscCombo
		// {
		// 	idc = 2102;

		// 	x = 21.01 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class ifScopedText2: RscStructuredText
		// {
		// 	idc = 1111;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.54 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class ifScopedField: RscEdit
		// {
		// 	idc = 1406;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 12.8 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class soundHeader: RscStructuredText
		// {
		// 	idc = 1112;

		// 	text = "Sound Settings"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 14.4 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 23.176 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.8};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class soundBackground: IGUIBack
		// {
		// 	idc = 2204;

		// 	x = 7.9 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 23.1999 * GUI_GRID_W;
		// 	h = 9.5 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class effectsText: RscStructuredText
		// {
		// 	idc = 1113;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "EFFECTS:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 16 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class effectsSlider: RscXSliderH
		// {
		// 	idc = 1004;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 16 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class effectsField: RscEdit
		// {
		// 	idc = 1407;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 16 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ambientText: RscStructuredText
		// {
		// 	idc = 1114;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "AMBIENT:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class ambientSlider: RscXSliderH
		// {
		// 	idc = 1005;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ambientField: RscEdit
		// {
		// 	idc = 1408;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class musicText: RscStructuredText
		// {
		// 	idc = 1115;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "MUSIC:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 19 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class musicSlider: RscXSliderH
		// {
		// 	idc = 1006;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;

		// 	x = 12.44 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 19 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 14.6109 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class musicField: RscEdit
		// {
		// 	idc = 1409;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 19 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncAmbientText1: RscStructuredText
		// {
		// 	idc = 1116;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC AMBIENT TO EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncAmbientList: RscCombo
		// {
		// 	idc = 2103;

		// 	x = 21.01 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class syncAmbientText2: RscStructuredText
		// {
		// 	idc = 1117;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.54 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncAmbientField: RscEdit
		// {
		// 	idc = 1410;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncMusicText1: RscStructuredText
		// {
		// 	idc = 1118;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC MUSIC TO EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 7.91 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 22 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncMusicList: RscCombo
		// {
		// 	idc = 2104;

		// 	x = 21.01 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 22 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class syncMusicText2: RscStructuredText
		// {
		// 	idc = 1119;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.54 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 22 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class syncMusicField: RscEdit
		// {
		// 	idc = 1411;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.56 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 22 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class RscStructuredText_1120: RscStructuredText
		// {
		// 	idc = 1120;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IN MAP, REDUCE EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 7.9 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 13.0995 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class RscCombo_2105: RscCombo
		// {
		// 	idc = 2105;

		// 	x = 21 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 4.53441 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// };
		// class RscStructuredText_1121: RscStructuredText
		// {
		// 	idc = 1121;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 25.5 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 2.01529 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H * GUI_GRID_H;
		// };
		// class RscEdit_1412: RscEdit
		// {
		// 	idc = 1412;

		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 27.5 * GUI_GRID_W + GUI_GRID_X;
		// 	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
		// 	w = 3.02295 * GUI_GRID_W;
		// 	h = 1 * GUI_GRID_H;
		// 	colorBackground[] = {0,0,0,0.5};
		// };

		//OLDEST \/\/\/

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

		//This will be removed soonTM, just wanna keep it for if any needed reference. Shouldn't be any...

		// class menuHeader: RscStructuredText
		// {
		// 	idc = 1100;
		// 	text = "Perceptive"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.225 * safezoneH + safezoneY;
		// 	w = 0.177862 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {
		// 		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0])",
		// 		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0])",
		// 		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
		// 		"(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
		// 	};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class tabMan: RscButton
		// {
		// 	idc = 1600;
		// 	text = "No Vehicle"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.2492 * safezoneH + safezoneY;
		// 	w = 0.0579984 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	tooltip = "View and audio settings related to being on foot."; //--- ToDo: Localize;
		// };
		// class tabGround: RscButton
		// {
		// 	idc = 1601;
		// 	text = "Ground Vehicle"; //--- ToDo: Localize;
		// 	x = 0.469068 * safezoneW + safezoneX;
		// 	y = 0.2492 * safezoneH + safezoneY;
		// 	w = 0.0541318 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	tooltip = "View and audio settings related to being in a ground, static, or water vehicle."; //--- ToDo: Localize;
		// };
		// class tabAir: RscButton
		// {
		// 	idc = 1602;
		// 	text = "Air Vehicle"; //--- ToDo: Localize;
		// 	x = 0.527066 * safezoneW + safezoneX;
		// 	y = 0.2492 * safezoneH + safezoneY;
		// 	w = 0.0579984 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	tooltip = "View and audio settings related to being in an air vehicle."; //--- ToDo: Localize;
		// };
		// class viewHeader: RscStructuredText
		// {
		// 	idc = 1101;
		// 	text = "View Settings"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.2734 * safezoneH + safezoneY;
		// 	w = 0.177862 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0.8};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class viewBackground: IGUIBack
		// {
		// 	idc = 2202;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.2976 * safezoneH + safezoneY;
		// 	w = 0.177862 * safezoneW;
		// 	h = 0.242 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class viewText: RscStructuredText
		// {
		// 	idc = 1102;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "VIEW:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.3086 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class viewSlider: RscXSliderH
		// {
		// 	idc = 1000;
		// 	sliderRange[] = {500,12000};
		// 	sliderStep = 100;

		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.3086 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class viewField: RscEdit
		// {
		// 	idc = 1400;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.3086 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class objectText: RscStructuredText
		// {
		// 	idc = 1103;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OBJECT:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.3416 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class objectSlider: RscXSliderH
		// {
		// 	idc = 1001;
		// 	sliderRange[] = {500,12000};
		// 	sliderStep = 100;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.3416 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class objectField: RscEdit
		// {
		// 	idc = 1401;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.3416 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class terrainText: RscStructuredText
		// {
		// 	idc = 1104;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "TERRAIN:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.3746 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class terrainSlider: RscXSliderH
		// {
		// 	idc = 1002;
		// 	sliderRange[] = {1,5};
		// 	sliderStep = 1;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.3746 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class terrainField: RscEdit
		// {
		// 	idc = 1402;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.3746 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class shadowText: RscStructuredText
		// {
		// 	idc = 1105;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SHADOW:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.4076 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class shadowSlider: RscXSliderH
		// {
		// 	idc = 1003;
		// 	sliderRange[] = {0,200};
		// 	sliderStep = 1;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.4076 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class shadowField: RscEdit
		// {
		// 	idc = 1403;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.4076 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncObjectText1: RscStructuredText
		// {
		// 	idc = 1106;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC OBJECT TO VIEW BY:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.4406 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncObjectList: RscCombo
		// {
		// 	idc = 2100;
		// 	x = 0.507733 * safezoneW + safezoneX;
		// 	y = 0.4406 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class syncObjectText2: RscStructuredText
		// {
		// 	idc = 1107;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542532 * safezoneW + safezoneX;
		// 	y = 0.4406 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncObjectField: RscEdit
		// {
		// 	idc = 1404;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.4406 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ifFocusedText1: RscStructuredText
		// {
		// 	idc = 1108;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IF FOCUSED, INCREASE VIEW BY:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.4736 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class ifFocusedList: RscCombo
		// {
		// 	idc = 2101;
		// 	x = 0.507733 * safezoneW + safezoneX;
		// 	y = 0.4736 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class ifFocusedText2: RscStructuredText
		// {
		// 	idc = 1109;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542532 * safezoneW + safezoneX;
		// 	y = 0.4736 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class ifFocusedField: RscEdit
		// {
		// 	idc = 1405;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.4736 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ifScopedText1: RscStructuredText
		// {
		// 	idc = 1110;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IF SCOPED, INCREASE VIEW BY:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.5066 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class ifScopedList: RscCombo
		// {
		// 	idc = 2102;
		// 	x = 0.507733 * safezoneW + safezoneX;
		// 	y = 0.5066 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class ifScopedText2: RscStructuredText
		// {
		// 	idc = 1111;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542532 * safezoneW + safezoneX;
		// 	y = 0.5066 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class ifScopedField: RscEdit
		// {
		// 	idc = 1406;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.5066 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class soundHeader: RscStructuredText
		// {
		// 	idc = 1112;
		// 	text = "Sound Settings"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.5418 * safezoneH + safezoneY;
		// 	w = 0.177862 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0.8};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class soundBackground: IGUIBack
		// {
		// 	idc = 2204;
		// 	x = 0.40714 * safezoneW + safezoneX;
		// 	y = 0.566 * safezoneH + safezoneY;
		// 	w = 0.178046 * safezoneW;
		// 	h = 0.209 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class effectsText: RscStructuredText
		// {
		// 	idc = 1113;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "EFFECTS:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.577 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class effectsSlider: RscXSliderH
		// {
		// 	idc = 1004;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.577 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class effectsField: RscEdit
		// {
		// 	idc = 1407;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.577 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ambientText: RscStructuredText
		// {
		// 	idc = 1114;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "AMBIENT:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.61 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class ambientSlider: RscXSliderH
		// {
		// 	idc = 1005;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.61 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class ambientField: RscEdit
		// {
		// 	idc = 1408;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.61 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class musicText: RscStructuredText
		// {
		// 	idc = 1115;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "MUSIC:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.643 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class musicSlider: RscXSliderH
		// {
		// 	idc = 1006;
		// 	sliderRange[] = {0,100};
		// 	sliderStep = 1;
			
		// 	x = 0.442002 * safezoneW + safezoneX;
		// 	y = 0.643 * safezoneH + safezoneY;
		// 	w = 0.11213 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class musicField: RscEdit
		// {
		// 	idc = 1409;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.643 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncAmbientText1: RscStructuredText
		// {
		// 	idc = 1116;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC AMBIENT TO EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.676 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncAmbientList: RscCombo
		// {
		// 	idc = 2103;
		// 	x = 0.507733 * safezoneW + safezoneX;
		// 	y = 0.676 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class syncAmbientText2: RscStructuredText
		// {
		// 	idc = 1117;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542532 * safezoneW + safezoneX;
		// 	y = 0.676 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncAmbientField: RscEdit
		// {
		// 	idc = 1410;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.676 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class syncMusicText1: RscStructuredText
		// {
		// 	idc = 1118;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "SYNC MUSIC TO EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 0.407203 * safezoneW + safezoneX;
		// 	y = 0.709 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncMusicList: RscCombo
		// {
		// 	idc = 2104;
		// 	x = 0.507733 * safezoneW + safezoneX;
		// 	y = 0.709 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class syncMusicText2: RscStructuredText
		// {
		// 	idc = 1119;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542532 * safezoneW + safezoneX;
		// 	y = 0.709 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class syncMusicField: RscEdit
		// {
		// 	idc = 1411;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557998 * safezoneW + safezoneX;
		// 	y = 0.709 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
		// class RscStructuredText_1120: RscStructuredText
		// {
		// 	idc = 1120;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "IN MAP, REDUCE EFFECTS BY:"; //--- ToDo: Localize;
		// 	x = 0.40714 * safezoneW + safezoneX;
		// 	y = 0.742 * safezoneH + safezoneY;
		// 	w = 0.100531 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class RscCombo_2105: RscCombo
		// {
		// 	idc = 2105;
		// 	x = 0.507674 * safezoneW + safezoneX;
		// 	y = 0.742 * safezoneH + safezoneY;
		// 	w = 0.034799 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// };
		// class RscStructuredText_1121: RscStructuredText
		// {
		// 	idc = 1121;
		// 	class Attributes {
		// 		align = "right";
		// 	};

		// 	text = "OF:"; //--- ToDo: Localize;
		// 	x = 0.542209 * safezoneW + safezoneX;
		// 	y = 0.742 * safezoneH + safezoneY;
		// 	w = 0.0154662 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorText[] = {1,1,1,1};
		// 	colorBackground[] = {0,0,0,0};
		// 	sizeEx = 1 * GUI_GRID_H;
		// };
		// class RscEdit_1412: RscEdit
		// {
		// 	idc = 1412;
		// 	text = "99999"; //--- ToDo: Localize;
		// 	x = 0.557558 * safezoneW + safezoneX;
		// 	y = 0.742 * safezoneH + safezoneY;
		// 	w = 0.0231994 * safezoneW;
		// 	h = 0.022 * safezoneH;
		// 	colorBackground[] = {0,0,0,0.5};
		// };
	};
};
/* #Faneju
$[
	1.063,
	["asd",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1100,"menuHeader",[1,"Perceptive",["0.407203 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.177862 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0.9],[-1,-1,-1,-1],"","1"],[]],
	[1600,"tabMan",[1,"No Vehicle",["0.407203 * safezoneW + safezoneX","0.2492 * safezoneH + safezoneY","0.0579984 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"View and audio settings related to being on foot.","-1"],[]],
	[1601,"tabGround",[1,"Ground Vehicle",["0.469068 * safezoneW + safezoneX","0.2492 * safezoneH + safezoneY","0.0541318 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"View and audio settings related to being in a ground, static, or water vehicle.","-1"],[]],
	[1602,"tabAir",[1,"Air Vehicle",["0.527066 * safezoneW + safezoneX","0.2492 * safezoneH + safezoneY","0.0579984 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"View and audio settings related to being in an air vehicle.","-1"],[]],
	[1101,"viewHeader",[1,"View Settings",["0.407203 * safezoneW + safezoneX","0.2734 * safezoneH + safezoneY","0.177862 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0.8],[-1,-1,-1,-1],"","1"],[]],
	[2202,"viewBackground",[1,"",["0.407203 * safezoneW + safezoneX","0.2976 * safezoneH + safezoneY","0.177862 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1102,"viewText",[1,"VIEW:",["0.407203 * safezoneW + safezoneX","0.3086 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1000,"viewSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.3086 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"viewField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.3086 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1103,"objectText",[1,"OBJECT:",["0.407203 * safezoneW + safezoneX","0.3416 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1001,"objectSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.3416 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1401,"objectField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.3416 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1104,"terrainText",[1,"TERRAIN:",["0.407203 * safezoneW + safezoneX","0.3746 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1002,"terrainSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.3746 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1402,"terrainField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.3746 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1105,"shadowText",[1,"SHADOW:",["0.407203 * safezoneW + safezoneX","0.4076 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1003,"shadowSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.4076 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1403,"shadowField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.4076 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1106,"syncObjectText1",[1,"SYNC OBJECT TO VIEW BY:",["0.407203 * safezoneW + safezoneX","0.4406 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2100,"syncObjectList",[1,"",["0.507733 * safezoneW + safezoneX","0.4406 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1107,"syncObjectText2",[1,"OF:",["0.542532 * safezoneW + safezoneX","0.4406 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1404,"syncObjectField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.4406 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1108,"ifFocusedText1",[1,"IF FOCUSED, INCREASE VIEW BY:",["0.407203 * safezoneW + safezoneX","0.4736 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2101,"ifFocusedList",[1,"",["0.507733 * safezoneW + safezoneX","0.4736 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1109,"ifFocusedText2",[1,"OF:",["0.542532 * safezoneW + safezoneX","0.4736 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1405,"ifFocusedField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.4736 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1110,"ifScopedText1",[1,"IF SCOPED, INCREASE VIEW BY:",["0.407203 * safezoneW + safezoneX","0.5066 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2102,"ifScopedList",[1,"",["0.507733 * safezoneW + safezoneX","0.5066 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1111,"ifScopedText2",[1,"OF:",["0.542532 * safezoneW + safezoneX","0.5066 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1406,"ifScopedField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.5066 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1112,"soundHeader",[1,"Sound Settings",["0.407203 * safezoneW + safezoneX","0.5418 * safezoneH + safezoneY","0.177862 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0.8],[-1,-1,-1,-1],"","1"],[]],
	[2204,"soundBackground",[1,"",["0.40714 * safezoneW + safezoneX","0.5638 * safezoneH + safezoneY","0.178046 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1113,"effectsText",[1,"EFFECTS:",["0.407203 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1004,"effectsSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1407,"effectsField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1114,"ambientText",[1,"AMBIENT:",["0.407203 * safezoneW + safezoneX","0.61 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1005,"ambientSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.61 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1408,"ambientField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.61 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1115,"musicText",[1,"MUSIC:",["0.407203 * safezoneW + safezoneX","0.643 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1006,"musicSlider",[1,"",["0.442002 * safezoneW + safezoneX","0.643 * safezoneH + safezoneY","0.11213 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1409,"musicField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.643 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1116,"syncAmbientText1",[1,"SYNC AMBIENT TO EFFECTS BY:",["0.407203 * safezoneW + safezoneX","0.676 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2103,"syncAmbientList",[1,"",["0.507733 * safezoneW + safezoneX","0.676 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1117,"syncAmbientText2",[1,"OF:",["0.542532 * safezoneW + safezoneX","0.676 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1410,"syncAmbientField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.676 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1118,"syncMusicText1",[1,"SYNC MUSIC TO EFFECTS BY:",["0.407203 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2104,"syncMusicList",[1,"",["0.507733 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1119,"syncMusicText2",[1,"OF:",["0.542532 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1411,"syncMusicField",[1,"99999",["0.557998 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1120,"",[1,"IN MAP, REDUCE EFFECTS BY:",["0.40714 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.100531 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[2105,"",[1,"",["0.507674 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.034799 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1121,"",[1,"OF:",["0.542209 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.0154662 * safezoneW","0.022 * safezoneH"],[1,1,1,1],[0,0,0,0],[-1,-1,-1,-1],"","1"],[]],
	[1412,"",[1,"99999",["0.557558 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.0231994 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]]
]
*/