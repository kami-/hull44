//US Army, Airborne and Rangers Gear assign
class I44_US {
    class Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 9},
            {"I44_HandGrenade_Mk2", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        items[] = {"I44_ItemBayonet", "I44_ItemShovel"};
        ifak[] = {1, 1, 1};  
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"I44_M1A1Thompson"};
        magazines[] = {
            {"I44_30rd_1143x23_mix_M1A1Thompson", 9},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_30rd_1143x23_Tracer_M1A1Thompson", 6},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    class Officer : Leader {
        weapons[] = {"I44_M1Carbine"};
        magazines[] = {
            {"I44_15rd_762x33_mix_M1Carbine", 9},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_15rd_762x33_Tracer_M1Carbine", 6},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    class Crew : Rifleman {
        weapons[] = {"I44_M3Greasegun"};
        magazines[] = {
            {"I44_30rd_1143x23_mix_M3Greasegun", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };

    class CO : Officer {
    };

    class XO : Officer {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_AMedic";
        ruckMagazines[] = {
            {"I44_MedpackLarge", 1},
            {"I44_SmokeGrenade_ANM8", 4},
            {"I44_MedpackSmall", 2}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    //RTO/Radioman, bearer of the holy 343
    class RTO : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_ARadio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_ANM8", 4}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    //FOO/FAC, for when you have artillery or air support on hand
    class FOO : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_ARadio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_ANM8", 4}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "I44_Binocular_M3"};
    };

    //Default SMG armed FTL
    class FTL : Leader {
    };

    // Rifle Armed FTL/Section Leader, good for Gun Groups 
    class FTLR : Leader {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 9},
            {"I44_HandGrenade_Mk2", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };		

    // Carbine Armed FTL/Section Leader 
    class FTLC : Leader {
        weapons[] = {"I44_M1Carbine"};
        magazines[] = {
            {"I44_15rd_762x33_mix_M1Carbine", 9},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_15rd_762x33_Tracer_M1Carbine", 6},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };	

    //Carbine armed rifleman
    class SAR : Rifleman {
        weapons[] = {"I44_M1Carbine"};
        magazines[] = {
            {"I44_15rd_762x33_mix_M1Carbine", 9},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_15rd_762x33_mix_M1Carbine", 6},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };

    //Grenadier with M1 + Grenade Launcher
    class GR : Rifleman {
        weapons[] = {"I44_M1Garand_M7"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 4},
            {"I44_RifleGrenade_M17", 3},
            {"I44_RifleGrenade_M9A1", 3},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_Mk2", 2},
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };

    //AR with BAR
    class AR : Rifleman {
        weapons[] = {"I44_M1918A2"};
        magazines[] = {
            {"I44_20rd_762x63_Mix_M1918", 10},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_Mk2", 2},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };

    class AAR : Rifleman {
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 4},
            {"I44_20rd_762x63_Mix_M1918", 6}
        };
        items[] = {"I44_Binocular_M3"};
    };

    //Assaultman, with good old boom-boom
    class RAT : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_G_HandGrenade_No82", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_G_HandGrenade_No82", 2},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };

    //Submachine gunner (M1 Thompson)
    class SMG : Rifleman {
        weapons[] = {"I44_M1A1Thompson"};
        magazines[] = {
            {"I44_30rd_1143x23_Mix_M1A1Thompson","", 9},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_30rd_1143x23_Mix_M1A1Thompson","", 6},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };     

    //Submachine gunner (M3 Grease Gun)
    class SMG2 : Rifleman {
        weapons[] = {"I44_M3Greasegun"};
        magazines[] = {
            {"I44_30rd_1143x23_Mix_M3Greasegun", 9},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_30rd_1143x23_Mix_M3Greasegun", 6},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };	 

    //MMG with M1919A4. You could use it in the gun group, although doubling up on BAR's is a bit more historical
    class MMGG : Rifleman {
        weapons[] = {"I44_M1919A4"};
        magazines[] = {
            {"I44_50rd_762x63_Mix_M1919", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_30rd_77x56R_Mix_Bren", 2},
            {"I44_HandGrenade_Mk2", 2}
        };
    };

    class MMGAG : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 4},
            {"I44_50rd_762x63_Mix_M1919", 3}
        };
        items[] = {"I44_Binocular_M3"};
    };

    //HMG with M1919
    class HMGG : Rifleman {
        weapons[] = {"I44_M1Garand", "I44_Bag_M1919A4"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };

    class HMGAG : Rifleman {
        weapons[] = {"I44_M1Garand", "I44_Bag_M1919TripodM2"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand",  8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 4},
            {"I44_250rd_762x63_Mix_M1919_mounted", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    class HMGAC : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 4},
            {"I44_250rd_762x63_Mix_M1919_mounted", 3}
        };
    };

    //Bazooka gunner, Has enough ammo to be added to a SL element as an extra man if desired.
    class MATG : Rifleman {
        weapons[] = {"I44_M1Carbine", "I44_RPzB54"};
        magazines[] = {
            {"I44_15rd_762x33_mix_M1Carbine", 5},
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 3},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 3},
            {"I44_32rd_9x19_Ball_MP40", 4}
        };
        items[] = {"ACRE_PRC343"};
    };

    class MATAG : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand",  8},
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 1},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 1},
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 3}
        };
        items[] = {"ACRE_PRC343"};
    };

    class MATAC : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 1},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 1},
            {"I44_Rocket_60mm_M6A1_M1A1Bazooka", 3}
        };
    };

    //1944 Era HAT is basically an Anti-Tank gun Crew, hence the rifles. There guys will crew a PaK-40 Anti-Tank Gun
    //Gunner
    class HATG : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };

    //Spotter
    class HATAG : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand",  8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    //Driver or Spare
    class HATAC : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
    };

    //"Blow shit up" type Engineer
    class ENG : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_Item_M37DemoKit", 2},
            {"I44_Mine_AT_M1", 3}
        };
        items[] = {"ACRE_PRC343"};
    };

    //Combat Engineer with Rifle (No Radio)
    class ENGA : Rifleman {
        weapons[] = {"I44_M1Garand"};
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 6},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 2}
        };
    };

    //Combat Engineer with SMG (No Radio)
    class ENGB : Rifleman {
        weapons[] = {"I44_M1A1Thompson"};
        magazines[] = {
            {"I44_30rd_1143x23_mix_M1A1Thompson", 5},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_Mk2", 2},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruck = "I44_Bag_AM1G";
        ruckMagazines[] = {
            {"I44_30rd_1143x23_mix_M1A1Thompson", 5},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };

    //Flamethrower Trooper, ideally put him in a combat engineer team or a rifleman to babysit him
    class ENGFT : Rifleman {
        weapons[] = {"I44_M2_flameThrower", "I44_M1911A1"};
        magazines[] = {
            {"I44_m2_flamethrower_mag", 1},
            {"I44_7rd_1143x23_Ball_M1911", 2}
        };
        ruck = "I44_Backpack_M2flamethrower";
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };


    class SN : Rifleman {
        weapons[] = {"I44_M1903A3", "I44_M1911A1"};
        magazines[] = {
            {"I44_5rd_762x63_AP_M1903",  8},
            {"I44_7rd_1143x23_Ball_M1911",  5},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    class SP : Rifleman {
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 8},
            {"I44_HandGrenade_Mk2", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 2},
            {"I44_8rd_762x63_mix_M1Garand", 2}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };

    //Gets a 148 if an artillery vehicle is used
    class VC : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class VG : Crew {
        items[] = {"ACRE_PRC343"};
    };

    class VD : Crew {
        items[] = {"ACRE_PRC343"};
    };

    class P : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC148"};
    };

    class PCM : Crew {
    };

    class Vehicle {
        weapons[] = {
        {"I44_M1Garand", 4}
        };
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 30},
            {"I44_15rd_762x33_Mix_M1Carbine", 10},
            {"I44_30rd_1143x23_Mix_M1A1Thompson", 10},
            {"I44_30rd_1143x23_mix_M3Greasegun", 10},
            {"I44_20rd_762x63_Mix_M1918", 10},
            {"I44_50rd_762x63_Mix_M1919", 8},
            {"I44_HandGrenade_Mk2", 10},
            {"I44_SmokeGrenade_ANM8", 10}
        };
        items[] = {
            {"ACRE_PRC343", 1}
        };
        code = "";
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"I44_M1Garand", 4}
        };
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 30},
            {"I44_15rd_762x33_Mix_M1Carbine", 10},
            {"I44_30rd_1143x23_Mix_M1A1Thompson", 10},
            {"I44_30rd_1143x23_mix_M3Greasegun", 10},
            {"I44_20rd_762x63_Mix_M1918", 10},
            {"I44_50rd_762x63_Mix_M1919", 8},
            {"I44_HandGrenade_Mk2", 10},
            {"I44_SmokeGrenade_ANM8", 10}
        };
    };

    class Armoured : Vehicle {
        weapons[] = {
            {"I44_M1Garand", 4}
        };
        magazines[] = {
            {"I44_8rd_762x63_mix_M1Garand", 30},
            {"I44_32rd_9x19_Ball_MP40", 10},
            {"I44_15rd_762x33_Mix_M1Carbine", 10},
            {"I44_30rd_1143x23_Mix_M1A1Thompson", 10},
            {"I44_30rd_1143x23_mix_M3Greasegun", 10},
            {"I44_20rd_762x63_Mix_M1918", 10},
            {"I44_50rd_762x63_Mix_M1919", 8},
            {"I44_HandGrenade_Mk2", 10},
            {"I44_SmokeGrenade_ANM8", 10}
        };
    };
};