modded class PlayerConstants
{    
    //----------------------------------------------------------
	//					STAT LEVELS START
	//----------------------------------------------------------
	static const float SL_HEALTH_CRITICAL = 15;
	static const float SL_HEALTH_LOW = 30;
	static const float SL_HEALTH_NORMAL = 50;
	static const float SL_HEALTH_HIGH = 80;	
	
	static const float SL_TOXICITY_CRITICAL = 20;
	static const float SL_TOXICITY_LOW = 40;
	static const float SL_TOXICITY_NORMAL = 60;
	static const float SL_TOXICITY_HIGH = 80;

	static const float SL_BLOOD_CRITICAL = 3000;
	static const float SL_BLOOD_LOW = 3500;
	static const float SL_BLOOD_NORMAL = 4000;
	static const float SL_BLOOD_HIGH = 4500;
	
	static const float SL_ENERGY_CRITICAL = 0;
	static const float SL_ENERGY_LOW = 500;
	static const float SL_ENERGY_NORMAL = 3000;
	static const float SL_ENERGY_HIGH = 9000;
	
	static const float SL_WATER_CRITICAL = 0;   //below is flashing red and lose health two arrow
	static const float SL_WATER_LOW = 500;      //below is red and lose health one arrow
	static const float SL_WATER_NORMAL = 1500;   //below is yellow
	static const float SL_WATER_HIGH = 4500;    //below is quarter from full, above is full

	static const float LOW_WATER_THRESHOLD =    PlayerConstants.SL_WATER_LOW;	//threshold from which water affects health
	static const float LOW_ENERGY_THRESHOLD =   PlayerConstants.SL_ENERGY_LOW;	//threshold from which energy affects health;	
};
