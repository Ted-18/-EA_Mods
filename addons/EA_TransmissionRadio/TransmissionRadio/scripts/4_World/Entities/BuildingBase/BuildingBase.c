class EA_Channel7 extends BuildingBase
{
	void EA_Channel7()
	{
	}

	override void OnStoreSave( ParamsWriteContext ctx )
	 {
			 super.OnStoreSave(ctx);
			 GetGame().ObjectDelete(this);
	 }
};
