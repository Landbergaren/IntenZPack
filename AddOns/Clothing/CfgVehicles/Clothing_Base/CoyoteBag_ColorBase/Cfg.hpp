class CoyoteBag_ColorBase: Clothing
{
	hiddenSelections[]=
	{
		"camoGround",
		"camoMale",
		"camoFemale"
	};
/*	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=300;
				healthLevels[]=
				{
					{1,			{"DZ\Characters\backpacks\data\CoyotesBP.rvmat"}},
					{0.69999999,{"DZ\Characters\backpacks\data\CoyotesBP.rvmat"}},
					{0.5,		{"DZ\Characters\backpacks\data\CoyoteBP_damage.rvmat"}},
					{0.30000001,{"DZ\Characters\backpacks\data\CoyoteBP_damage.rvmat"}},
					{0,			{"DZ\Characters\backpacks\data\CoyoteBP_destruct.rvmat"}}
				};
			};
		};
	};*/
};

class CoyoteBag_White: CoyoteBag_ColorBase
{
	scope=2;
	visibilityModifier=0.7;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\white_co.paa",
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\white_co.paa",
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\white_co.paa"
	};
};
class CoyoteBag_Black: CoyoteBag_ColorBase
{
	scope=2;
	visibilityModifier=0.7;
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\black_co.paa",
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\black_co.paa",
		"IntenZ\Clothing\Assets\Backpacks\Coyotebp\black_co.paa"
	};
};
