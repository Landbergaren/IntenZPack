modded class PistollightLight extends SpotLightBase
{
	private static float m_Radius_White 	= 36;	// 30
	private static float m_Brightness_White =  6;	//  5.75
	private static float m_Radius_Red 		= 24;
	private static float m_Brightness_Red 	=  3;
	
	private static float m_DefaultAngle 	= 50;	// 50
	
	void PistollightLight()
	{
		SetVisibleDuringDaylight(true);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetFadeOutTime(0.15);
	//	SetDisableShadowsWithinRadius(0.25);
	}
	
	void SetColorToWhite()
	{
		SetAmbientColor(1.0, 0.9, 0.8);
		SetDiffuseColor(1.0, 0.9, 0.8);
	}
	
	void SetColorToRed()
	{
		SetAmbientColor(0.9, 0.09, 0.08);
		SetDiffuseColor(0.9, 0.09, 0.08);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_Brightness_White * coef, time);
		FadeRadiusTo(m_Radius_White * coef, time);
	}
	
	void SetIntensityRed( float coef, float time )
	{
		FadeBrightnessTo(m_Brightness_Red * coef, time);
		FadeRadiusTo(m_Radius_Red * coef, time);
	}
}
