  class TransmissionMenu extends UIScriptedMenu
{
  private   ButtonWidget      m_SendBtn;
  private   EditBoxWidget     m_TextInput;
  private   RichTextWidget    m_TextPreview;

  void TransmissionMenu()
  {
    GetGame().GetCallQueue (CALL_CATEGORY_GUI).CallLater(UpdateTextPreview, 500, true);
  }

  void ~TransmissionMenu()
  {

  }

  override Widget Init()
    {
		    layoutRoot = GetGame().GetWorkspace().CreateWidgets( "EA_TransmissionRadio/gui/TransmissionMenu.layout" );
        m_SendBtn = ButtonWidget.Cast(layoutRoot.FindAnyWidget( "SendBtn" ));
        m_TextInput = EditBoxWidget.Cast(layoutRoot.FindAnyWidget( "TextInput" ));
        m_TextPreview = RichTextWidget.Cast(layoutRoot.FindAnyWidget( "TextPreview" ));
        layoutRoot.Show(false);
        return layoutRoot;
    }

  override bool OnClick (Widget w, int x, int y, int button)
  {
    if(w == m_SendBtn)
    {
      SendMessageHandler();
      return true;
    }

    return false;
  }

  void UpdateTextPreview()
  {
    m_TextPreview.SetText(m_TextInput.GetText());
  }

	override void OnHide()
	{
		super.OnHide();
		PPEffects.SetBlurMenu(0);
		GetGame().GetInput().ResetGameFocus();
    GetGame().GetUIManager().ShowUICursor(false);
    GetGame().GetMission().GetHud().Show(true);
		Close();
	}

	override void OnShow()
	{
		super.OnShow();
		PPEffects.SetBlurMenu(0.5);
		GetGame().GetInput().ChangeGameFocus(1);
    GetGame().GetUIManager().ShowUICursor(true);
    GetGame().GetMission().GetHud().Show(false);
		SetFocus(layoutRoot);
	}

  void SendMessageHandler()
  {
      GetRPCManager().SendRPC("EA_TransmissionRadio", "TransmissionMenuNotificationRequest",  new Param1<string>(m_TextInput.GetText()), true, NULL);
      OnHide();
  }
};
