modded class UniversallightLight extends SpotLightBase
{
	private static float m_DefaultRadius = 45;		// 40
	private static float m_DefaultBrightness = 7;	//  6.75
	private static float m_DefaultAngle = 75;		// 50
	
	void UniversallightLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.15);
		SetAmbientColor(1.0, 0.9, 0.8);
		SetDiffuseColor(1.0, 0.9, 0.8);
		//SetDisableShadowsWithinRadius(1);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}
};
