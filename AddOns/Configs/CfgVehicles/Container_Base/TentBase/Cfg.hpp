class TentBase: Container_Base {};

#include "ShelterBase\Cfg.hpp"

class MediumTent: TentBase {};
class Packed_MediumTent: MediumTent {};
class Packed_MediumTent_Green: Packed_MediumTent
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.152941,0.176471,0.101961,1.0,co)",
		"dz\gear\camping\data\tent_pristine_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\camping\data\tent_medium_packed.rvmat",
		"dz\gear\camping\data\tent_medium_pitched_g.rvmat"
	};
};
class Packed_MediumTent_Orange: Packed_MediumTent
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.152941,0.145098,0.203922,1.0,co)",
		"dz\gear\camping\data\tent_pristine_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\camping\data\tent_medium_packed.rvmat",
		"dz\gear\camping\data\tent_medium_pitched_o.rvmat"
	};
};

class LargeTent: TentBase {};
class Packed_LargeTent: LargeTent {};

class CarTent: TentBase {};
class Packed_CarTent: CarTent {};

class PartyTent: TentBase {};
class Packed_PartyTent: PartyTent {};
class Packed_PartyTent_Blue: Packed_PartyTent
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.0862745,0.180392,0.537255,1.0,co)",
		"dz\gear\camping\data\tent_pristine_co.paa",
		"dz\gear\camping\data\party_tent_pieces_co.paa",
		"dz\gear\camping\data\party_tent_tubes_cables_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\camping\data\party_tent_bag.rvmat",
		"dz\gear\camping\data\party_tent_cloth_blue.rvmat",
		"dz\gear\camping\data\party_tent_pieces.rvmat",
		"dz\gear\camping\data\party_tent_tubes_cables.rvmat"
	};
};
class Packed_PartyTent_Brown: Packed_PartyTent
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.196078,0,0.0980392,1.0,co)",
		"dz\gear\camping\data\tent_pristine_co.paa",
		"dz\gear\camping\data\party_tent_pieces_co.paa",
		"dz\gear\camping\data\party_tent_tubes_cables_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\camping\data\party_tent_bag.rvmat",
		"dz\gear\camping\data\party_tent_cloth_brown.rvmat",
		"dz\gear\camping\data\party_tent_pieces.rvmat",
		"dz\gear\camping\data\party_tent_tubes_cables.rvmat"
	};
};
class Packed_PartyTent_Lunapark: Packed_PartyTent
{
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.611765,0.584314,0.054902,1.0,co)",
		"dz\gear\camping\data\tent_pristine_co.paa",
		"dz\gear\camping\data\party_tent_pieces_co.paa",
		"dz\gear\camping\data\party_tent_tubes_cables_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"dz\gear\camping\data\party_tent_bag.rvmat",
		"dz\gear\camping\data\party_tent_cloth_lunapark.rvmat",
		"dz\gear\camping\data\party_tent_pieces.rvmat",
		"dz\gear\camping\data\party_tent_tubes_cables.rvmat"
	};
};
