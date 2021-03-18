#include "logos/arco.h"
#define COLOR "\e[1;34m"

#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "",             get_bar,                 false }, \
    { "Host: ",       get_host,                true  }, \
    { "Kernel: ",     get_kernel,              true  }, \
    { "Uptime: ",     get_uptime,              false }, \
    SPACER \
    { "Packages: ",   get_packages_pacman,   false }, \
    { "Shell: ",      get_shell,             false }, \
    { "Resolution: ", get_resolution,        false }, \
    { "Terminal: ",   get_terminal,          false }, \
    SPACER \
    { "CPU: ",        get_cpu,                 true  }, \
    { "GPU: ",        get_gpu1,                true  }, \
    { "Memory: ",     get_memory,              false }, \
    SPACER \
    { "",             get_colors1,             false }, \
    { "",             get_colors2,             false }, \
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
