modded class PlantBase extends ItemBase
{
	// Plant states
	static const int STATE_DRY 		= 0;
	static const int STATE_GROWING 	= 1;
	static const int STATE_MATURE 	= 2;
	static const int STATE_SPOILED 	= 3;
	
	private int 	m_GrowthStagesCount; 
	private int 	m_CropsCount;
	private float 	m_PlantMaterialMultiplier; 
	
	int 	m_DeleteDryPlantTime; 			// For how long in seconds can an unwatered plant exist before it disappears
	int 	m_FullMaturityTime;				// How much time needs plant to be full grown in seconds
	int 	m_SpoilAfterFullMaturityTime;	// How long in seconds it takes for plant to be spoiled after it is full grown
	int 	m_StateChangeTime;				// For how long in seconds will plant stay in one state before its going to next state
	
	private GardenBase m_GardenBase = NULL;
	
	float m_Temperature;

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		m_GardenBase = garden_base;
		
		float divided = (float) ((60 * 60 * 2) + Math.RandomInt(0, 60 * 15)) / fertility;
		m_FullMaturityTime = divided;
		
		divided = (float)((60 * 30) + Math.RandomInt(0, 60 * 30)) * fertility;
		m_SpoilAfterFullMaturityTime = divided;

		divided = (float)((float)m_FullMaturityTime / ((float)m_GrowthStagesCount - 2.0));
		m_StateChangeTime = divided;

		float count = m_CropsCount * fertility * harvesting_efficiency;
		m_CropsCount = (int)Math.Ceil( count );

		m_PlantMaterialMultiplier = 0.1 * harvesting_efficiency;
		
		float rain_intensity = GetGame().GetWeather().GetRain().GetActual();
		if ( rain_intensity > 0.0 )
		{
			CheckWater();
		}
		else
		{
			CheckWater();
			
			if ( NeedsWater() )
			{
				SetPlantState(STATE_DRY);
				
				if (GetGame().IsServer())
				{
					m_DeleteDryPlantTimer = new Timer( CALL_CATEGORY_SYSTEM );
					m_DeleteDryPlantTimer.Run( m_DeleteDryPlantTime, this, "DeleteDryPlantTick", NULL, false );
				}
			}
		}
	}

	override bool IsGrowing()	//Stop Plant growing beneath a certain temperature
	{
		m_Temperature = GetGame().GetMission().GetWorldData().GetBaseEnvTemperature();
		
		if ( m_Temperature < 8 )
		{
			return false;
		}		
		if ( GetPlantState() == STATE_GROWING )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
