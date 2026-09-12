class CfgPatches {
    class whb_ef {
        name = "Warriors Haven Backpacks - Expeditionary Forces";
        author = "thegamecracks";
        url = "https://github.com/Warriors-Haven-Gaming/WHBackpacks";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "EF_Marines",
        };
        skipWhenMissingDependencies = 1;

        units[] = {
            "WHB_EF_B_AssaultPack_coy",
            "WHB_EF_B_Carryall_coy",
            "WHB_EF_B_RaiderPack_black",
            "WHB_EF_B_RaiderPack_coy",
        };
    };
};

class CfgVehicles {
    class EF_B_AssaultPack_coy;
    class WHB_EF_B_AssaultPack_coy : EF_B_AssaultPack_coy {
        displayName = "WHB Assault Pack (Coyote Brown)";
        maximumLoad = 480; // 160
    };
    class EF_B_Carryall_coy;
    class WHB_EF_B_Carryall_coy : EF_B_Carryall_coy {
        displayName = "WHB Carryall Backpack (Coyote Brown)";
        maximumLoad = 1000; // 320
    };
    class EF_B_RaiderPack_black;
    class WHB_EF_B_RaiderPack_black : EF_B_RaiderPack_black {
        displayName = "WHB Raider Pack (Black)";
        maximumLoad = 480; // 160
    };
    class EF_B_RaiderPack_coy;
    class WHB_EF_B_RaiderPack_coy : EF_B_RaiderPack_coy {
        displayName = "WHB Raider Pack (Coyote Brown)";
        maximumLoad = 480; // 160
    };
};
