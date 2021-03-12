modded class PlayerBase 
{
	vector previousSpawn;
	int previousSpawnTimestamp;
	bool hasBeenKilledByPlayer; 
	
	override void EEKilled( Object killer ) 
	{
		super.EEKilled(killer);
		Man player = Man.Cast(killer);		
		if (player) 
		{
			hasBeenKilledByPlayer = true;
			Print("[Prevent Suicide] Player was killed by another player");
		}
	}
};
