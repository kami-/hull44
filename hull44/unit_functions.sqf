#include "hull_macros.h"

#include "\userconfig\hull\log\unit.h"
#include "logbook.h"


hull_unit_fnc_init = {
    FUN_ARGS_3(_unit,_gearConfig,_markerConfig);

    if (local _unit) then {
        if (_unit isKindOf "CAManBase") then {
            [_unit] call hull_settings_fnc_setUnitGlobalSettings;
            [_unit] call hull_unit_fnc_addEHs;
        };
        [_unit, _gearConfig select 0, _gearConfig select 1] call hull_gear_fnc_assign;
    };
    if (!isNil {_markerConfig} && {!isDedicated}) then {
        [_unit, _markerConfig select 0, _markerConfig select 1] call hull_marker_fnc_initMarker;
    };
};

hull_unit_fnc_waitForPlayer = {
    waitUntil {
        !isNull player;
    };
    ["player.initialized", [player]] call hull_event_fnc_emitEvent;
    DEBUG("hull.unit.player","Player is initialized.");
};

hull_unit_fnc_playerInit = {
    [] call hull_unit_fnc_waitForPlayer;

    [] spawn hull_acre_fnc_setPlayerFrequencies;
    [] call hull_marker_fnc_addMarkers;
    [] spawn hull_marker_fnc_updateAllMarkers;
    [] spawn hull_marker_fnc_updateCustomMarkers;
    [] call hull_mission_fnc_addPlayerEHs;
    [] spawn hull_mission_fnc_clientSafetyTimerLoop;
    [] call hull_unit_fnc_setFireTeamColors;
};

hull_unit_fnc_foreachNonPlayerUnits = {
    FUN_ARGS_1(_func);

    {
        if (!isPlayer _x) then {
            [_x] call _func;
        };
    } foreach allUnits;
};

hull_unit_fnc_addEHs = {
    FUN_ARGS_1(_unit);

    private "_ehId";
    _ehId = _unit addEventHandler ["HandleDamage", {_this call hull_unit_fnc_friendlyFireEH;}];
    _unit setVariable ["hull_eh_friendlyFire", _ehId];
    _ehId = _unit addEventHandler ["Killed", {_this call hull_unit_fnc_killedEH;}];
    _unit setVariable ["hull_eh_killed", _ehId];
};

hull_unit_fnc_addFiredEHs = {
    FUN_ARGS_1(_unit);

    private "_ehId";
    _ehId = player addEventHandler ["Fired", {deleteVehicle (_this select 6);}];
    _unit setVariable ["hull_eh_fired", _ehId];
};

hull_unit_fnc_friendlyFireEH = {
    FUN_ARGS_5(_unit,_selectionName,_damage,_source,_projectile);

    if (_selectionName == "" && {_unit != _source} && {side _unit == side _source}) then {
        DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_4("'%1' dealt '%2' damage with '%3' to '%4'!",_source,_damage,_projectile,_unit));
        [_message] call hull_common_fnc_logOnServer;
    };

    _damage;
};

hull_unit_fnc_killedEH = {
    FUN_ARGS_2(_unit,_killer);

    if (_unit != _killer && {side _unit == side _killer}) then {
        DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_2("'%1' killed '%2'!",_killer,_unit));
        [_message] call hull_common_fnc_logOnServer;
    };

    _unit removeEventHandler ["HandleDamage", _unit getVariable "hull_eh_friendlyFire"];
    _unit removeEventHandler ["Killed", _unit getVariable "hull_eh_killed"];
    _unit setVariable ["hull_eh_friendlyFire", nil];
    _unit setVariable ["hull_eh_killed", nil];
};

hull_unit_fnc_getAssignedTeam = {
    FUN_ARGS_1(_gearClass);

    DECLARE(_team) = "";
    {
        if (_gearClass == _x select 0) exitWith {_team = _x select 1};
    } foreach (["Group", "assignedTeams"] call hull_config_fnc_getArray);

    _team;
};

hull_unit_fnc_setFireTeamColors = {
    {
        DECLARE(_assignedTeam) = [_x getVariable "hull_gear_class"] call hull_unit_fnc_getAssignedTeam;
        if (_assignedTeam != "") then {
            _x assignTeam _assignedTeam;
        };
    } foreach units group player;
};