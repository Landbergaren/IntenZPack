modded class MissionMainMenu extends MissionBase
{
	override void OnKeyRelease(int key)
	{
		super.OnKeyRelease(key);
		
		if ( key == KeyCode.KC_N )
		{
			Print("[INTENZ] N pressed, changing menu music.");

			PlayNextMusic(m_MenuMusic);
		}
	}
	
	override void OnMissionFinish()
	{
	 	if (m_MenuMusic != null)
		{
			// Remove listeners
			Managed data = m_MenuMusic.GetUserData();
			AbstractWaveEvents events;
			Class.CastTo(events, data);
			events.Event_OnSoundWaveEnded.Clear();

			m_MenuMusic.Stop();	
			m_MenuMusic = null;
		}
		super.OnMissionFinish();
	}
	
	override void PlayMusic()
	{
		Print("[INTENZ] Play Music (override)");
		
		if ( !m_MenuMusic )
		{
			Print("[INTENZ] Creating menu music object...");

			ref SoundParams soundParams			= new SoundParams( "IntenzMenuMusic_SoundSet");
			ref SoundObjectBuilder soundBuilder	= new SoundObjectBuilder( soundParams );
			ref SoundObject soundObject			= soundBuilder.BuildSoundObject();
			
			soundObject.SetKind( WaveKind.WAVEMUSIC );
			
			m_MenuMusic = GetGame().GetSoundScene().Play2D(soundObject, soundBuilder);
			m_MenuMusic.Loop( false );
			
			//m_MenuMusic.SetFadeInFactor(0);
			//m_MenuMusic.SetFadeOutFactor(0);
			
			Managed data = m_MenuMusic.GetUserData();
			AbstractWaveEvents events;
			Class.CastTo(events, data);
			
			// Listen for end of audio playback
			events.Event_OnSoundWaveEnded.Insert(PlayNextMusic);

			Print("[INTENZ] ...Playing menu music object: " + m_MenuMusic.ToString());
			
			m_MenuMusic.Play();
		}
	}
	
	void PlayNextMusic(AbstractWave menuMusicObject) 
	{
		Print("[INTENZ] Music ended: " + menuMusicObject.ToString());

		if (m_MenuMusic != null)
		{
			// Remove listeners
			Managed data = m_MenuMusic.GetUserData();
			AbstractWaveEvents events;
			Class.CastTo(events, data);
			events.Event_OnSoundWaveEnded.Clear();

			m_MenuMusic.Stop();	
			m_MenuMusic = null;
		}
		// I hope that GC is a thing in this engine..
		PlayMusic();
	}
}
