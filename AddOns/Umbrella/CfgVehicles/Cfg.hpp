class CfgVehicles
{
	class Inventory_Base;
	#include "Umbrella_ColorBase\Cfg.hpp"
	
	class Umbrella_Base: Inventory_Base 
	{
		displayName="$STR_iz_cfgvehicles_Umbrella0";
		descriptionShort="$STR_iz_cfgvehicles_Umbrella1";
		lootCategory="Tools";
		rotationFlags=17;
		weight=750;
		isMeleeWeapon=1;
		openItemSpillRange[]={20,40};
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		itemInfo[]={"Axe"};
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
	};
	#include "Umbrella_Opened\Cfg.hpp"
	#include "Umbrella_Closed\Cfg.hpp"
};
