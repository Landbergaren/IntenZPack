modded class WorldLighting
{
	string lighting_default = "dz\\data\\lighting\\lighting_default.txt";
	string lighting_darknight = "dz\\data\\lighting\\lighting_darknight.txt";
	protected string lighting_Intenz = "Intenz\\Night\\CfgWorlds\\DefaultWorld\\LightingNew\\Cfg.hpp";
	
	void WorldLighting() {}
	void ~WorldLighting() {}
		
	// sets global lighting config by given value (sent from server, defined in server config)	
	override void SetGlobalLighting( int lightingID )
	{
		switch ( lightingID )
		{
			case 0:
				GetGame().GetWorld().LoadNewLightingCfg( lighting_Intenz );
				break;
				
			case 1:
				GetGame().GetWorld().LoadNewLightingCfg( lighting_darknight );
				break;
				
			case 2:
				GetGame().GetWorld().LoadNewLightingCfg( lighting_default );
				break;
				
			default:
				Print( "Unknown global lighting ID received from the server." );
				break;
		}
	}
}
