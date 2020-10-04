modded class WorldLighting
{
	protected string lighting_Intenz = "Intenz/Configs/CfgWorlds/DefaultWorld/CAWorld/LightingNew/Cfg.txt";
	
	override void SetGlobalLighting( int lightingID )
	{
		switch ( lightingID )
		{
			case 3:
				GetGame().GetWorld().LoadNewLightingCfg( lighting_Intenz );
				break;
		}
	}
};
