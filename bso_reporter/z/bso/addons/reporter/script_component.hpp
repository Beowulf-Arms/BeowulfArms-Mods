#define COMPONENT reporter
#define COMPONENT_BEAUTIFIED Reporter
#include "\z\bso\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_REPORTER
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_REPORTER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_REPORTER
#endif

#include "\z\bso\addons\main\script_macros.hpp"
