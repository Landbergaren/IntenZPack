class Umbrella_ColorBase: Inventory_Base
{
	model="IntenZ\Umbrella\Assets\umbrella.p3d";
	displayName="$STR_iz_cfgvehicles_Umbrella0";
	descriptionShort="$STR_iz_cfgvehicles_Umbrella1";
//	suicideAnim="sword";
	lootCategory="Tools";
	rotationFlags=17;
	weight=750;
	isMeleeWeapon=1;
	openItemSpillRange[]={20,40};
	repairableWithKits[]={5,4};
	repairCosts[]={30,25};
	itemSize[]={2,7};
	itemInfo[]={"Axe"};
	lootTag[]=
	{
		"Work",
		"Forester",
		"Camping"
	};
	inventorySlot[]=
	{
		"Shoulder",
		"Melee"
	};
	hiddenSelections[]=
	{
		"celta_max",
		"celta_max1",
		"celta_low",
		"celta_low1"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=20;
				healthLevels[]=
				{
					{1.0,{"dz\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.7,{"dz\weapons\melee\blade\data\hatchet.rvmat"}},
					{0.5,{"dz\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0.3,{"dz\weapons\melee\blade\data\hatchet_damage.rvmat"}},
					{0.0,{"dz\weapons\melee\blade\data\hatchet_destruct.rvmat"}}
				};
			};
		};
	};
	class MeleeModes
	{
		class Default
		{
			ammo="MeleeWoodBlunt";
			range=1.8;
		};
		class Heavy
		{
			ammo="MeleeWoodBlunt_Heavy";
			range=1.8;
		};
		class Sprint
		{
			ammo="MeleeWoodBlunt_Heavy";
			range=3.7;
		};
	};
	class AnimationSources
	{
		class State_Open
		{
			source="user";
			animPeriod=0.01;
			initPhase=1;
		};
		class State_Closed
		{
			source="user";
			animPeriod=0.01;
			initPhase=0;
		};
	};
};
class Umbrella_Black: Umbrella_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Umbrella\Assets\open\black_co.paa",
		"IntenZ\Umbrella\Assets\open\black_co.paa",
		"IntenZ\Umbrella\Assets\closed\black_co.paa",
		"IntenZ\Umbrella\Assets\closed\black_co.paa"
	};
};
class Umbrella_Blue: Umbrella_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Umbrella\Assets\open\blue_co.paa",
		"IntenZ\Umbrella\Assets\open\blue_co.paa",
		"IntenZ\Umbrella\Assets\closed\blue_co.paa",
		"IntenZ\Umbrella\Assets\closed\blue_co.paa"
	};
};
class Umbrella_Green: Umbrella_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Umbrella\Assets\open\green_co.paa",
		"IntenZ\Umbrella\Assets\open\green_co.paa",
		"IntenZ\Umbrella\Assets\closed\green_co.paa",
		"IntenZ\Umbrella\Assets\closed\green_co.paa"
	};
};
class Umbrella_Rainbow: Umbrella_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Umbrella\Assets\open\rainbow_co.paa",
		"IntenZ\Umbrella\Assets\open\rainbow_co.paa",
		"IntenZ\Umbrella\Assets\closed\rainbow_co.paa",
		"IntenZ\Umbrella\Assets\closed\rainbow_co.paa"
	};
};
class Umbrella_Yellow: Umbrella_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Umbrella\Assets\open\yellow_co.paa",
		"IntenZ\Umbrella\Assets\open\yellow_co.paa",
		"IntenZ\Umbrella\Assets\closed\yellow_co.paa",
		"IntenZ\Umbrella\Assets\closed\yellow_co.paa"
	};
};
