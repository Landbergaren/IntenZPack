modded class LoadingScreen 
{
	ref TStringArray loadingscreens = 
	{
		"IntenZ/Loadingscreens/Assets/01.edds",
		"IntenZ/Loadingscreens/Assets/02.edds",
		"IntenZ/Loadingscreens/Assets/03.edds",
		"IntenZ/Loadingscreens/Assets/04.edds",
		"IntenZ/Loadingscreens/Assets/05.edds",
		"IntenZ/Loadingscreens/Assets/06.edds",
		"IntenZ/Loadingscreens/Assets/07.edds",
		"IntenZ/Loadingscreens/Assets/08.edds",
		"IntenZ/Loadingscreens/Assets/09.edds",
		"IntenZ/Loadingscreens/Assets/10.edds",
		"IntenZ/Loadingscreens/Assets/11.edds",
		"IntenZ/Loadingscreens/Assets/12.edds"
	};
	
	void LoadingScreen(DayZGame game) 
	{
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		Class.CastTo(m_ImageWidgetBackground, m_WidgetRoot.FindAnyWidget("ImageBackground"));
		
		m_ImageLogoMid.LoadImageFile( 0, "set:IntenZ_gui image:IntenZ_Logo" );
		m_ImageLogoCorner.LoadImageFile( 0, "set:IntenZ_gui image:IntenZ_Logo" );
		
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(true);
		m_ModdedWarning.Show(false);
		
		m_ImageBackground.LoadMaskTexture("");
		ProgressAsync.SetUserData(m_ImageBackground);
	}
	
	override void Show() 
	{
		string lsElement = loadingscreens.GetRandomElement();
		m_ImageWidgetBackground.LoadImageFile(0, lsElement);
		
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		m_ProgressText.SetText("");		
		m_ProgressLoading.SetCurrent( 0.0 );
		m_ImageBackground.SetMaskProgress( 0.0 );
		if ( !m_WidgetRoot.IsVisible() )
		{
			if ( m_DayZGame.GetUIManager().IsDialogVisible() )
			{
				m_DayZGame.GetUIManager().HideDialog();
			}
			if ( m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU )
			{
				m_ImageWidgetBackground.Show( true );		
				m_TextWidgetStatus.Show(true);
			}
			else
			{
				m_ImageWidgetBackground.Show( true );
				m_TextWidgetStatus.Show(false);
			}
			
			m_WidgetRoot.Show( true );
			m_TextWidgetTitle.SetText( "" );
			m_TextWidgetStatus.SetText( "" );
		}
		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}	
};

modded class LoginQueueBase 
{
	ref TStringArray loadingscreens = 
	{
		"IntenZ/Loadingscreens/Assets/01.edds",
		"IntenZ/Loadingscreens/Assets/02.edds",
		"IntenZ/Loadingscreens/Assets/03.edds",
		"IntenZ/Loadingscreens/Assets/04.edds",
		"IntenZ/Loadingscreens/Assets/05.edds",
		"IntenZ/Loadingscreens/Assets/06.edds",
		"IntenZ/Loadingscreens/Assets/07.edds",
		"IntenZ/Loadingscreens/Assets/08.edds",
		"IntenZ/Loadingscreens/Assets/09.edds",
		"IntenZ/Loadingscreens/Assets/10.edds",
		"IntenZ/Loadingscreens/Assets/11.edds",
		"IntenZ/Loadingscreens/Assets/12.edds"
	};
	
	override Widget Init() 
	{
		Widget initWidget = super.Init();
		string lsElement = loadingscreens.GetRandomElement();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, lsElement);
		return initWidget;
	}
};

modded class LoginTimeBase 
{
	ref TStringArray loadingscreens = 
	{
		"IntenZ/Loadingscreens/Assets/01.edds",
		"IntenZ/Loadingscreens/Assets/02.edds",
		"IntenZ/Loadingscreens/Assets/03.edds",
		"IntenZ/Loadingscreens/Assets/04.edds",
		"IntenZ/Loadingscreens/Assets/05.edds",
		"IntenZ/Loadingscreens/Assets/06.edds",
		"IntenZ/Loadingscreens/Assets/07.edds",
		"IntenZ/Loadingscreens/Assets/08.edds",
		"IntenZ/Loadingscreens/Assets/09.edds",
		"IntenZ/Loadingscreens/Assets/10.edds",
		"IntenZ/Loadingscreens/Assets/11.edds",
		"IntenZ/Loadingscreens/Assets/12.edds"
	};
	
	override Widget Init() 
	{		
		Widget widgetToReturn = super.Init();
		string lsElement = loadingscreens.GetRandomElement();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, lsElement);
		return widgetToReturn;
	}	
};
