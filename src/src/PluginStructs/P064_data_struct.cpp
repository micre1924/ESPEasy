#include "../PluginStructs/P064_data_struct.h"

#ifdef USES_P064

// Needed also here for PlatformIO's library finder as the .h file 
// is in a directory which is excluded in the src_filter
#include <SparkFun_APDS9960.h> // Lib is modified to work with ESP

P064_data_struct::P064_data_struct() {}


#endif // ifdef USES_P064
