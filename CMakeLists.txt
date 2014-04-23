cmake_minimum_required (VERSION 2.8)
project (OSEC)

# The version number: 0.1
set (OSEC_VERSION_MAJOR 0)
set (OSEC_VERSION_MINOR 1)

# enable c++11
if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11 -stdlib=libc++")
endif()
# MSVC does not require any special flags for c++11 support

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# create executable
add_executable(osec
               ${CMAKE_CURRENT_SOURCE_DIR}/cli/cli.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/src/App.cpp)

# find libraries
find_library(rgp-log librgp-log.a)
find_library(rgp-chord librgp-chord.a)

#### check if all required libraries were found

# rgp-log
if(${rgp-log} STREQUAL "rgp-log-NOTFOUND")
    message(FATAL_ERROR "Couldn't find the 'external_lib' librgp-log.a")
endif()
message(STATUS "Found 'RGP-Log' at: ${rgp-log}")

# rgp-chord
if(${rgp-chord} STREQUAL "rgp-chord-NOTFOUND")
    message(FATAL_ERROR "Couldn't find the 'external_lib' librgp-chord.a")
endif()
message(STATUS "Found 'RGP-Chord' at: ${rgp-chord}")
####

# link libraries
target_link_libraries(osec rgp-log)
target_link_libraries(osec rgp-chord)

# installation 
INSTALL(TARGETS osec
  RUNTIME DESTINATION bin)
