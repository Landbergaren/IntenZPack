/*modded class Environment
{	
	//! Checks if the Umbrella in hand is open 
	bool IsUmbrellaOpen()
	{
		Umbrella_ColorBase umbrella = IsHoldingUmbrella();
		
		if(umbrella && umbrella.IsOpen() )
		{
			return true;
		}
			
		return false;
	}
	
	//! Checks if the Player is holding an Umbrella
	Umbrella_ColorBase IsHoldingUmbrella()
	{
		PlayerBase player = GetGame().GetPlayer();
		
		if (player)
		{
			Umbrella_ColorBase umbrella;
			umbrella = player.GetHumanInventory().GetEntityInHands();
			
			if(umbrella && umbrella.IsInherited(Umbrella_ColorBase))
			{
				return umbrella;
			}
		}
		
		return null;
	}
	
	//! Calculats wet/drying delta based on player's location and weather
	override protected float GetWetDelta()
	{
		float wet_delta = 0;
		if ( IsWaterContact() )
		{
			//! player is getting wet by movement/swimming in water (+differentiate wet_delta by water level)
			if (m_WaterLevel >= WATER_LEVEL_HIGH)
			{
				wet_delta = 1;
			}
			else if (m_WaterLevel >= WATER_LEVEL_MID && m_WaterLevel < WATER_LEVEL_HIGH)
			{
				wet_delta = 0.66;
			}
			else if (m_WaterLevel >= WATER_LEVEL_LOW && m_WaterLevel < WATER_LEVEL_MID)
			{
				wet_delta = 0.66;
			}
			else if (m_WaterLevel >= WATER_LEVEL_NONE && m_WaterLevel < WATER_LEVEL_LOW)
			{
				wet_delta = 0.33;
			}
		}
		else if ( IsRaining() && !IsInsideBuilding() && !IsUnderRoof() && !IsUmbrellaOpen() )
		{
			//! player is getting wet from rain
			wet_delta = GameConstants.ENVIRO_WET_INCREMENT * GameConstants.ENVIRO_TICKS_TO_WETNESS_CALCULATION * ( 4 * GameConstants.ENVIRO_WIND_EFFECT * m_Wind ) * ( m_Rain );
		}
		else
		{
			//! player is drying
			float sun_effect = ( GameConstants.ENVIRO_SUN_INCREMENT * m_DayOrNight * ( 1 - m_Fog ) ) * ( 1 - ( m_Clouds * GameConstants.ENVIRO_CLOUD_DRY_EFFECT ) );
			float temp_effect = m_PlayerHeat + Math.Max( GetEnvironmentTemperature(), 0.0 );
			//! Coef should be higher than 0 (Sqrt is none for x < 0)
			if ( temp_effect <= 0 ) { temp_effect = 1; }
	
			wet_delta = -( GameConstants.ENVIRO_DRY_INCREMENT * ( temp_effect + sun_effect ) );
			if ( !IsInsideBuilding() )
				wet_delta *= ( 1 + ( GameConstants.ENVIRO_WIND_EFFECT * m_Wind ) );
		}
		
		return wet_delta;
	}
}
