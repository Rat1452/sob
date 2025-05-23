// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX sob

#define AUTHOR QUOTE(SOB-dev)
#define MOD_NAME_BEAUTIFIED QUOTE(Special Operations Brigade)

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}

#include "script_debug.hpp"

#ifndef RELEASE_BUILD
//    #define DEBUG_ENABLED_COMMON
#endif

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Special Operations Brigade - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Special Operations Brigade - COMPONENT)
#endif
