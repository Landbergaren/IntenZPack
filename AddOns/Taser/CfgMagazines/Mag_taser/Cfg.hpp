class Mag_taser: Mag_FNX45_15Rnd
{
	scope = 2;
	displayName = "X2 Twin Taser Cartridge";
	descriptionShort = "Cartridge for the X2 Taser with two projectile charges";
	model = "\DZ\weapons\attachments\magazine\shockpistol_cartridge.p3d";
	weight = 143;
	itemSize[] = {2,1};
	count = 2;
	ammo = "Bullet_Taser";
	ammoItems[] = {"Ammo_Taser"};
	tracersEvery = 0;
	mass = 10;
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLabels[] = {1,0.7,0.5,0.3,0};
				healthLevels[] = 
				{
					{1,{"DZ\weapons\pistols\fnx45\data\herstal45.rvmat"}},
					{0.5,{"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat"}},
					{0,{"DZ\weapons\pistols\fnx45\data\herstal45_destruct.rvmat"}}
				};
			};
		};
	};
};
