modded class FireplaceLight extends PointLightBase
{
	private static float m_DefaultRadius = 50;		// 25
	private static float m_DefaultBrightness = 4.75;//  4.75
	
	void FireplaceLight()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo( m_FireplaceRadius );
		SetBrightnessTo(m_FireplaceBrightness);
		SetCastShadow(true);
		SetFadeOutTime(5);
		SetDiffuseColor(1.0, 0.5, 0.3);
		SetAmbientColor(1.0, 0.5, 0.3);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.9);
		SetExteriorMode();
	}
	
	// Use this mode when the light is in tight space like barrel, chimney or improvsed oven
	void SetInteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.05);
		SetDancingShadowsAmplitude(0.05);
	}
	
	// Use this mode when fireplace is on the ground with plenty of space for the light to wiggle around
	void SetExteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.25);
		SetDancingShadowsAmplitude(0.10);
	}
	
	/*override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		
	}*/
};
