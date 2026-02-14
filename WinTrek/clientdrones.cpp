#include "pch.h"

// Include the drones implementation directly
// WinTrek/pch.h already includes all needed headers including drone headers
// The drones/*.cpp files start with #include "pch.h" but that will include
// drones/pch.h which has include guards - they will skip since we already
// have everything needed from WinTrek/pch.h

#include "goal.cpp"
#include "actionlib.cpp"
#include "mining.cpp"
#include "drone.cpp"
#include "drones.cpp"
