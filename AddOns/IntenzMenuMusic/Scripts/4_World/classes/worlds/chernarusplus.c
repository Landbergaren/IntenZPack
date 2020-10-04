modded class ChernarusPlusData extends WorldData
{
	//----- weather vars
	const float RAIN_THRESHOLD = 0.6;
	const float STORM_THRESHOLD = 0.9;

	const int OVERCAST_MIN_TIME = 600;
	const int OVERCAST_MAX_TIME = 900;

	const int RAIN_TIME_MIN = 60;
	const int RAIN_TIME_MAX = 120;
	
	const int CLEAR_WEATHER = 1;
	const int CLOUDY_WEATHER = 2;
	const int BAD_WEATHER = 3;
	
	const int CLEAR_WEATHER_CHANCE = 30;
	const int BAD_WEATHER_CHANCE = 80;
		
	protected int m_clearWeatherChance = CLEAR_WEATHER_CHANCE;
	//protected int m_badCloudyChance = 80;
	protected int m_badWeatherChance = BAD_WEATHER_CHANCE;
	
	protected int m_sameWeatherCnt = 0;
	protected int m_stepValue = 5;
	protected int m_chance = 50;

	protected int m_choosenWeather = 1;
	protected int m_lastWeather = 0;

	override void Init()
	{
		super.Init();

		m_DayTemperature = 7;
		m_NightTemperature = -2;
	}
	
	override bool WeatherOnBeforeChange( EWeatherPhenomenon type, float actual, float change, float time )
	{

		float phmnValue 0;
		int phmnTime 5;
		int phmnLength 10;

		m_Weather.SetStorm( 1.0, STORM_THRESHOLD, 45 );

		m_Weather.SetRainThresholds( 0.0, 1.0, 60 );
		m_Weather.SetWindMaximumSpeed( 20 );
		m_Weather.SetWindFunctionParams( 0.1, 1.0, 20 );

		switch( type )
		{
			//-----------------------------------------------------------------------------------------------------------------------------
			case EWeatherPhenomenon.OVERCAST:

				//went something goes wrong choose some default random weather	
				phmnValue = Math.RandomFloatInclusive( 0.2, 0.7 );
				phmnTime = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
				phmnLength = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );	
			
				//----
				//calculate next weather
				m_chance = Math.RandomIntInclusive( 0, 100 );
				
				//--
				if ( m_lastWeather == CLEAR_WEATHER )
				{
					m_clearWeatherChance -= ( m_stepValue * m_sameWeatherCnt);					//decrease the chance of the same weather
				}

				if ( m_lastWeather == CLOUDY_WEATHER )
				{
					m_clearWeatherChance += ( m_stepValue * m_sameWeatherCnt);					//increase the chance of the better weather
					//m_badWeatherChance += ( m_stepValue * m_sameWeatherCnt);
				}
			
				if ( m_lastWeather == BAD_WEATHER )
				{
					m_clearWeatherChance += m_stepValue;										//increase the chance of the better weather slightly
					m_badWeatherChance += (( m_stepValue * m_sameWeatherCnt ) + m_stepValue  );	//decrease the chance of the same weather rapidly
				}
			
				//----
				if ( m_chance < m_clearWeatherChance )
				{
					m_choosenWeather = CLEAR_WEATHER;
					if ( m_lastWeather == CLEAR_WEATHER )
						m_sameWeatherCnt ++;
				}
				else if ( m_chance > m_badWeatherChance )
				{
					m_choosenWeather = BAD_WEATHER;
					if ( m_lastWeather == BAD_WEATHER )
						m_sameWeatherCnt ++;
				}
				else
				{
					m_choosenWeather = CLOUDY_WEATHER;
					if ( m_lastWeather == CLOUDY_WEATHER )
						m_sameWeatherCnt ++;
				}

				if ( m_choosenWeather != m_lastWeather )
					m_sameWeatherCnt = 0;

				m_clearWeatherChance = CLEAR_WEATHER_CHANCE;
				m_badWeatherChance = BAD_WEATHER_CHANCE;

				//----
				//set choosen weather			
				if ( m_choosenWeather == CLEAR_WEATHER  )
				{
					m_lastWeather = CLEAR_WEATHER;
					
					phmnValue = Math.RandomFloatInclusive( 0.0, 0.3 );
					phmnTime = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
					phmnLength = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
				}

				if ( m_choosenWeather == CLOUDY_WEATHER )
				{
					m_lastWeather = CLOUDY_WEATHER;

					phmnValue = Math.RandomFloatInclusive( 0.3, 0.6 );
					phmnTime = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
					phmnLength = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
				}
			
				if ( m_choosenWeather == BAD_WEATHER )
				{
					m_lastWeather = BAD_WEATHER;

					phmnValue = Math.RandomFloatInclusive( 0.6, 1.0 );
					phmnTime = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
					phmnLength = Math.RandomIntInclusive( OVERCAST_MIN_TIME, OVERCAST_MAX_TIME );
				}

				m_Weather.GetOvercast().Set( phmnValue, phmnTime, phmnLength );

				Print( "Chernarus::Weather::Overcast:: " + "( " + g_Game.GetDayTime() + " ) " + " overcast: " + actual );
				Print( "Chernarus::Weather::Overcast::Rain:: " + "( " + g_Game.GetDayTime() + " ) " + m_Weather.GetRain().GetActual() );

				return true;

			//-----------------------------------------------------------------------------------------------------------------------------
			case EWeatherPhenomenon.RAIN:

				float actualOvercast = m_Weather.GetOvercast().GetActual();

				m_chance = Math.RandomIntInclusive( 0, 100 );	
				phmnValue = 0.2;
				phmnTime = 90;
				phmnLength = 30;

				if ( actualOvercast <= RAIN_THRESHOLD )
				{
					m_Weather.GetRain().Set( 0.0, RAIN_TIME_MIN, RAIN_TIME_MAX );
					Print( "Chernarus::Weather::Rain::ForceEnd:: " + "( " + g_Game.GetDayTime() + " ) " + actual + " -> " + "0" );
					return true;
				}

				if ( actualOvercast > STORM_THRESHOLD )
				{
					phmnValue = Math.RandomFloatInclusive( 0.8, 1.0 );
					phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
					phmnLength = 0;
				
					m_Weather.GetRain().Set( phmnValue, phmnTime, phmnLength );
					Print( "Chernarus::Weather::Rain::ForceStorm:: " + "( " + g_Game.GetDayTime() + " ) " + actual + " -> " + phmnValue);
					return true;
				}

				//make a differnce in "weak rain"
				if ( actualOvercast < 0.70 )
				{
					if ( m_chance < 20 ) //30% "strong" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.2, 0.3 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 40 ) //30% "medium" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.1, 0.2 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 60 ) //20% "weak" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.0, 0.1 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else //40% no rain
					{
						phmnValue = 0;
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 120;
					}
				}
				//make a differnce in "medium rain"
				if ( actualOvercast < 0.80 )
				{
					if ( m_chance < 20 ) //20% "strong" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.4, 0.5 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 45 ) //25% "medium" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.3, 0.4 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 70 ) //25% "weak" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.2, 0.3 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else //30% no rain
					{
						phmnValue = 0;
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 120;
					}
				}
				//make a differnce in "heavy rain"
				else
				{
					if ( m_chance < 20 ) //20% "strong" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.6, 0.7 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 50 ) //30% "medium" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.5, 0.6 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else if ( m_chance < 80 ) //30% "weak" rain
					{
						phmnValue = Math.RandomFloatInclusive( 0.4, 0.5 );
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 0;
					}
					else //20% no rain
					{
						phmnValue = 0;
						phmnTime = Math.RandomInt( RAIN_TIME_MIN, RAIN_TIME_MAX );
						phmnLength = 120;
					}
				}

				m_Weather.GetRain().Set( phmnValue, phmnTime, phmnLength );

				Print( "Chernarus::Weather::Rain:: " + "( " + g_Game.GetDayTime() + " ) " + actual );
				return true;

			//-----------------------------------------------------------------------------------------------------------------------------
			case EWeatherPhenomenon.FOG:

				float fogMin = 0.0;
				float fogMax = 0.15;
				float fogTime = 1800.0;

				float fogyMorning = Math.RandomFloatInclusive( 0.0, 1.0 );
				
				m_chance = Math.RandomIntInclusive( 0, 100 );

				if ( (g_Game.GetDayTime() > 4 && g_Game.GetDayTime() < 8 ) )
				{
					if ( fogyMorning > 0.10 )
					{
						fogMin = 0.70;
						fogMax = 0.90;
						fogTime = 1800;
					}
					if ( fogyMorning > 0.25 )
					{
						fogMin = 0.50;
						fogMax = 0.70;
						fogTime = 1800;
					}
					if ( fogyMorning > 0.45 )
					{
						fogMin = 0.30;
						fogMax = 0.50;
						fogTime = 1800;
					}
					if ( fogyMorning > 0.70 )
					{
						fogMin = 0.10;
						fogMax = 0.30;
						fogTime = 1800;
					}
				}
				if ( m_Weather.GetOvercast().GetActual() < 0.2 )
				{
					fogMin = 0.0;
					fogMax = 0.08;
					fogTime = 900.0;
				}
				if ( m_Weather.GetOvercast().GetActual() < 0.4 )
				{
					if ( m_chance < 05 )
					{
						fogMin = 0.15;
						fogMax = 0.70;
						fogTime = 900.0;
					}
					else
					{
						fogMin = 0.0;
						fogMax = 0.08;
						fogTime = 900.0;
					}
				}

				m_Weather.GetFog().Set( Math.RandomFloatInclusive( fogMin, fogMax ), fogTime, 0);
				
				Print( "Chernarus::Weather::Fog:: " + "( " + g_Game.GetDayTime() + " ) " + actual );
				return true;
		}

		return false;
	}
};
