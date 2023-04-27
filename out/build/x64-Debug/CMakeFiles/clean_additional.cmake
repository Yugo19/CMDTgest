# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Inventaire_cmd_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Inventaire_cmd_autogen.dir\\ParseCache.txt"
  "Inventaire_cmd_autogen"
  )
endif()
