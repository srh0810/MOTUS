# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appJeu_motus_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appJeu_motus_autogen.dir\\ParseCache.txt"
  "appJeu_motus_autogen"
  )
endif()
