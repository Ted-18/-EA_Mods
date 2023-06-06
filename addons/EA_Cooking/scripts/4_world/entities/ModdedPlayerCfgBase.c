modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);

        string itemName = "EA_Bowl_Base_Full";
        string asi = "dz/anims/workspaces/player/player_main/props/player_main_1h_food_box.asi";
        string anm = "dz/anims/anm/player/ik/gear/box_cereal.anm";

        pType.AddItemInHandsProfileIK(itemName, asi, pBehavior, anm);
    };
};