class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class Pot;
	class LargePot: Pot
	{
		displayName = "Large Pot";
		descriptionShort = "A large metal pot. Used for cooking or food storage.";
//		model = "IntenZ\PerishableFood\Assets\pan.p3d";
		weight = 1500;
		itemSize[] = {6,6};
		itemsCargoSize[] = {6,6};
		inventorySlot[] = {};
		varQuantityMax = 20000;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"IntenZ\PerishableFood\Assets\data\pan.rvmat"}},
						{0.7,{"IntenZ\PerishableFood\Assets\data\pan.rvmat"}},
						{0.5,{"IntenZ\PerishableFood\Assets\data\pan_damage.rvmat"}},
						{0.3,{"IntenZ\PerishableFood\Assets\data\pan_damage.rvmat"}},
						{0.0,{"IntenZ\PerishableFood\Assets\data\pan_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class SaltStone: Inventory_Base
	{
		scope = 2;
		displayName = "Salt Crystals";
		descriptionShort = "Fragments and crystals of salt. Used to conserve food.";
//		model = "IntenZ\PerishableFood\Assets\saltstone.p3d";
		weight = 250;
		itemSize[] = {2,1};
		canBeSplit = 1;
		stackedRandom = 1;
		varQuantityInit = 4;
		varQuantityMin = 0;
		varQuantityMax = 4;
		absorbency = 0.9;
		rotationFlags = 0;
		hiddenSelectionsTextures[] = {"IntenZ\PerishableFood\Assets\Data\saltrock_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\gear\food\data\rice.rvmat"}},
						{0.7,{"DZ\gear\food\data\rice.rvmat"}},
						{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},
						{0.3,{"DZ\gear\food\data\rice_damage.rvmat"}},
						{0.0,{"DZ\gear\food\data\rice_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class SaltPack: Inventory_Base
	{
		scope = 2;
		displayName = "Salt Pack";
		descriptionShort = "A bag of salt. Used to conserve food.";
		model = "\dz\gear\food\Rice.p3d";
		weight = 1000;
		itemSize[] = {2,3};
		absorbency = 0.1;
		rotationFlags = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"IntenZ\PerishableFood\Assets\Data\packsalt_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DZ\gear\food\data\rice.rvmat"}},
						{0.7,{"DZ\gear\food\data\rice.rvmat"}},
						{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},
						{0.3,{"DZ\gear\food\data\rice_damage.rvmat"}},
						{0.0,{"DZ\gear\food\data\rice_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class SaltStone
			{
				value = 4;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class PF_Fridge: Inventory_Base
	{
		scope = 2;
		displayName = "Fridge";
		descriptionShort = "Rusty old fridge. Holds only drinks and food.";
		model = "\DZ\gear\containers\fridge.p3d";
		canBeDigged = 1;
		weight = 30000;
		itemBehaviour = 0;
		itemSize[] = {7,10};
		itemsCargoSize[] = {6,9};
		rotationFlags = 2;
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.00124;
			cordTextureFile = "DZ\gear\camping\Data\plug_black_CO.paa";
			plugType = 2;
			cordLength = 5;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walk
				{
					soundSet = "powergenerator_movement_walk_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpPowerGenerator_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpPowerGenerator_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "powergenerator_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
