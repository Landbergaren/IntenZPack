modded class LoadingScreen 
{
	ref TStringArray loadingscreens = 
	{
		"IntenZ/Assets/loadingscreens/01.paa",
		"IntenZ/Assets/loadingscreens/02.paa",
		"IntenZ/Assets/loadingscreens/03.paa",
		"IntenZ/Assets/loadingscreens/04.paa",
		"IntenZ/Assets/loadingscreens/05.paa",
	//	"IntenZ/Assets/loadingscreens/06.paa",
		"IntenZ/Assets/loadingscreens/07.paa",
		"IntenZ/Assets/loadingscreens/08.paa",
	//	"IntenZ/Assets/loadingscreens/09.paa",
	//	"IntenZ/Assets/loadingscreens/10.paa",
		"IntenZ/Assets/loadingscreens/11.paa",
		"IntenZ/Assets/loadingscreens/12.paa",
		"IntenZ/Assets/loadingscreens/13.paa",
		"IntenZ/Assets/loadingscreens/14.paa",
		"IntenZ/Assets/loadingscreens/15.paa"
	};
	
	void LoadingScreen(DayZGame game) 
	{
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);
		m_ModdedWarning.Show(false);
		m_ImageBackground.LoadMaskTexture("");
		ProgressAsync.SetUserData(m_ImageBackground);
	}
	
	override void Show() 
	{
		string lsElement = loadingscreens.GetRandomElement();
	//	m_ImageWidgetBackground.LoadMaskTexture("IntenZ/Assets/loadingscreens/01.paa");
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
		"IntenZ/Assets/loadingscreens/01.paa",
		"IntenZ/Assets/loadingscreens/02.paa",
		"IntenZ/Assets/loadingscreens/03.paa",
		"IntenZ/Assets/loadingscreens/04.paa",
		"IntenZ/Assets/loadingscreens/05.paa",
	//	"IntenZ/Assets/loadingscreens/06.paa",
		"IntenZ/Assets/loadingscreens/07.paa",
		"IntenZ/Assets/loadingscreens/08.paa",
	//	"IntenZ/Assets/loadingscreens/09.paa",
	//	"IntenZ/Assets/loadingscreens/10.paa",
		"IntenZ/Assets/loadingscreens/11.paa",
		"IntenZ/Assets/loadingscreens/12.paa",
		"IntenZ/Assets/loadingscreens/13.paa",
		"IntenZ/Assets/loadingscreens/14.paa",
		"IntenZ/Assets/loadingscreens/15.paa"
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
		"IntenZ/Assets/loadingscreens/01.paa",
		"IntenZ/Assets/loadingscreens/02.paa",
		"IntenZ/Assets/loadingscreens/03.paa",
		"IntenZ/Assets/loadingscreens/04.paa",
		"IntenZ/Assets/loadingscreens/05.paa",
	//	"IntenZ/Assets/loadingscreens/06.paa",
		"IntenZ/Assets/loadingscreens/07.paa",
		"IntenZ/Assets/loadingscreens/08.paa",
	//	"IntenZ/Assets/loadingscreens/09.paa",
	//	"IntenZ/Assets/loadingscreens/10.paa",
		"IntenZ/Assets/loadingscreens/11.paa",
		"IntenZ/Assets/loadingscreens/12.paa",
		"IntenZ/Assets/loadingscreens/13.paa",
		"IntenZ/Assets/loadingscreens/14.paa",
		"IntenZ/Assets/loadingscreens/15.paa"
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
