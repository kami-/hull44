#include "hull_macros.h"

#include "\userconfig\hull\log\postinit.h"
#include "logbook.h"


if (hull_isEnabled) then {
    [] call hull_settings_fnc_init;
    [] call hull_mission_fnc_init;

    if (!isDedicated) then {
        [] spawn hull_unit_fnc_playerInit;
        if (isServer) then {
            [] call hull_mission_fnc_serverInit;
            [hull_gear_fnc_tryAssignRadios] spawn hull_unit_fnc_foreachNonPlayerUnits;
        };
    } else {
        [] call hull_mission_fnc_serverInit;
        [hull_gear_fnc_tryAssignRadios] spawn hull_unit_fnc_foreachNonPlayerUnits;
    };
};