class Flashlight: Inventory_Base
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
		"dz\gear\tools\data\flashlight_old_co.paa",
		"dz\gear\tools\data\flashlight_old_co.paa",
		"dz\gear\tools\data\flashlight_glass.paa",
		"dz\gear\tools\data\flashlight_old_co.paa"
	};
};

class Flashlight_Red: Flashlight
{
	hiddenSelectionsTextures[]=
	{
		"dz\gear\tools\data\flashlight_old_co.paa",
		"dz\gear\tools\data\flashlight_old_co.paa",
		"IntenZ\Night\Assets\Flashlight\red_glass",
		"dz\gear\tools\data\flashlight_old_co.paa"
	};
};
