modded class PlayerBase
{
	override void Init()
	{
		super.Init();

		DayzPlayerItemBehaviorCfg twoHanded = new DayzPlayerItemBehaviorCfg;
		twoHanded.SetTwoHanded();

		DayzPlayerItemBehaviorCfg toolsOneHanded = new DayzPlayerItemBehaviorCfg;
		toolsOneHanded.SetToolsOneHanded();

		DayzPlayerItemBehaviorCfg heavyItemBehaviour = new DayzPlayerItemBehaviorCfg;
		heavyItemBehaviour.SetHeavyItems();

		GetDayZPlayerType().AddItemInHandsProfileIK("LargePot", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", twoHanded, "dz/anims/anm/player/ik/vehicles/BatteryTruck.anm");
		GetDayZPlayerType().AddItemInHandsProfileIK("SaltStone", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/compass.anm");
		GetDayZPlayerType().AddItemInHandsProfileIK("SaltPack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/rice.anm");
		GetDayZPlayerType().AddItemInHandsProfileIK("PF_Fridge", "dz/anims/workspaces/player/player_main/props/player_main_heavy_generator.asi", heavyItemBehaviour, "dz/anims/anm/player/ik/heavy/generator.anm");
	}
}
