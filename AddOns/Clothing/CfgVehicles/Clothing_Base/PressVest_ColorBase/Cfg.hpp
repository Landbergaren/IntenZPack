class PressVest_ColorBase: Clothing
{
	hiddenSelections[]=
	{
		"camoGround",
		"camoMale",
		"camoFemale"
	};
	itemSize[]={2,3};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=75;
			};
		};
	};
};

class PressVest_IntenZ: PressVest_ColorBase
{
	scope=2;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz_co.paa",
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz_co.paa",
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat",
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat",
		"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat"
	};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				healthLevels[]=
				{
					{1.01,{"DZ\characters\vests\Data\PressVest.rvmat"}},
					{0.70,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat"}},
					{0.50,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_damage.rvmat"}},
					{0.30,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_damage.rvmat"}},
					{0.01,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_destruct.rvmat"}}
				};
			};
		};
	};
};
