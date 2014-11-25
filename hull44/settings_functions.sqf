#include "hull_macros.h"

#include "\userconfig\hull\log\settings.h"
#include "logbook.h"

hull_settings_fnc_init = {
    [] call hull_settings_fnc_setStandardI44Settings;
    [] call hull_settings_fnc_setNonStandardI44Settings;
    [] call hull_settings_fnc_setNonStandardGeneralSettings;
    [] call hull_settings_fnc_setModuleVariables;
};

hull_settings_fnc_setStandardI44Settings = {
    DECLARE(_rawVariables) = [
        ["I44_ADD_anims", CONFIG_TYPE_BOOL],
        ["I44_DS_Construction", CONFIG_TYPE_BOOL],
        ["I44_WND_enabled", CONFIG_TYPE_BOOL],
        ["I44_WND_AI_disabled", CONFIG_TYPE_BOOL],
        ["I44_HS_enabled", CONFIG_TYPE_BOOL],
        ["I44_tankPenetration", CONFIG_TYPE_BOOL],
        ["I44_boltAction", CONFIG_TYPE_BOOL],
        ["I44_Overpressure", CONFIG_TYPE_BOOL]
    ];

    {
        private ["_variable", "_value"];
        _variable = _x select 0;
        _value = ["I44", _variable] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        missionNamespace setVariable [_variable, _value];
        DEBUG("hull.settings.i44",FMT_2("I44 variable '%1' is set to '%2'.",_variable,_value));
    } foreach _rawVariables;
};


hull_settings_fnc_setNonStandardI44Settings = {
    if (["I44", "I44_parachutes"] call hull_config_fnc_getBool) then {
        I44_parachutes = true;
        I44_parachute_life = 5*60;
        DEBUG("hull.settings.i44","I44 parachutes on ground is enabled.");
    };
};

hull_settings_fnc_setNonStandardGeneralSettings = {
    if (!(["General", "enableSaving"] call hull_config_fnc_getBool)) then {
        enableSaving [false, false];
        DEBUG("hull.settings","Saving is disabled.");
    };
};

hull_settings_fnc_setUnitGlobalSettings = {
    FUN_ARGS_1(_unit);

    _unit addRating (["General", "addRating"] call hull_config_fnc_getNumber);
    DEBUG("hull.settings",FMT_3("Added '%1' rating to unit '%2'. New rating is '%3'.",AS_ARRAY_2("General", "addRating") call hull_config_fnc_getNumber,_unit,rating _unit));
    _unit setVariable ["BIS_noCoreConversations", ["General", "BIS_noCoreConversations"] call hull_config_fnc_getBool, true];
    DEBUG("hull.settings",FMT_2("Unit '%1' variable 'BIS_noCoreConversations' is set to '%2'.",_unit,AS_ARRAY_2("General", "BIS_noCoreConversations") call hull_config_fnc_getBool));
};

hull_settings_fnc_setModuleVariables = {
    if (isNil {hull_marker_isGroupEnabled}) then {
        hull_marker_isGroupEnabled = ["Marker", "isGroupEnabled"] call hull_config_fnc_getBool;
        DEBUG("hull.settings.marker",FMT_1("Group marker module was not found. Setting Group Marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isGroupEnabled") call hull_config_fnc_getBool));
    };
    if (isNil {hull_marker_isFireTeamEnabled}) then {
        hull_marker_isFireTeamEnabled = ["Marker", "isFireTeamEnabled"] call hull_config_fnc_getBool;
        DEBUG("hull.settings.marker",FMT_1("Fire Team Member marker module was not found. Setting Fire Team Member marker enabled from config to '%1'.",AS_ARRAY_2("Marker", "isFireTeamEnabled") call hull_config_fnc_getBool));
    };
};
