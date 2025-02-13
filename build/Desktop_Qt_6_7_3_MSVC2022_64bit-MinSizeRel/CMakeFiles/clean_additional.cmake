# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles\\Genimon_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Genimon_autogen.dir\\ParseCache.txt"
  "Genimon_autogen"
  )
endif()
