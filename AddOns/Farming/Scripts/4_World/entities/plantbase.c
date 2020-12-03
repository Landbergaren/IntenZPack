modded class PlantBase extends ItemBase
{
	// Plant states
	static const int STATE_DRY 		= 0;
	static const int STATE_GROWING 	= 1;
	static const int STATE_MATURE 	= 2;
	static const int STATE_SPOILED 	= 3;
	
	private int 	m_GrowthStagesCount; 
	private int 	m_CropsCount;
	private bool 	m_HasCrops;
	private string 	m_CropsType; 
	private float 	m_PlantMaterialMultiplier; 
	
	private int 	m_PlantState;
	private int 	m_PlantStateIndex;
	private float 	m_CurrentPlantMaterialQuantity;
	
	private bool 	m_IsInfested;
	private float 	m_SprayQuantity;
	
	int 	m_DeleteDryPlantTime; 			// For how long in seconds can an unwatered plant exist before it disappears
	int 	m_SpoiledRemoveTime;			// For how long in seconds a spoiled plant will exist
	int 	m_FullMaturityTime;				// How much time needs plant to be full grown in seconds
	int 	m_SpoilAfterFullMaturityTime;	// How long in seconds it takes for plant to be spoiled after it is full grown
	int 	m_StateChangeTime;				// For how long in seconds will plant stay in one state before its going to next state
	
	private GardenBase m_GardenBase = NULL;

	private PluginHorticulture m_ModuleHorticulture;
	
	ref Environment		m_Environment;

	
	void PlantBase()
	{
		m_ModuleHorticulture = PluginHorticulture.Cast( GetPlugin( PluginHorticulture ) );
		
		m_SprayUsage = 5;
		m_DeleteDryPlantTime = (60 * 10) + Math.RandomInt(0, 60 * 2);
		m_SpoiledRemoveTime = (60 * 20) + Math.RandomInt(0, 60 * 5);
		
		m_InfestationChance = 0.0; // Temporarily disabled until its fixed. Infestation is not visualy persistent over server restarts and m_SpoiledRemoveTimer crashes when it's meant to delete the plant.
		
		string plant_type = this.GetType();
		m_GrowthStagesCount = GetGame().ConfigGetInt( "cfgVehicles " + plant_type + " Horticulture GrowthStagesCount" );
		m_CropsCount = GetGame().ConfigGetInt( "cfgVehicles " + plant_type + " Horticulture CropsCount" );
		GetGame().ConfigGetText( "cfgVehicles " + plant_type + " Horticulture CropsType", m_CropsType );

		m_PlantStateIndex = -1;
		m_CurrentPlantMaterialQuantity = 0;
		m_IsInfested = false;
		m_SprayQuantity = 0.0;
		m_HasCrops = true;
		
		
		RegisterNetSyncVariableBool("m_HasCrops");
		RegisterNetSyncVariableInt("m_PlantState");
		RegisterNetSyncVariableInt("m_PlantStateIndex");
	}

	void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
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

	bool IsGrowing()	//Stop Plant growing beneath a certain temperature
	{
		if ( m_Environment.GetTemperature() < 8 )
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
