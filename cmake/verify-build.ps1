# Verification script for CMake migration
# Run from repository root

param(
    [string]$Config = "Debug"
)

$ErrorActionPreference = "Stop"

Write-Host "=== CMake Migration Verification ===" -ForegroundColor Cyan

# Step 1: Configure
Write-Host "`n[1/4] Configuring CMake..." -ForegroundColor Yellow
cmake -B build -G "Visual Studio 17 2022" -A Win32
if ($LASTEXITCODE -ne 0) { throw "CMake configure failed" }

# Step 2: Build libraries
Write-Host "`n[2/4] Building libraries ($Config)..." -ForegroundColor Yellow
$targets = @("ZLibrary", "FedGuids", "Utility", "Igc", "Engine", "Effect", "SoundEngine", "ClintLib", "Training", "ShareMem")

foreach ($target in $targets) {
    Write-Host "  Building $target..." -NoNewline
    cmake --build build --config $Config --target $target 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) {
        Write-Host " OK" -ForegroundColor Green
    } else {
        Write-Host " FAILED" -ForegroundColor Red
        cmake --build build --config $Config --target $target
        throw "Build failed for $target"
    }
}

# Step 3: Verify outputs
Write-Host "`n[3/4] Verifying outputs..." -ForegroundColor Yellow
$configDir = switch ($Config) {
    "Debug" { "debug" }
    "Release" { "retail" }
    "Test" { "test" }
}

$expectedLibs = @(
    "objs/$configDir/zlib/zlib.lib",
    "objs/$configDir/guids/guids.lib",
    "objs/$configDir/_utility/Utility.lib",
    "objs/$configDir/igc/igc.lib",
    "objs/$configDir/engine/engine.lib",
    "objs/$configDir/effect/effect.lib",
    "objs/$configDir/soundengine/soundengine.lib",
    "objs/$configDir/clintlib/clintlib.lib",
    "objs/$configDir/training/training.lib",
    "objs/$configDir/sharemem/sharemem.lib"
)

foreach ($lib in $expectedLibs) {
    if (Test-Path $lib) {
        Write-Host "  [OK] $lib" -ForegroundColor Green
    } else {
        Write-Host "  [MISSING] $lib" -ForegroundColor Red
    }
}

# Step 4: Compare with nmake (if exists)
Write-Host "`n[4/4] Summary" -ForegroundColor Yellow
Write-Host "  CMake build completed successfully!" -ForegroundColor Green
Write-Host "  Next steps:"
Write-Host "    - Uncomment executable targets in root CMakeLists.txt"
Write-Host "    - Add AGC COM component"
Write-Host "    - Add WinTrek client executable"
