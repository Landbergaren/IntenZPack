modded class HeadtorchLight extends SpotLightBase
{
	private static float m_Radius_White 	= 24;	//  25
	private static float m_Brightness_White =  6;	//   6
	private static float m_Radius_Red 		= 16;
	private static float m_Brightness_Red 	=  3;
	
	private static float m_DefaultAngle 	=100;	// 130
	
	void HeadtorchLight()
	{
		SetVisibleDuringDaylight(true);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetFadeOutTime(0.1);
		FadeIn(0.06);
	}
	
	void SetColorToWhite()
	{
		SetAmbientColor(0.8, 0.9, 1.0);
		SetDiffuseColor(0.8, 0.9, 1.0);
	}
	
	void SetColorToRed()
	{
		SetAmbientColor(0.64, 0.09, 0.1);
		SetDiffuseColor(0.64, 0.09, 0.1);
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
