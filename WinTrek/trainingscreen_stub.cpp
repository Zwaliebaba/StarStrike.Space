// trainingscreen_stub.cpp
// Stub implementation for training screen functions when AGC is not available
// These functions are normally implemented in trainingscreen.cpp which requires AGC COM headers

#include "pch.h"

// Global variable that trainingscreen would export
TRef<ModifiableNumber> g_pnumberMissionNumber;

// Stub function implementations
TRef<Screen> CreateTrainingScreen(Modeler* pmodeler)
{
    // Training screen requires AGC COM component which is not built in CMake yet
    // Return nullptr to indicate training is unavailable
    return nullptr;
}

void KillTrainingStandaloneGame(void)
{
    // No-op stub - training standalone games not supported without AGC
}
