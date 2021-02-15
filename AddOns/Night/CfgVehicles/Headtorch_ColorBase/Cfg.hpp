class Headtorch_ColorBase: Switchable_Base
{
	hiddenSelections[]=
	{
		"camoGround",
		"camoMale",
		"camoFemale",
		"bulb",
		"reflector",
		"glass",
		"reflector_far"
	};
};

class Headtorch_Grey: Headtorch_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"dz\characters\headgear\data\headtorch_Grey_co.paa",
		"dz\characters\headgear\data\headtorch_Grey_co.paa",
		"dz\characters\headgear\data\headtorch_Grey_co.paa",
		"dz\data\data\light_flare2_ca.paa",
		"dz\characters\headgear\data\headtorch_Grey_co.paa",
		"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
		"dz\characters\headgear\data\headtorch_Grey_co.paa"
	};
};
class Headtorch_Black: Headtorch_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"dz\characters\headgear\data\headtorch_Black_co.paa",
		"dz\characters\headgear\data\headtorch_Black_co.paa",
		"dz\characters\headgear\data\headtorch_Black_co.paa",
		"dz\data\data\light_flare2_ca.paa",
		"dz\characters\headgear\data\headtorch_Black_co.paa",
		"#(argb,8,8,3)color(0.0745098,0.141176,0.184314,0.3,ca)",
		"dz\characters\headgear\data\headtorch_Black_co.paa"
	};
};
