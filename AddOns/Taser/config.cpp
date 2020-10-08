class CfgPatches
{
	class IntenZ_Taser
	{
		units[] = {};
		weapons[] = {"Taser_Yellow","Taser_Black"};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Sounds_Weapons",
			"DZ_Nonlethal_Shockpistol",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
		magazines[] = 
		{
			"Mag_taser",
			"Ammo_taser"
		};
		ammo[] = 
		{
			"Bullet_Taser",
			"Bullet_Taser",
			"Bullet_Taser"
		};
	};
};

class Mode_SemiAuto;
class OpticsInfoPistol;

#include "CfgWeapons\Cfg.hpp"
#include "CfgRecoils\Cfg.hpp"
#include "CfgMagazines\Cfg.hpp"
#include "CfgNonAIVehicles\Cfg.hpp"
#include "CfgAmmoTypes\Cfg.hpp"
#include "CfgAmmo\Cfg.hpp"
