class ChernarusMap: ItemMap 
{
	hiddenSelections[]=
	{
		"texture_map_closed",
		"texture_map_opened",
		"texture_legend"
	};
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1.01,{"IntenZ\Map\Assets\Vanilla\closed_prestine.rvmat"}},
                {0.70,{"IntenZ\Map\Assets\Vanilla\closed_prestine.rvmat"}},
                {0.50,{"IntenZ\Map\Assets\Vanilla\closed_damage.rvmat"}},
                {0.30,{"IntenZ\Map\Assets\Vanilla\closed_damage.rvmat"}},
                {0.01,{"IntenZ\Map\Assets\Vanilla\closed_destruct.rvmat"}}
            };
        };
    };
};
class ChernarusMap_Open: ChernarusMap
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1.01,{"IntenZ\Map\Assets\Vanilla\open_prestine.rvmat"}},
                {0.70,{"IntenZ\Map\Assets\Vanilla\open_prestine.rvmat"}},
                {0.50,{"IntenZ\Map\Assets\Vanilla\open_damage.rvmat"}},
                {0.30,{"IntenZ\Map\Assets\Vanilla\open_damage.rvmat"}},
                {0.01,{"IntenZ\Map\Assets\Vanilla\open_destruct.rvmat"}}
            };
        };
    };
};

/*class IntenZMap_Survivor: ChernarusMap 
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Map\Assets\map_chernarus_co.paa",
		"IntenZ\Map\Assets\survivor_co.paa",
		"IntenZ\Map\Assets\survivor_side_co.paa"
	};
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1.01,{"IntenZ\Map\Assets\Survivor\closed_prestine.rvmat"}},
                {0.70,{"IntenZ\Map\Assets\Survivor\closed_prestine.rvmat"}},
                {0.50,{"IntenZ\Map\Assets\Survivor\closed_damage.rvmat"}},
                {0.30,{"IntenZ\Map\Assets\Survivor\closed_damage.rvmat"}},
                {0.01,{"IntenZ\Map\Assets\Survivor\closed_destruct.rvmat"}}
            };
        };
    };
};
class IntenZMap_Survivor_open: IntenZMap_Survivor 
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1.01,{"IntenZ\Map\Assets\Survivor\open_prestine.rvmat"}},
                {0.70,{"IntenZ\Map\Assets\Survivor\open_prestine.rvmat"}},
                {0.50,{"IntenZ\Map\Assets\Survivor\open_damage.rvmat"}},
                {0.30,{"IntenZ\Map\Assets\Survivor\open_damage.rvmat"}},
                {0.01,{"IntenZ\Map\Assets\Survivor\open_destruct.rvmat"}}
            };
        };
    };
};
class IntenZMap_Bandit: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Map\Assets\map_chernarus_co.paa",
		"IntenZ\Map\Assets\bandit_co.paa",
		"IntenZ\Map\Assets\bandit_side_co.paa"
	};
};
class IntenZMap_Bandit_open: IntenZMap_Bandit {};
class IntenZMap_Burned: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Map\Assets\map_chernarus_co.paa",
		"IntenZ\Map\Assets\burned_co.paa",
		"IntenZ\Map\Assets\burned_side_co.paa"
	};
};
class IntenZMap_Burned_open: IntenZMap_Burned {};
class IntenZMap_Bloody: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Map\Assets\map_chernarus_co.paa",
		"IntenZ\Map\Assets\bloody_co.paa",
		"IntenZ\Map\Assets\bloody_side_co.paa"
	};
};
class IntenZMap_Bloody_open: IntenZMap_Bloody {};*/
