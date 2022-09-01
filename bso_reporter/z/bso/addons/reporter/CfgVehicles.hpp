class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(reporter) {
                displayName = "BSO Reporter";
                exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                class GVAR(reporter_camera) {
                    displayName = "Activate Splendid Camera";
                    condition = QUOTE(call FUNC(isAllowed));
                    statement = QUOTE(call FUNC(camera));
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                };
                /*
                class GVAR(toggle_hud) {
                    displayName = "Toggle HUD";
                    condition = QUOTE(call FUNC(isAllowed));
                    statement = QUOTE(call FUNC(toggleHud);
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotSwimming"};
                };*/
            };
        };
    };
};
