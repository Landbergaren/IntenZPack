modded class ModItemRegisterCallbacks
{
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterTwoHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("SoftLeather", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/tanned_leather.anm");
		pType.AddItemInHandsProfileIK("DriedLeather", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/tanned_leather.anm");
	};
	
//	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
//	{
//		super.RegisterHeavy(pType, pBehavior);
//		pType.AddItemInHandsProfileIK("Msp_Kit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_large.anm");
//	};
};
