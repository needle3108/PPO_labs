cmake_minimum_required(VERSION 3.1.0)
project (Grade)

add_definitions(-DMAPCALC)

set(CMAKE_BUILD_TYPE Release) #Debug
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")


set(INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDES})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_library(MyMap STATIC ${SOURCES})

add_executable(${PROJECT_NAME} Main.cpp)
target_link_libraries(${PROJECT_NAME} MyMap)
