modded class FlashlightLight extends SpotLightBase
{
	private static float m_Radius_White 	= 36;	//  30
	private static float m_Brightness_White =  6;	//   6
	private static float m_Radius_Red 		= 24;
	private static float m_Brightness_Red 	=  3;
	
	private static float m_DefaultAngle 	=100;	// 120
	
	void FlashlightLight()
	{
		SetVisibleDuringDaylight(true);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetFadeOutTime(0.15);
		EnableSpecular(true);
	}
	
	void SetColorToWhite()
	{
		SetAmbientColor(1.0, 0.8, 0.5);
		SetDiffuseColor(1.0, 0.8, 0.5);
	}
	
	void SetColorToRed()
	{
		SetAmbientColor(0.8, 0.08, 0.05);
		SetDiffuseColor(0.8, 0.08, 0.05);
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
