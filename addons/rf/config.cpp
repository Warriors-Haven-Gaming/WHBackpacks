class CfgPatches {
    class whb_rf {
        name = "Warriors Haven Backpacks - Reaction Forces";
        author = "thegamecracks";
        url = "https://github.com/Warriors-Haven-Gaming/WHBackpacks";

        requiredVersion = 2.22;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "RF_Characters_Backpack",
        };
        skipWhenMissingDependencies = 1;

        units[] = {
            "WHB_B_DuffleBag_Black_RF",
            "WHB_B_DuffleBag_MTP_RF",
            "WHB_B_DuffleBag_Olive_RF",
            "WHB_B_DuffleBag_Red_RF",
            "WHB_B_DuffleBag_Blue_RF",
            "WHB_B_DuffleBag_Sand_RF",
            "WHB_B_DuffleBag_VRANA_RF",
            "WHB_B_DuffleBag_Black_NoLogo_RF",
            "WHB_B_DuffleBag_Olive_NoLogo_RF",
            "WHB_B_DuffleBag_Sand_NoLogo_RF",
        };
    };
};

class CfgVehicles {
    class B_DuffleBag_Black_RF;
    class WHB_B_DuffleBag_Black_RF : B_DuffleBag_Black_RF {
        displayName = "WHB Sports Duffel Bag (Black)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_MTP_RF;
    class WHB_B_DuffleBag_MTP_RF : B_DuffleBag_MTP_RF {
        displayName = "WHB Duffel Bag (MTP)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Olive_RF;
    class WHB_B_DuffleBag_Olive_RF : B_DuffleBag_Olive_RF {
        displayName = "WHB Sports Duffel Bag (Olive)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Red_RF;
    class WHB_B_DuffleBag_Red_RF : B_DuffleBag_Red_RF {
        displayName = "WHB Sports Duffel Bag (Red)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Blue_RF;
    class WHB_B_DuffleBag_Blue_RF : B_DuffleBag_Blue_RF {
        displayName = "WHB Sports Duffel Bag (Blue)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Sand_RF;
    class WHB_B_DuffleBag_Sand_RF : B_DuffleBag_Sand_RF {
        displayName = "WHB Sports Duffel Bag (Coyote)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_VRANA_RF;
    class WHB_B_DuffleBag_VRANA_RF : B_DuffleBag_VRANA_RF {
        displayName = "WHB Sports Duffel Bag (Vrana)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Black_NoLogo_RF;
    class WHB_B_DuffleBag_Black_NoLogo_RF : B_DuffleBag_Black_NoLogo_RF {
        displayName = "WHB Duffel Bag (Black)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Olive_NoLogo_RF;
    class WHB_B_DuffleBag_Olive_NoLogo_RF : B_DuffleBag_Olive_NoLogo_RF {
        displayName = "WHB Duffel Bag (Olive)";
        maximumLoad = 1000; // 320
    };
    class B_DuffleBag_Sand_NoLogo_RF;
    class WHB_B_DuffleBag_Sand_NoLogo_RF : B_DuffleBag_Sand_NoLogo_RF {
        displayName = "WHB Duffel Bag (Coyote)";
        maximumLoad = 1000; // 320
    };
};
