class Taser_Base: FNX45
{
	scope = 0;
	displayName = "Taser X2 Defender";
	descriptionShort = "Police shock pistol. Needs battery catrige to shoot.";
	model = "\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
	attachments[] = {};
	itemSize[] = {4,2};
	hiddenSelections[] = {"camo"};
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = 
				{
					{1.0,{"IntenZ\Taser\Assets\shockpistol_main.rvmat"}},
					{0.7,{"IntenZ\Taser\Assets\shockpistol_main.rvmat"}},
					{0.5,{"IntenZ\Taser\Assets\shockpistol_main_damage.rvmat"}},
					{0.3,{"IntenZ\Taser\Assets\shockpistol_main_damage.rvmat"}},
					{0.0,{"IntenZ\Taser\Assets\shockpistol_main_destruct.rvmat"}}
				};
			};
		};
	};
	weight = 550;
	PPDOFProperties[] = {};
	chamberSize = 1;
	class NoiseShoot
	{
		strength = 5;
		type = "shot";
	};
	class OpticsInfo: OpticsInfoPistol
	{
		memoryPointCamera = "eye";
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
	};
	magazines[] = {"Mag_Taser"};
	chamberableFrom[] = {"Ammo_Taser"};
	drySound[] = {"dz\sounds\weapons\nonlethal\shockpistol\Shockpistol_dry",0.5,1,20};
	reloadMagazineSound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_reload",0.8,1,20};
	modes[] = {"SemiAuto"};
	class SemiAuto: Mode_SemiAuto
	{
		soundSetShot[] = 
		{
			"Shockpistol_Shot_SoundSet",
			"Shockpistol_Tail_SoundSet",
			"Shockpistol_InteriorTail_SoundSet"
		};
		soundSetShotExt[] = 
		{
			{
				"Shockpistol_Shot_SoundSet",
				"Shockpistol_Tail_SoundSet",
				"Shockpistol_InteriorTail_SoundSet"
			}
		};
		reloadTime = 0.086;
		recoil = "recoil_fnx";
		recoilProne = "recoil_fnx_prone";
		dispersion = 0.006;
		magazineSlot = "magazine";
	};
};
class Taser_Yellow: Taser_Base
{
	scope = 2;
	hiddenSelectionsTextures[] = {"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_yel_co.paa"};
};
class Taser_Black: Taser_Base
{
	scope = 2;
	hiddenSelectionsTextures[] = {"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_bk_co.paa"};
};
