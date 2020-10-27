class CfgPatches
{
	class IntenZ_Configs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
			
			"DZ_Characters",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Characters_Headgear",
			"DZ_Gear_Tools",
			"DZ_Gear_Navigation",
			"DZ_Gear_Containers",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Supports",
			"DZ_Weapons_Explosives",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Launchers",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Shotguns",
			"DZ_Pistols",
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Sounds_Effects",
			"DZ_Worlds_Chernarusplus_World"
		};
	};
};

class CfgMods
{
	class IntenZ_Configs
	{
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"IntenZ\Configs\Scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"IntenZ\Configs\Scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"IntenZ\Configs\Scripts\5_mission"};
			};
		};
	};
};

#include "CfgAmmo\Cfg.hpp"
#include "CfgMagazines\Cfg.hpp"
#include "CfgVehicles\Cfg.hpp"
#include "CfgWeapons\Cfg.hpp"
#include "CfgSoundShaders\Cfg.hpp"
#include "CfgWorlds\Cfg.hpp"
