class UniversalLight: Switchable_Base
{
	hiddenSelections[]=
	{
		"zbytek",
		"reflector",
		"glass",
		"reflector_far"
	};
	hiddenSelectionsTextures[]=
	{
		"dz\weapons\attachments\data\m4_flashlight_co.paa",
		"dz\weapons\attachments\data\m4_flashlight_co.paa",
		"dz\gear\tools\data\flashlight_glass.paa",
		"dz\weapons\attachments\data\m4_flashlight_co.paa"
	};
};

class UniversalLight_Red: UniversalLight
{
	hiddenSelectionsTextures[]=
	{
		"dz\weapons\attachments\data\m4_flashlight_co.paa",
		"dz\weapons\attachments\data\m4_flashlight_co.paa",
		"IntenZ\Night\Assets\Flashlight\red_glass",
		"dz\weapons\attachments\data\m4_flashlight_co.paa"
	};
};
