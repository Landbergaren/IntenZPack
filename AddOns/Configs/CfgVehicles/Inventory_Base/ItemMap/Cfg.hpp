class ItemMap: Inventory_Base {};
class ChernarusMap: ItemMap 
{
	class GlobalHealth
    {
        class Health
        {
            hitpoints=50;
            healthLevels[]=
            {
                
                {1.0,{"dz\gear\navigation\data\map_chernarus.rvmat"}},
                {0.7,{"dz\gear\navigation\data\map_chernarus.rvmat"}},
                {0.5,{"dz\gear\navigation\data\map_chernarus_damage.rvmat"}},
                {0.3,{"dz\gear\navigation\data\map_chernarus_damage.rvmat"}},
                {0.0,{"dz\gear\navigation\data\map_chernarus_destruct.rvmat"}}
            };
        };
    };
};
class IntenZMap_Survivor: ChernarusMap 
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Configs\Assets\textures\map\map_chernarus_co.paa",
		"IntenZ\Configs\Assets\textures\map\survivor_co.paa",
		"IntenZ\Configs\Assets\textures\map\survivor_side_co.paa"
	};
};
class IntenZMap_Survivor_open: IntenZMap_Survivor {};
class IntenZMap_Bandit: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Configs\Assets\textures\map\map_chernarus_co.paa",
		"IntenZ\Configs\Assets\textures\map\bandit_co.paa",
		"IntenZ\Configs\Assets\textures\map\bandit_side_co.paa"
	};
};
class IntenZMap_Bandit_open: IntenZMap_Bandit {};
class IntenZMap_Burned: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Configs\Assets\textures\map\map_chernarus_co.paa",
		"IntenZ\Configs\Assets\textures\map\burned_co.paa",
		"IntenZ\Configs\Assets\textures\map\burned_side_co.paa"
	};
};
class IntenZMap_Burned_open: IntenZMap_Burned {};
class IntenZMap_Bloody: ChernarusMap
{
	hiddenSelectionsTextures[]=
	{
		"IntenZ\Configs\Assets\textures\map\map_chernarus_co.paa",
		"IntenZ\Configs\Assets\textures\map\bloody_co.paa",
		"IntenZ\Configs\Assets\textures\map\bloody_side_co.paa"
	};
};
class IntenZMap_Bloody_open: IntenZMap_Bloody {};
