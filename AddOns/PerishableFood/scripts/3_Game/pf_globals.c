int g_ElapsedTime = 0; // server running time in seconds
int g_PFTimeUpdate = 10 * 60; // in seconds

class PFSettings: Managed
{
	int RawFoodDrieTimeSecs;
	int RawFoodDecayTimeSecs;
	int CookedFoodDecayTimeSecs;
	int SaltConservationMultiplier;
	int FridgeConservationMultiplier;
	float SaltConsumption;

	ref array<string> FridgeClasses = NULL;

	void PFSettings()
	{
		FridgeClasses = new array<string>;
	}
}

class PFGlobals
{
	private static ref PFSettings m_Globals = NULL;
	
	static PFSettings Get()
	{
		if (m_Globals == NULL)
		{
			m_Globals = new PFSettings;
		}
		return m_Globals;
	}
}
