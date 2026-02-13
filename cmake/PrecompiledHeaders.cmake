# Precompiled header helper
# Usage: allegiance_add_pch(target pch_header pch_source)

function(allegiance_add_pch target pch_header pch_source)
    if(MSVC)
        target_precompile_headers(${target} PRIVATE ${pch_header})
    endif()
endfunction()
