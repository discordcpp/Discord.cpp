# CMakeList.txt : CMake project for dmoe, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project (discordcpp)
set (CMAKE_BUILD_TYPE Debug)

#include *.h files under include folder and  
#the project's output folder e.g. Debug
include_directories (include ${PROJECT_BINARY_DIR})

#compile all *.cpp source files under src folder
file (GLOB SOURCES "src/*.cpp")


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

#output library export file *.lib and
#output macro definitions include file
include (GenerateExportHeader)
add_library(discordcpp SHARED ${SOURCES})
GENERATE_EXPORT_HEADER (discordcpp
    BASE_NAME discordcpp
    EXPORT_MACRO_NAME discordcpp_EXPORT
    EXPORT_FILE_NAME discordcpp_Export.h
    STATIC_DEFINE discordcpp_BUILT_AS_STATIC
)
