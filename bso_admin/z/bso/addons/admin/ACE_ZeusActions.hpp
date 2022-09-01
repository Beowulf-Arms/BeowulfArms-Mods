class ACE_ZeusActions {
    class GVAR(admin) {
        displayName = "Admin";
        icon = "\z\bso\addons\main\images\logo_bso_ca.paa";
        condition = "serverCommandAvailable '#kick'";
        insertChildren = QUOTE(call FUNC(createAdminActions));
        class GVAR(missionEnds) {
            displayName = "Mission End Conditions";
            insertChildren = QUOTE(call FUNC(createEndActions))
        };
    };
};
