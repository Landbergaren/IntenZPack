class cfgVehicles
{
	class Container_Base;
	class WoodenCrate: Container_Base
	{
		class Cargo;
	};
	class Mission_Container: WoodenCrate
	{
		displayName="Mission-Container";
		descriptionShort="Carefull !!! This Container will despawn when the mission ends.";
		model="\DZ\gear\camping\wooden_case.p3d";
		class Cargo: Cargo
		{
			itemsCargoSize[]={10,10};
		};
	};
	class Mission_Tent: Mission_Container
	{
		displayName="Mission-Tent"; 
		descriptionShort="Carefull !!! This Tent will despawn when the mission ends.";
		model="\DZ\gear\camping\improvised_tent_02.p3d";
	};
	class Mission_Shelter: Mission_Container
	{
		displayName="Mission-Shelter"; 
		descriptionShort="Carefull !!! This Shelter will despawn when the mission ends.";
		model="\DZ\gear\camping\camo_net_shelter.p3d";
	};
};
