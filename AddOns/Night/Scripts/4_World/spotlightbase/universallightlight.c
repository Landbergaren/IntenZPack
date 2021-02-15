modded class UniversallightLight extends SpotLightBase
{
	private static float m_Radius_White		= 45;	// 40
	private static float m_Brightness_White =  7;	//  6.75
	private static float m_Radius_Red 		= 30;
	private static float m_Brightness_Red 	=  3.5;
	
	private static float m_DefaultAngle 	= 75;	// 50
	
	void UniversallightLight()
	{
		SetVisibleDuringDaylight(true);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetFadeOutTime(0.15);
	//	SetDisableShadowsWithinRadius(1);
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
