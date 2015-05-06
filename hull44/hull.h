#include "hull_macros.h"

class Hull {
    isEnabled = 1;

    #include "mission_params.h"

    class Gear {
        #include "gear\factions.h"

        #include "gear\Default.h"
        #include "gear\I44_US.h"
        #include "gear\I44_BR.h"
        #include "gear\I44_GER.h"

        unitBaseClass = "Rifleman";
        vehicleBaseClass = "Vehicle";
    };

    class Briefing {
        blufor = ADDON_PATH(briefing\blufor.sqf);
        opfor = ADDON_PATH(briefing\opfor.sqf);
        indfor = ADDON_PATH(briefing\indfor.sqf);
        civilian = ADDON_PATH(briefing\civilian.sqf);
    };

    class Group {
        assignedTeams[] = {
            {"FTL", "RED"},
            {"AR", "BLUE"},
            {"AAR", "BLUE"},
            {"RAT", "RED"}
        };
    };

    class Marker {
        isGroupEnabled = 1;
        isFireTeamEnabled = 1;

        defaultDelay = 4;

        class MedicMarker {
            size[] = {0.5, 0.5};
        };

        class FireTeamMemberMarker {
            color = "ColorYellow";
            size[] = {0.6, 0.6};
        };

        class DefaultCustomMarker {
            shape = "ICON";
            type = "Dot";
            color = "ColorPink";
            size[] = {1, 1};
            text = "";
        };
    };

    class ACRE {
        class ShortRange {
            default = "ACRE_PRC343";
            radios[] = {"ACRE_PRC343"};
            baseFrequency = 2400;
        };

        class LongRange {
            default = "ACRE_PRC343";
            radios[] = {"ACRE_PRC148", "ACRE_PRC148_UHF", "ACRE_PRC117F", "ACRE_PRC119", "ACRE_PRC152"};
            baseFrequency = 32;
        };

        class Steps {
            channel = 1;
            west = 0.2;
            east = 0.4;
            resistance = 0.6;
            default = 0.8;
        };
    };

    class I44 {
        I44_ADD_anims = 1;                              // MMG prone animations
        I44_Weapon_Resting = 1;                         // Weapon Resting
        I44_DS_Construction = 1;                        // Construction
        I44_WND_enabled = 1;                            // Wounding - Enable Player-effects
        I44_WND_AI_disabled = 1;                        // Wounding - Disable AI-effects
        I44_HS_enabled = 1;                             // Hand signals
        I44_tankPenetration = 1;                        // Armor Penetration | Additional Effects
        I44_boltAction = 1;                             // Bolt Action Animations
        I44_Overpressure = 0;                           // Overpressure
        I44_parachutes = 0;                             // Parachutes on Ground
    };

    class General {
        addRating = 999999;                             // Rating added to units, to supress negative ratings
        BIS_noCoreConversations = 1;                    // Disables BIS unit conversations
        enableSaving = 0;                               // Enables game saving
    };

    class GarbageCollector {
        isEnabled = 1;
        canRemoveCorpses = 1;
        canRemoveWrecks = 1;
        canRemoveGroups = 1;
        corpseLimit = 40;
        corpseMaxTime = 600;
        wreckLimit = 10;
        wreckMaxTime = 600;
        groupMaxTime = 360;
        maxTimeModifier = 0.7;
    };
};