#include "logos/arco.h"
#define COLOR "\e[1;34m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    SPACER \
    SPACER \
    { "Kernel: ",     get_kernel,              true  }, \
    { "Uptime: ",     get_uptime,              false }, \
    { "Packages: ",   get_packages_pacman,   false }, \
    { "Shell: ",      get_shell,             false }, \
    { "Resolution: ", get_resolution,        false }, \
    { "Terminal: ",   get_terminal,          false }, \
    { "CPU: ",        get_cpu,                 true  }, \
    { "GPU: ",        get_gpu1,                true  }, \
    { "Memory: ",     get_memory,              false }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"), \
   REMOVE("(TM)"), \
   REMOVE("Dual-Core"), \
   REMOVE("Quad-Core"), \
   REMOVE("Six-Core"), \
   REMOVE("Eight-Core"), \
   REMOVE("Core"), \
   REMOVE("CPU"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
}
