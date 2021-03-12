class CfgPatches
{
	class IntenZ_MuchStuff
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"MSP_Storage_crates",
			"MSP_Scripts",
			"IntenZ_MissionContainer"
		};
	};
};

class CfgMods
{
	class IntenZ_MuchStuff
	{
		type = "mod";
		dependencies[] = {};
	};
};

class CfgVehicles
{
	class Container_Base;
	class Msp_Kit: Container_Base
	{
		itemSize[] = {10,7};
		weight = 15000;
	};
	class WoodenCrate;
	class Mission_Container: WoodenCrate
	{
	//	model = "\MuchStuffPack\MSP_Storage_crates\militarycrate\militarycrate.p3d";
	};
};
