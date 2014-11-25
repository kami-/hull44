#include "hull_macros.h"

class CfgPatches {
    class Hull44 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"Extended_EventHandlers", "CBA_MAIN"};
        author[] = {"Kami","Ark"};
        authorUrl = "https://github.com/kami-";
    };
};

class Extended_PreInit_EventHandlers {
    class Hull44 {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\hull44\hull_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Hull44 {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\hull44\hull_postinit.sqf';";
    };
};

class CfgVehicles {
    class Logic;

    class Hull_DisableGroupMarkers_Module : Logic {
        displayName = "Hull: Disable Group Markers";
        icon = ADDON_PATH(resources\hull_module.paa);
        model = "\ca\weapons\empty";
        vehicleClass = "Modules";
        class Eventhandlers {
            init = "hull_marker_isGroupEnabled = false;";
        };
    };

    class Hull_DisableFireTeamMarkers_Module : Logic {
        displayName = "Hull: Disable Fire Team Member Markers";
        icon = ADDON_PATH(resources\hull_module.paa);
        model = "\ca\weapons\empty";
        vehicleClass = "Modules";
        class Eventhandlers {
            init = "hull_marker_isFireTeamEnabled = false;";
        };
    };
};

#include "hull.h"