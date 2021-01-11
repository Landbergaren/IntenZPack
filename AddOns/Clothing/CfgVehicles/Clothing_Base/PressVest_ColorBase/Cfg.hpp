class PressVest_ColorBase: Clothing
{
	hiddenSelections[]=
	{
		"camoGround",
		"camoMale",
		"camoFemale"
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
/*	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=50;
				healthLevels[]=
				{
					{1,			{"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat"}},
					{0.69999999,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz.rvmat"}},
					{0.5,		{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_damage.rvmat"}},
					{0.30000001,{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_damage.rvmat"}},
					{0,			{"IntenZ\Clothing\Assets\Vests\PressVest\intenz_destruct.rvmat"}}
				};
			};
		};
	};*/
};
