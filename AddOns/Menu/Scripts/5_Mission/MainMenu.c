modded class MainMenu
{
	protected ImageWidget m_LogoImage;
	override Widget Init()
	{
		Widget widgets = super.Init();
		Print("CUSTOM MAIN MENU INIT");
		m_ModdedWarning.SetText("");
		m_LogoImage = ImageWidget.Cast( widgets.FindAnyWidget( "dayz_logo" ) );
		
		Print("SETTING LOGO IMAGE 1");
		m_LogoImage.LoadImageFile( 0, "set:IntenZ_gui image:IntenZ_Logo" );
	
		return widgets;
	}
};
