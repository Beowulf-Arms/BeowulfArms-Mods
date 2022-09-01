class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(admin) {
                displayName = "Admin";
                condition = "serverCommandAvailable '#kick'";
                exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                statement = "true";
                insertChildren = QUOTE(call FUNC(createAdminActions));
                icon = "\z\bso\addons\main\images\logo_bso_ca.paa";
                class bso_end_mission { // Name needed for legacy frameworks
                    displayName = "Mission End Conditions";
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                    insertChildren = QUOTE(call FUNC(createEndActions));
                };
                class GVAR(showDialog) {
                    displayName = "Open Admin Dialog";
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                    statement = QUOTE(call FUNC(showDialog));
                };
                class GVAR(unfuckAcre) {
                    displayName = "Force perfect comms";
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                    condition = QUOTE(!GVAR(acrePerfectModel));
                    statement = QUOTE([true] call FUNC(makeAcrePerfect));
                    icon = "\idi\acre\addons\ace_interact\data\icons\antenna.paa";
                };
                class GVAR(resetAcre) {
                    displayName = "Reset transmission function";
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                    condition = QGVAR(acrePerfectModel);
                    statement = QUOTE([false] call FUNC(makeAcrePerfect));
                    icon = "\idi\acre\addons\ace_interact\data\icons\antenna.paa";
                };
                class GVAR(openArsenal) {
                    displayName = "Open Arsenal";
                    statement = "[player, player, true] call ace_arsenal_fnc_openBox";
                };
            };
        };
    };
};
