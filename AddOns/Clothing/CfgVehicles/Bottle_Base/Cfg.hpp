class Bottle_Base;
class Canteen: Bottle_Base {};
class Canteen_ColorBase: Canteen
{
	scope=0;
	hiddenSelections[]=
	{
		"zbytek"
	};
};
class Canteen_White: Canteen_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Clothing\Assets\Gear\Canteen\white_co.paa"
	};
};
class Canteen_Black: Canteen_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Clothing\Assets\Gear\Canteen\black_co.paa"
	};
};
