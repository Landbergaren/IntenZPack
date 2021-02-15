modded class Headtorch_ColorBase extends Clothing
{
	HeadtorchLight m_Light;
	
	static int		REFLECTOR_ID = 4;
	static int		GLASS_ID = 5;
	
	static string 	LIGHT_ON_GLASS 			= "dz\\characters\\headgear\\data\\HeadTorchGlass_on.rvmat";
	static string 	LIGHT_OFF_GLASS 		= "dz\\characters\\headgear\\data\\HeadTorchGlass.rvmat";
	static string 	LIGHT_ON_REFLECTOR 		= "dz\\characters\\headgear\\data\\HeadTorch_ON.rvmat";
	static string 	LIGHT_OFF_REFLECTOR 	= "dz\\characters\\headgear\\data\\HeadTorch.rvmat";
	
	static string 	LIGHT_ON_GLASS_RED		= "dz\\characters\\headgear\\data\\HeadTorchGlass_on_red.rvmat";
	static string 	LIGHT_ON_REFLECTOR_RED	= "dz\\characters\\headgear\\data\\HeadTorch_ON_red.rvmat";

	override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			CreateHeadtorchLight();
		}
		
		if ( IsInherited( Headtorch_Black ) )
		{
			SetObjectMaterial(GLASS_ID, LIGHT_ON_GLASS_RED);
			SetObjectMaterial(REFLECTOR_ID, LIGHT_ON_REFLECTOR_RED);
		}
		else
		{
			SetObjectMaterial(GLASS_ID, LIGHT_ON_GLASS);
			SetObjectMaterial(REFLECTOR_ID, LIGHT_ON_REFLECTOR);
		}
	}

	override void OnWork( float consumed_energy )
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			Battery9V battery = Battery9V.Cast( GetCompEM().GetEnergySource() );
			
			if (battery  &&  m_Light)
			{
				float efficiency = battery.GetEfficiency0To1();
				
				if ( IsInherited( Headtorch_Black ) )
				{
					if ( efficiency < 1 )
					{
						m_Light.SetIntensityRed( efficiency, GetCompEM().GetUpdateInterval() );
					}
					else
					{
						m_Light.SetIntensityRed( 1, 0 );
					}
				}
				else
				{
					if ( efficiency < 1 )
					{
						m_Light.SetIntensity( efficiency, GetCompEM().GetUpdateInterval() );
					}
					else
					{
						m_Light.SetIntensity( 1, 0 );
					}
				}
			}
		}
	}
}

modded class Headtorch_Black : Headtorch_ColorBase 
{
	override void OnLightCreated()
	{
		m_Light.SetColorToRed();
	}
}
