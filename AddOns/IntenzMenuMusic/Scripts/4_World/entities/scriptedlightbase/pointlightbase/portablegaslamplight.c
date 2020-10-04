modded class PortableGasLampLight extends PointLightBase
{
	private static float m_DefaultRadius = 25;		// 15
	private static float m_DefaultBrightness = 5;	//  5
	
	void PortableGasLampLight()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo( m_TorchRadius );
		SetBrightnessTo(m_TorchBrightness);
		SetCastShadow(true);
		FadeIn(0.5);
		SetFadeOutTime(0.1);
		SetDiffuseColor(1.0, 0.7, 0.5);
		SetAmbientColor(1.0, 0.7, 0.5);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.75);
		SetDancingShadowsMovementSpeed(0.005);
		SetDancingShadowsAmplitude(0.003);
	}
	
	/*override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		
	}*/
};
