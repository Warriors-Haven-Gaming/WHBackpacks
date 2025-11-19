class CfgPatches {
    class whb_main {
        name = "Warriors Haven Backpacks";
        author = "thegamecracks";
        url = "https://github.com/Warriors-Haven-Gaming/WHBackpacks";

        requiredVersion = 2.20;
        requiredAddons[] = {
            "A3_Supplies_F_Enoch_Bags",
            "A3_Supplies_F_Exp",
            "A3_Weapons_F_Ammoboxes",
        };
        skipWhenMissingDependencies = 0;

        units[] = {};
    };
};

class CfgVehicles {
    class B_Carryall_blk;
    class WHB_B_Carryall_blk : B_Carryall_blk {
        displayName = "WHB Carryall Backpack (Black)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_cbr;
    class WHB_B_Carryall_cbr : B_Carryall_cbr {
        displayName = "WHB Carryall Backpack (Coyote)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_eaf_F;
    class WHB_B_Carryall_eaf_F : B_Carryall_eaf_F {
        displayName = "WHB Carryall Backpack (Geometric)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_ghex_F;
    class WHB_B_Carryall_ghex_F : B_Carryall_ghex_F {
        displayName = "WHB Carryall Backpack (Green Hex)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_green_F;
    class WHB_B_Carryall_green_F : B_Carryall_green_F {
        displayName = "WHB Carryall Backpack (Green)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_khk;
    class WHB_B_Carryall_khk : B_Carryall_khk {
        displayName = "WHB Carryall Backpack (Khaki)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_mcamo;
    class WHB_B_Carryall_mcamo : B_Carryall_mcamo {
        displayName = "WHB Carryall Backpack (MTP)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_ocamo;
    class WHB_B_Carryall_ocamo : B_Carryall_ocamo {
        displayName = "WHB Carryall Backpack (Hex)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_oli;
    class WHB_B_Carryall_oli : B_Carryall_oli {
        displayName = "WHB Carryall Backpack (Olive)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_oucamo;
    class WHB_B_Carryall_oucamo : B_Carryall_oucamo {
        displayName = "WHB Carryall Backpack (Urban)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_taiga_F;
    class WHB_B_Carryall_taiga_F : B_Carryall_taiga_F {
        displayName = "WHB Carryall Backpack (Taiga)";
        maximumLoad = 1000; // 320
    };
    class B_Carryall_wdl_F;
    class WHB_B_Carryall_wdl_F : B_Carryall_wdl_F {
        displayName = "WHB Carryall Backpack (Woodland)";
        maximumLoad = 1000; // 320
    };
};
