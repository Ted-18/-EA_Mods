class EA_TransmissionRadioCore
{
	ref EA_TransmissionRadioSettings m_EA_TransmissionRadioSettings;
	ref EA_TransmissionRadioServer m_EA_TransmissionRadioServer;

	ref TransmissionMenu m_TransmissionMenu;

	void EA_TransmissionRadioCore()
  {
		/*We load every config, class that will run on server side here*/
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			//LOADING CONFIG FILES...
			m_EA_TransmissionRadioSettings = EA_TransmissionRadioSettings.Load();

			//Creating server side part
				m_EA_TransmissionRadioServer = new EA_TransmissionRadioServer;
		}
		else
		{
			/*Then we run every config and class that will run on client only*/
		}
		//we call our function that will initiaze our NPC
		InitRPC();
  }

	void ~EA_TransmissionRadioCore(){
  }

	void InitRPC()
		{
			if (GetGame().IsServer())
			{
				//Server calls
				GetRPCManager().AddRPC("EA_TransmissionRadio", "TransmissionMenuNotificationRequest", m_EA_TransmissionRadioServer, SingeplayerExecutionType.Client);
			}
			else
			{
				//Client calls
				//GetRPCManager().AddRPC("EA_TransmissionRadio", "TransmissionConfigResponse", this, SingeplayerExecutionType.Server);
			}
		}
	};
