#define STATIC_LINE_ACTIONS class ACE_SelfActions { \
            class dega_static_line { \
                displayName = "Static Line"; \
                condition = "true"; \
                statement = ""; \
                insertChildren = "_this call DEGA_fnc_insertActions"; \
            }; \
        };

class Air;
class Helicopter: Air {
    STATIC_LINE_ACTIONS
};
class Plane: Air {
    STATIC_LINE_ACTIONS
};
