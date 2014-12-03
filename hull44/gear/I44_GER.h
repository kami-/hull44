//German Army, Waffen SS, Fallshirmjaeger & Luftwaffe gear assign. Contains necessary classes for all factions

class I44_GER {
    class Rifleman {
        weapons[] = {"I44_K98k"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 9},
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
		items[] = {"I44_ItemBayonet", "I44_ItemShovel"};
        ifak[] = {1, 1, 1};  
        code = "";
    };
 
    class Leader : Rifleman {
        weapons[] = {"I44_MP40"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 9},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 6},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class Officer : Leader {
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class Crew : Rifleman {
        weapons[] = {"I44_MP40"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 9},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
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
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 4}
        };
        ruck = "I44_Bag_G_FSJ_Medic";
        ruckMagazines[] = {
            {"I44_MedpackLarge", 1},
            {"I44_SmokeGrenade_NbHgr39", 4},
            {"I44_MedpackSmall", 2}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
	
	//RTO/Radioman, bearer of the holy 343
	class RTO : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 4}
        };
        ruck = "I44_Bag_G_FSJ_Radio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_NbHgr39", 4}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
	
	//FOO/FAC, for when you have artillery or air support on hand
	class FOO : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 4}
        };
        ruck = "I44_Bag_G_FSJ_Radio";
        ruckMagazines[] = {
            {"I44_SmokeGrenade_NbHgr39", 4}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "I44_Binocular_M3"};
    };
 
	//Default SMG armed FTL
    class FTL : Leader {
    };
	
	// Rifle Armed FTL/Section Leader, good for Gun Groups 
    class FTLR : Leader {
	weapons[] = {"I44_K98k"};
    magazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 1},
			{"I44_5rd_792x57_mix_K98", 9}
			};
			ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
    };		
	
	// Semi-automatic Armed FTL/Section Leader, good for Gun Groups 
    class FTLSA : Leader {
        weapons[] = {"I44_G43"};
        magazines[] = {
            {"I44_10rd_792x57_mix_G43", 8},
			{"I44_SmokeGrenade_NbHgr39", 2},
            {"I44_HandGrenade_StiHgr24", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 2},
			{"I44_10rd_792x57_Tracer_G43", 4}
        };
    };	
	
	//Semiautomatic Rifleman with G43
    class SAR : Rifleman {
        weapons[] = {"I44_G43"};
        magazines[] = {
            {"I44_10rd_792x57_mix_G43", 8},
			{"I44_SmokeGrenade_NbHgr39", 2},
            {"I44_HandGrenade_StiHgr24", 1}

        };
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
	
	//Grenadier with Kar 98 + Grenade Launcher
    class GR : Rifleman {
        weapons[] = {"I44_K98k_GGrGer"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
			{"I44_RifleGrenade_GGPzgr40", 3},
			{"I44_RifleGrenade_GPzgr30", 3},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
			{"I44_10rd_792x57_mix_G43", 6},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
 		
 
	//AR with Stg44
    class AR : Rifleman {
        weapons[] = {"I44_StG44"};
        magazines[] = {
            {"I44_30rd_792x33_Ball_MP43", 10},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
 
    class AAR : Rifleman {
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_30rd_792x33_Ball_MP43", 6}
        };
        items[] = {"I44_Binocular_M3"};
    };
	
	
	//AR with FG42 for Fallschirmjaeger
	        class AR2 : Rifleman {
        weapons[] = {"I44_FG42I"};
        magazines[] = {
            {"I44_20rd_792x57_Mix_FG42", 10},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
 
    class AAR2 : Rifleman {
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_20rd_792x57_Mix_FG42", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        items[] = {"I44_Binocular_M3"};
    };
 
	//Assaultman, actually has AT for once 
    class RAT : Rifleman {
        weapons[] = {"I44_K98k" ,"I44_PzFaust60"};
		magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_Rocket_149mm_PzF_60", 2},
            {"I44_SmokeGrenade_NbHgr39", 1}
		};
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24", 2},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
	
	//Assaultman, with good old boom-boom
    class ASLT : Rifleman {
        weapons[] = {"I44_K98k" };
		magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_HandGrenade_StiHgr24x7", 2},
            {"I44_SmokeGrenade_NbHgr39", 1}
		};
        ruckMagazines[] = {
            {"I44_HandGrenade_StiHgr24x7", 2},
            {"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
	
	//Submachine gunner 
	class SMG : Rifleman {
        weapons[] = {"I44_MP40"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 9},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 2}
        };
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 6},
            {"I44_HandGrenade_No36M", 1},
            {"I44_SmokeGrenade_ANM8", 1}
        };
    };
 
	//MMG with MG34, use in the Gun Group if you're doing that
    class MMGG2 : Rifleman {
        weapons[] = {"I44_MG34"};
        magazines[] = {
            {"I44_50rd_792x57_Mix_MG34", 6},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
			{"I44_50rd_792x57_Mix_MG34", 2},
			{"I44_HandGrenade_StiHgr24", 2}
        };
    };
 
    class MMGAG2 : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_50rd_792x57_Mix_MG34", 3}
        };
        items[] = {"I44_Binocular_M3"};
    };
 
 
 		//MMG with MG42, use in the Gun Group if you're doing that 
    class MMGG : Rifleman {
        weapons[] = {"I44_MG42"};
        magazines[] = {
            {"I44_50rd_792x57_Mix_MG42", 6},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
			{"I44_50rd_792x57_Mix_MG42", 3},
			{"I44_HandGrenade_StiHgr24", 2}
        };
    };
 
    class MMGAG : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_50rd_792x57_Mix_MG42", 6}
        };
        items[] = {"I44_Binocular_M3"};
    };
 
	//HMG with MG42
    class HMGG : Rifleman {
        weapons[] = {"I44_K98k" , "I44_Bag_MG42"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };
 
    class HMGAG : Rifleman {
        weapons[] = {"I44_K98k" , "I44_Bag_Tripod_Lafette"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98",  8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_250rd_792x57_Mix_MG42_mounted", 1}
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class HMGAC : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_250rd_792x57_Mix_MG42_mounted", 4}
        };
    };
 
	//Panzerschreck gunner, Has enough ammo to be added to a SL element as an extra man if desired.
    class MATG : Rifleman {
        weapons[] = {"I44_MP40", "I44_RPzB54"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 4},
            {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 3},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
		   {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 3},
           {"I44_32rd_9x19_Ball_MP40", 4}
        };
        items[] = {"ACRE_PRC343"};
    };
  
    class MATAG : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98",  8},
            {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 1},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 2},
            {"I44_5rd_792x57_mix_K98", 2},
            {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 2}
        };
        items[] = {"ACRE_PRC343"};
    };
 
    class MATAC : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 1},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 4},
            {"I44_Rocket_88mm_RPzBGr4322_RPzB54", 2}
        };
    };
 
	//1944 Era HAT is basically an Anti-Tank gun Crew, hence the rifles. There guys will crew a PaK-40 Anti-Tank Gun
	
	//Gunner
    class HATG : Rifleman {
        weapons[] = {"I44_K98k" };
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };
	//Spotter
    class HATAG : Rifleman {
        weapons[] = {"I44_K98k"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98",  8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
	//Driver or Spare
    class HATAC : Rifleman {
        weapons[] = {"I44_K98k" };
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
        };
    };
	//"Blow shit up" type Engineer
    class ENG : Rifleman {
        weapons[] = {"I44_K98k"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_SmokeGrenade_NbHgr39", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_Item_M37DemoKit", 2},
            {"I44_Mine_AT_M1", 3}
        };
        items[] = {"ACRE_PRC343"};
    };
 
	//Combat Engineer with Rifle (No Radio)
    class ENGA : Rifleman {
        weapons[] = {"I44_K98k"};
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 6},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_StiHgr24", 1},
			{"I44_SmokeGrenade_NbHgr39", 2}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 2}
        };
    };
 
	//Combat Engineer with SMG (No Radio)
    class ENGB : Rifleman {
        weapons[] = {"I44_MP40"};
        magazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 5},
            {"I44_G_HandGrenade_No82", 3},
            {"I44_HandGrenade_StiHgr24", 2},
			{"I44_SmokeGrenade_NbHgr39", 2}
        };
        ruck = "I44_Bag_G_gcoat_K98";
        ruckMagazines[] = {
            {"I44_32rd_9x19_Ball_MP40", 5},
			{"I44_HandGrenade_StiHgr24", 1},
			{"I44_SmokeGrenade_NbHgr39", 2}
        };
    };
	
	//Flamethrower Trooper, ideally put him in a combat engineer team or a rifleman to babysit him
	class ENGFT : Rifleman {
        weapons[] = {"I44_M2_flameThrower", "I44_P38"};
        magazines[] = {
            {"I44_m2_flamethrower_mag", 1},
			{"I44_8rd_9x19_Ball_P38", 2}
        };
        ruck = "I44_Backpack_M2flamethrower";
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343"};
    };
	
	
         class SN : Rifleman {
        weapons[] = {"I44_K98kZf42", "I44_P38"};
        magazines[] = {
            {"I44_5rd_792x57_AP_K98",  8},
            {"I44_8rd_9x19_Ball_P38",  5},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "I44_Binocular_M3"};
    };
 
    class SP : Rifleman {
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 8},
            {"I44_HandGrenade_StiHgr24", 1},
            {"I44_SmokeGrenade_NbHgr39", 1}
        };
        ruckMagazines[] = {
            {"I44_5rd_792x57_mix_K98", 2}
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
            {"I44_K98k", 4}
        };
        magazines[] = {
            {"I44_5rd_792x57_mix_K98", 30},
            {"I44_32rd_9x19_Ball_MP40", 10},
            {"I44_30rd_792x33_Ball_MP43", 10},
			{"I44_Rocket_149mm_PzF_60", 8},
			{"I44_20rd_792x57_Mix_FG42", 10},
            {"I44_250rd_792x57_Mix_MG42_mounted", 8},
            {"I44_HandGrenade_StiHgr24", 10},
            {"I44_SmokeGrenade_NbHgr39", 10}
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
            {"I44_K98k", 4}
        };
         magazines[] = {
            {"I44_5rd_792x57_mix_K98", 30},
            {"I44_32rd_9x19_Ball_MP40", 10},
            {"I44_30rd_792x33_Ball_MP43", 10},
			{"I44_Rocket_149mm_PzF_60", 8},
			{"I44_20rd_792x57_Mix_FG42", 10},
            {"I44_250rd_792x57_Mix_MG42_mounted", 8},
            {"I44_HandGrenade_StiHgr24", 10},
            {"I44_SmokeGrenade_NbHgr39", 10}
        };
    };
 
    class Armoured : Vehicle {
	 weapons[] = {
            {"I44_K98k", 4}
        };
         magazines[] = {
            {"I44_5rd_792x57_mix_K98", 30},
            {"I44_32rd_9x19_Ball_MP40", 10},
            {"I44_30rd_792x33_Ball_MP43", 10},
			{"I44_Rocket_149mm_PzF_60", 8},
			{"I44_20rd_792x57_Mix_FG42", 10},
            {"I44_250rd_792x57_Mix_MG42_mounted", 8},
            {"I44_HandGrenade_StiHgr24", 10},
            {"I44_SmokeGrenade_NbHgr39", 10}
        };
    };
};