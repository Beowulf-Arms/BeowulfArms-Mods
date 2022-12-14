class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayEGSpectator {
        ADDON = QUOTE(_this call FUNC(spectatorEGDisplayLoad));
    };
};

class Extended_DisplayUnload_EventHandlers {
    class RscDisplayEGSpectator {
        ADDON = QUOTE(_this call FUNC(spectatorEGDisplayUnload));
    };
};
