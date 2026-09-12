class CfgPatches {
    class whb_ws {
        name = "Warriors Haven Backpacks - Western Sahara";
        author = "thegamecracks";
        url = "https://github.com/Warriors-Haven-Gaming/WHBackpacks";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "Characters_f_lxWS",
        };
        skipWhenMissingDependencies = 1;

        units[] = {
            "WHB_B_AssaultPack_desert_lxWS",
            "WHB_B_Carryall_desert_lxWS",
        };
    };
};

class CfgVehicles {
    class B_AssaultPack_desert_lxWS;
    class WHB_B_AssaultPack_desert_lxWS : B_AssaultPack_desert_lxWS {
        displayName = "WHB Assault Pack (Desert)";
        maximumLoad = 480; // 160
    };
    class B_Carryall_desert_lxWS;
    class WHB_B_Carryall_desert_lxWS : B_Carryall_desert_lxWS {
        displayName = "WHB Carryall Backpack (Desert)";
        maximumLoad = 1000; // 320
    };
};
