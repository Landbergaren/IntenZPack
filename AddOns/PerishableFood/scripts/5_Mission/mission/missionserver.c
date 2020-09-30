modded class MissionServer
{
	int m_LastServerTime = 0;

	private static const string SETTINGS_FILE = "$profile:PerishableFood.json";

	override void TickScheduler(float timeslice)
	{
		super.TickScheduler(timeslice);
		
		int time = GetGame().GetTime() / 1000;
		
		if (time - m_LastServerTime > g_PFTimeUpdate) // secs
		{
			m_LastServerTime = time;
			g_ElapsedTime = time;
		}
	}

	override void OnInit()
	{
		super.OnInit();

		if (!FileExist(SETTINGS_FILE))
		{
			PFGlobals.Get().RawFoodDrieTimeSecs = 2 * 60 * 60;
			PFGlobals.Get().RawFoodDecayTimeSecs = 4 * 60 * 60;
			PFGlobals.Get().CookedFoodDecayTimeSecs = 8 * 60 * 60;
			PFGlobals.Get().SaltConservationMultiplier = 45;
			PFGlobals.Get().FridgeConservationMultiplier = 60;
			PFGlobals.Get().SaltConsumption = 0.0033;
			PFGlobals.Get().FridgeClasses.Insert("PF_Fridge");
			PFGlobals.Get().FridgeClasses.Insert("AnotherFridgeClass");

			JsonFileLoader<PFSettings>.JsonSaveFile(SETTINGS_FILE, PFGlobals.Get());
		}

		JsonFileLoader<PFSettings>.JsonLoadFile(SETTINGS_FILE, PFGlobals.Get());

		if (PFGlobals.Get().RawFoodDrieTimeSecs < g_PFTimeUpdate || PFGlobals.Get().RawFoodDecayTimeSecs < g_PFTimeUpdate || PFGlobals.Get().CookedFoodDecayTimeSecs < g_PFTimeUpdate)
		{
			g_PFTimeUpdate = 5;
		}
	}
}
