class CfgPatches {
    class whb_main {
        name = "Warriors Haven Backpacks";
        author = "thegamecracks";
        url = "https://github.com/Warriors-Haven-Gaming/WHBackpacks";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
        };
        skipWhenMissingDependencies = 0;

        units[] = {
            "WHB_B_AssaultPack_blk",
            "WHB_B_AssaultPack_cbr",
            "WHB_B_AssaultPack_dgtl",
            "WHB_B_AssaultPack_eaf_F",
            "WHB_B_AssaultPack_khk",
            "WHB_B_AssaultPack_mcamo",
            "WHB_B_AssaultPack_ocamo",
            "WHB_B_AssaultPack_rgr",
            "WHB_B_AssaultPack_sgg",
            "WHB_B_AssaultPack_tna_F",
            "WHB_B_AssaultPack_wdl_F",
            "WHB_B_Carryall_blk",
            "WHB_B_Carryall_cbr",
            "WHB_B_Carryall_eaf_F",
            "WHB_B_Carryall_ghex_F",
            "WHB_B_Carryall_green_F",
            "WHB_B_Carryall_khk",
            "WHB_B_Carryall_mcamo",
            "WHB_B_Carryall_ocamo",
            "WHB_B_Carryall_oli",
            "WHB_B_Carryall_oucamo",
            "WHB_B_Carryall_taiga_F",
            "WHB_B_Carryall_wdl_F",
            "WHB_B_Kitbag_rgr",
            "WHB_B_Kitbag_mcamo",
            "WHB_B_Kitbag_sgg",
            "WHB_B_Kitbag_cbr",
            "WHB_B_Kitbag_tan",
        };
    };
};

class CfgVehicles {
    class B_AssaultPack_blk;
    class WHB_B_AssaultPack_blk : B_AssaultPack_blk {
        displayName = "WHB Assault Pack (Black)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_cbr;
    class WHB_B_AssaultPack_cbr : B_AssaultPack_cbr {
        displayName = "WHB Assault Pack (Coyote)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_dgtl;
    class WHB_B_AssaultPack_dgtl : B_AssaultPack_dgtl {
        displayName = "WHB Assault Pack (Digital)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_eaf_F;
    class WHB_B_AssaultPack_eaf_F : B_AssaultPack_eaf_F {
        displayName = "WHB Assault Pack (Geometric)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_khk;
    class WHB_B_AssaultPack_khk : B_AssaultPack_khk {
        displayName = "WHB Assault Pack (Khaki)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_mcamo;
    class WHB_B_AssaultPack_mcamo : B_AssaultPack_mcamo {
        displayName = "WHB Assault Pack (MTP)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_ocamo;
    class WHB_B_AssaultPack_ocamo : B_AssaultPack_ocamo {
        displayName = "WHB Assault Pack (Hex)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_rgr;
    class WHB_B_AssaultPack_rgr : B_AssaultPack_rgr {
        displayName = "WHB Assault Pack (Green)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_sgg;
    class WHB_B_AssaultPack_sgg : B_AssaultPack_sgg {
        displayName = "WHB Assault Pack (Sage)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_tna_F;
    class WHB_B_AssaultPack_tna_F : B_AssaultPack_tna_F {
        displayName = "WHB Assault Pack (Tropic)";
        maximumLoad = 480; // 160
    };
    class B_AssaultPack_wdl_F;
    class WHB_B_AssaultPack_wdl_F : B_AssaultPack_wdl_F {
        displayName = "WHB Assault Pack (Woodland)";
        maximumLoad = 480; // 160
    };
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
    class B_Kitbag_rgr;
    class WHB_B_Kitbag_rgr : B_Kitbag_rgr {
        displayName = "WHB Kitbag (Green)";
        maximumLoad = 840; // 280
    };
    class B_Kitbag_mcamo;
    class WHB_B_Kitbag_mcamo : B_Kitbag_mcamo {
        displayName = "WHB Kitbag (MTP)";
        maximumLoad = 840; // 280
    };
    class B_Kitbag_sgg;
    class WHB_B_Kitbag_sgg : B_Kitbag_sgg {
        displayName = "WHB Kitbag (Sage)";
        maximumLoad = 840; // 280
    };
    class B_Kitbag_cbr;
    class WHB_B_Kitbag_cbr : B_Kitbag_cbr {
        displayName = "WHB Kitbag (Coyote)";
        maximumLoad = 840; // 280
    };
    class B_Kitbag_tan;
    class WHB_B_Kitbag_tan : B_Kitbag_tan {
        displayName = "WHB Kitbag (Tan)";
        maximumLoad = 840; // 280
    };
};
