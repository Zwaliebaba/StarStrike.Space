#ifndef _ALLEGIANCE_COMPAT_H_
#define _ALLEGIANCE_COMPAT_H_

// Allegiance Compatibility Header
// Provides compatibility for legacy code with modern compilers

#include <cmath>
#include <cstdlib>

// Bring std::abs into global namespace for float/double compatibility
// Modern MSVC includes these in <cstdlib> so we just need the using declarations
using std::abs;
using std::fabs;

#endif // _ALLEGIANCE_COMPAT_H_
