modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Umbrella_Closed", "dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi", pBehavior, "dz/anims/anm/player/ik/gear/torch.anm");
		pType.AddItemInHandsProfileIK("Umbrella_Opened", "dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi", pBehavior, "dz/anims/anm/player/ik/gear/torch.anm");
		pType.AddItemInHandsProfileIK("Umbrella_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_1h_torch.asi", pBehavior, "dz/anims/anm/player/ik/gear/torch.anm");
	};
};
