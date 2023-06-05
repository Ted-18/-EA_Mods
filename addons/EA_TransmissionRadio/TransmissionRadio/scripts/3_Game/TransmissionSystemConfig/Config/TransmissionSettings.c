class EA_TransmissionRadioSettings
{
	int  MessageDuration = 40;
	string  MessageTitle = "RadioTransmission";


	void EA_TransmissionRadioSettings()
	{

	}

	void DefaultEA_TransmissionRadioSettings()
	{
		//then it saves the file
		JsonFileLoader<EA_TransmissionRadioSettings>.JsonSaveFile(TRANSMISSION_RADIO_CONFIG, this);
	}

	static ref EA_TransmissionRadioSettings Load()	{
		EA_TransmissionRadioSettings settings = new EA_TransmissionRadioSettings();

		//we check if config folders exist, if not we create them
		if ( !FileExist( TRANSMISSION_RADIO_CONFIG_ROOT_SERVER ) )
		{
			MakeDirectory( TRANSMISSION_RADIO_CONFIG_ROOT_SERVER );
			if ( !FileExist( TRANSMISSION_RADIO_CONFIG_DIR_SERVER ) )
				MakeDirectory( TRANSMISSION_RADIO_CONFIG_DIR_SERVER );
		}

		//Now we check if config exist, if yes, we load it. if no, we call function defaultEA_TransmissionRadiosettings that will initialize default value
		if (FileExist(TRANSMISSION_RADIO_CONFIG)) {
			//Print("file exist ! loading...");
			JsonFileLoader<EA_TransmissionRadioSettings>.JsonLoadFile(TRANSMISSION_RADIO_CONFIG, settings);
		}
		else {
			//Print("file doesn't exist ! creating...");
			settings.DefaultEA_TransmissionRadioSettings();
		}

		return settings;
	}
}
