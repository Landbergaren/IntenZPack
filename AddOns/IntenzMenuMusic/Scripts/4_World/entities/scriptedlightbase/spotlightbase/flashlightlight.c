modded class FlashlightLight extends SpotLightBase
{
	private static float m_DefaultRadius = 35;		//  30
	private static float m_DefaultBrightness = 6;	//   6
	private static float m_DefaultAngle = 125;		// 120
	
	void FlashlightLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		EnableSpecular(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.15);
		SetAmbientColor(1.0, 0.85, 0.75);
		SetDiffuseColor(1.0, 0.85, 0.75);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
	}
};
