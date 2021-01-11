class ItemSuppressor: Inventory_Base {};

class Mosin_Compensator: ItemSuppressor
{
	displayName="$STR_iz_cfgVehicles_Mosin_Compensator0";
	descriptionShort="$STR_iz_cfgVehicles_Mosin_Compensator1";
};
class MP5_Compensator: ItemSuppressor
{
	displayName="$STR_iz_cfgVehicles_MP5_Compensator0";
	descriptionShort="$STR_iz_cfgVehicles_MP5_Compensator1";
};
class M4_Suppressor: ItemSuppressor
{
	repairableWithKits[]={0};
	noiseShootModifier=-0.95;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=6;
			};
		};
	};
};
class AK_Suppressor: ItemSuppressor
{
	repairableWithKits[]={0};
	noiseShootModifier=-0.95;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=6;
			};
		};
	};
};
class PistolSuppressor: ItemSuppressor
{
	repairableWithKits[]={0};
	noiseShootModifier=-0.95;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=6;
			};
		};
	};
};
