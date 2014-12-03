class I44_BR {
    class Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 9},
            {"I44_HandGrenade_No36M", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BNo4Mk1";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
		items[] = {"I44_ItemBayonet", "I44_ItemShovel"};
        ifak[] = {1, 1, 1};  
        code = "";
    };
 
    class Leader : Rifleman {
        weapons[] = {"I44_StenMk5"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 9},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 6},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class Officer : Leader {
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class Crew : Rifleman {
        weapons[] = {"I44_StenMk2"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
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
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_BABMedic";
        ruckMagazines[] = {
            {"I44_MedpackLarge", 1},
            {"I44_SmokeGrenade_ANM8", 4},
            {"I44_MedpackSmall", 2}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3_M3"};
    };
	
	//RTO/Radioman, bearer of the holy 343
	class RTO : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_BRadio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_ANM8", 4}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3_M3"};
    };
	
	//FOO/FAC, for when you have artillery or air support on hand
	class FOO : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 4}
        };
        ruck = "I44_Bag_BRadio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_ANM8", 4}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "I44_Binocular_M3_M3"};
    };
 
	//Default SMG armed FTL
    class FTL : Leader {
    };
	
	// Rifle Armed FTL/Section Leader for the Gun Group
    class FTLR : Leader {
	weapons[] = {"I44_LeeEnfieldNo4Mk1"};
    magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 9},
            {"I44_HandGrenade_No36M", 2},
            {"I44_SmokeGrenade_ANM8", 1}
			};
			ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };		
 
    class AR : Rifleman {
        weapons[] = {"I44_BrenMk1"};
        magazines[] = {
            {"I44_30rd_77x56R_Mix_Bren", 10},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_No36M", 2},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };
 
    class AAR : Rifleman {
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 4},
            {"I44_30rd_77x56R_Mix_Bren", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        items[] = {"I44_Binocular_M3"};
    };
 
	//Assualtman, replaces RAT but still gives some boom 
    class RAT : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1" };
		magazines[] = {
            {"10rd_77x56R_mix_LeeEnfield", 6},
            {"I44_G_HandGrenade_No82", 4},
            {"I44_SmokeGrenade_ANM8", 1}
		};
        ruckMagazines[] = {
            {"I44_HandGrenade_No36M", 2},
            {"I44_SmokeGrenade_ANM8", 2}
        };
    };
	
	//Submachine gunner 
	class SMG : Rifleman {
        weapons[] = {"I44_StenMk5"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 9},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 6},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };

 
	//Other nations have mobile MMG's but Britain has either the Light Bren or the Tripod Mounted Vickers. Here mostly for the same of completeness
    class MMGG : Rifleman {
        weapons[] = {"I44_BrenMk1"};
        magazines[] = {
            {"I44_30rd_77x56R_Mix_Bren", 10},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
			{"I44_30rd_77x56R_Mix_Bren", 6},
			{"I44_HandGrenade_No36M", 2}
        };
    };
 
    class MMGAG : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 4},
            {"I44_30rd_77x56R_Mix_Bren", 3}
        };
        items[] = {"I44_Binocular_M3"};
    };
 
	//When you actually want an MG with Grunt. Suitable for MMG too.
    class HMGG : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1", "I44_Bag_Vickers"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 1},
			{"I44_1000rd_77x56R_Mix_Vickers_mounted", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };
 
    class HMGAG : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1" , "I44_Bag_TripodV"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield",  8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 4},
            {"I44_1000rd_77x56R_Mix_Vickers_mounted", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class HMGAC : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 4},
            {"I44_1000rd_77x56R_Mix_Vickers_mounted", 4}
        };
    };
 
	//PIAT Soldier. Has enough ammo to be added to a SL element as an extra man.
    class MATG : Rifleman {
        weapons[] = {"I44_WebleyMk6", "I44_PIAT"};
        magazines[] = {
            {"I44_6rd_12x20R_Ball_WebleyMk6", 6},
            {"I44_Grenade_PIATMk3", 2},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
		   {"I44_Grenade_PIATMk3", 4},
           {"I44_6rd_12x20R_Ball_WebleyMk6", 4}
        };
        items[] = {"ACRE_PRC343"};
    };
  
    class MATAG : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield",  8},
            {"I44_Grenade_PIATMk3", 1},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 2},
            {"I44_Grenade_PIATMk3", 2}
        };
        items[] = {"ACRE_PRC343"};
    };
 
    class MATAC : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_Grenade_PIATMk3", 1},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 4},
            {"I44_Grenade_PIATMk3", 2}
        };
    };
 
	//1944 Era HAT is basically an Anti-Tank gun Crew, hence the rifles. There guys will crew a 6-pounder gun. This is setup to a vehicle,with a Gunner in command and 
	
	//Gunner
    class HATG : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1" };
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };
	//Spotter
    class HATAG : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield",  8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
	//Driver or Spare
    class HATAC : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1" };
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
    };
	//"Blow shit up" type Engineer
    class ENG : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_SmokeGrenade_ANM8", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_Item_M37DemoKit", 2},
            {"I44_Mine_AT_M1", 3}
        };
        items[] = {"ACRE_PRC343"};
    };
 
	//Combat Engineer with Rifle (No Radio)
    class ENGA : Rifleman {
        weapons[] = {"I44_LeeEnfieldNo4Mk1"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 6},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_No36M", 1},
			{"I44_SmokeGrenade_ANM8", 2}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 2}
        };
    };
 
	//Combat Engineer with SMG (No Radio)
    class ENGB : Rifleman {
        weapons[] = {"I44_StenMk5"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 5},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_No36M", 2},
			{"I44_SmokeGrenade_ANM8", 2}
        };
        ruck = "I44_Bag_BABBren";
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_Sten", 5},
			{"I44_HandGrenade_No36M", 1},
			{"I44_SmokeGrenade_ANM8", 2}
        };
    };
	
	//Flamethrower Trooper, ideally put him in a combat engineer team or a rifleman to babysit him
	class ENGFT : Rifleman {
        weapons[] = {"I44_M2_flameThrower", "I44_WebleyMk6"};
        magazines[] = {
            {"I44_m2_flamethrower_mag", 1},
			{"I44_6rd_12x20R_Ball_WebleyMk6", 6}
        };
        ruck = "I44_Backpack_M2flamethrower";
        ruckMagazines[] = {
		    {"I44_m2_flamethrower_mag", 1},
			{"I44_HandGrenade_No36M", 1},
			{"I44_SmokeGrenade_ANM8", 2}
        };
        items[] = {"ACRE_PRC343"};
    };
	
	
         class SN : Rifleman {
        weapons[] = {"Lee-Enfield No.4 Mk.I (T)", "I44_WebleyMk6"};
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield",  8},
            {"I44_6rd_12x20R_Ball_WebleyMk6",  5},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class SP : Rifleman {
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 8},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
        ruckMagazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 2},
            {"I44_10rd_77x56R_Ball_LeeEnfield", 2}
        };
		items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
 //Has a 148 in case an artillery vehicle is used
    class VC : Crew {
        items[] = {"ACRE_PRC343","ACRE_PRC148"};
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
            {"I44_LeeEnfieldNo4Mk1", 4}
        };
        magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 30},
            {"I44_32rd_9x19_Ball_Sten", 10},
            {"I44_30rd_77x56R_Mix_Bren", 10},
            {"I44_1000rd_77x56R_Mix_Vickers_mounted", 8},
            {"I44_HandGrenade_No36M", 10},
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
            {"I44_LeeEnfieldNo4Mk1", 4}
        };
         magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 30},
            {"I44_32rd_9x19_Ball_Sten", 10},
            {"I44_30rd_77x56R_Mix_Bren", 10},
            {"I44_1000rd_77x56R_Mix_Vickers_mounted", 8},
            {"I44_HandGrenade_No36M", 10},
            {"I44_SmokeGrenade_ANM8", 10}
        };
    };
 
    class Armoured : Vehicle {
	 weapons[] = {
            {"I44_LeeEnfieldNo4Mk1", 4}
        };
         magazines[] = {
            {"I44_10rd_77x56R_Ball_LeeEnfield", 30},
            {"I44_32rd_9x19_Ball_Sten", 10},
            {"I44_30rd_77x56R_Mix_Bren", 10},
            {"I44_1000rd_77x56R_Mix_Vickers_mounted", 8},
            {"I44_HandGrenade_No36M", 10},
            {"I44_SmokeGrenade_ANM8", 10}
        };
    };
};