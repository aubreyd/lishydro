#ifndef LISHYDRO_OPTLEVEL
#define LISHYDRO_OPTLEVEL 1
#endif

#ifndef LISHYDRO_PRCLEVEL
#define LISHYDRO_PRCLEVEL 2
#endif

#ifndef LISHYDRO_LOGKIND
#if LISHYDRO_OPTLEVEL >= 3
#define LISHYDRO_LOGKIND      ESMF_LOGKIND_NONE
#elif LISHYDRO_OPTLEVEL >= 2
#define LISHYDRO_LOGKIND      ESMF_LOGKIND_MULTI_ON_ERROR
#else
#define LISHYDRO_LOGKIND      ESMF_LOGKIND_MULTI
#endif
#endif

#ifndef LISHYDRO_TYPEKIND
#if LISHYDRO_PRCLEVEL >= 2
#define LISHYDRO_TYPEKIND     ESMF_TYPEKIND_R8
#else
#define LISHYDRO_TYPEKIND     ESMF_TYPEKIND_R4
#endif
#endif

#ifndef LISHYDRO_KIND
#if LISHYDRO_PRCLEVEL >= 2
#define LISHYDRO_KIND         ESMF_KIND_R8
#else
#define LISHYDRO_KIND         ESMF_KIND_R4
#endif
#endif

#ifndef LISHYDRO_CONFIG
#define LISHYDRO_CONFIG       "lishydro.runconfig"
#endif

