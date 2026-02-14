# gen_source_mdl.cmake - Generate a source MDL from a template
#
# Called at build time via: cmake -DTEMPLATE=<path> -DNAME=<geoname>
#                                 -DFRAME=<frame> -DOUTPUT=<path> -P gen_source_mdl.cmake
#
# Performs template substitution equivalent to the legacy:
#   sed s/name/<NAME> <TEMPLATE> | sed s/initialFrame/<FRAME> >OUTPUT

file(READ "${TEMPLATE}" content)

# Replace initialFrame first (before name, to avoid partial matches)
string(REPLACE "initialFrame" "${FRAME}" content "${content}")

# Replace name only inside quoted strings (all template placeholders are quoted)
# This avoids mangling ModifiableNumber → Modifiable<name>umber
string(REPLACE "\"name" "\"${NAME}" content "${content}")

file(WRITE "${OUTPUT}" "${content}")
