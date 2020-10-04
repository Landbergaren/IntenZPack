modded class PistollightLight extends SpotLightBase
{
	private static float m_DefaultRadius = 35;		// 30
	private static float m_DefaultBrightness = 6;	//  5.75
	private static float m_DefaultAngle = 50;		// 50
	
	void PistollightLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.15);
		SetAmbientColor(1.0, 0.9, 0.8);
		SetDiffuseColor(1.0, 0.9, 0.8);
		//SetDisableShadowsWithinRadius(0.25);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}
};
