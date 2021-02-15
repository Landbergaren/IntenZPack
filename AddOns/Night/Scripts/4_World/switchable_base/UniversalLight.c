modded class UniversalLight extends Switchable_Base
{
	UniversallightLight 	m_Light;
	
	static int		REFLECTOR_ID = 1;
	static int		GLASS_ID = 2;
	
	static string	LIGHT_ON_GLASS 			= "dz\\gear\\tools\\data\\flashlight_glass_on.rvmat";
	static string	LIGHT_OFF_GLASS 		= "dz\\gear\\tools\\data\\flashlight_glass.rvmat";
	static string	LIGHT_ON_REFLECTOR 		= "dz\\weapons\\attachments\\data\\m4_flashlight_on.rvmat";
	static string	LIGHT_OFF_REFLECTOR 	= "dz\\weapons\\attachments\\data\\m4_flashlight.rvmat";
	
	static string 	LIGHT_ON_GLASS_RED		= "dz\\characters\\headgear\\data\\HeadTorchGlass_on_red.rvmat";
	static string 	LIGHT_ON_REFLECTOR_RED	= "dz\\characters\\headgear\\data\\HeadTorch_ON_red.rvmat";

	override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // Client side
		{
			CreateUniversallightLight();
			m_Light.AttachOnMemoryPoint(this, "beamStart", "beamEnd");
		}
		
		if ( IsInherited( UniversalLight_Red ) )
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
				
				if ( IsInherited( UniversalLight_Red ) )
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
	
	void OnLightCreated()
	{
		m_Light.SetColorToWhite();
	}
	
	void CreateUniversallightLight()
	{
		if (!m_Light)
			m_Light = UniversallightLight.Cast(  ScriptedLightBase.CreateLight( UniversallightLight, "0 0 0", 0.08)  );
		
		OnLightCreated();
	}
}

class UniversalLight_Red: UniversalLight
{
	override void OnLightCreated()
	{
		m_Light.SetColorToRed();
	}
}
