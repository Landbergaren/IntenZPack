modded class SpotlightLight extends SpotLightBase
{
	private static float m_DefaultRadius = 90;		//  60
	private static float m_DefaultBrightness = 20;	//  20
	private static float m_DefaultAngle = 140;		// 140
	
	void SpotlightLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(m_DefaultAngle);
		SetCastShadow(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.3);
		FadeIn(0.2);
		SetAmbientColor(0.8, 0.9, 1.0);
		SetDiffuseColor(0.8, 0.9, 1.0);
	}
};
