cmake_minimum_required(VERSION 3.22)

project(kdnn_gtest_proj)
enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O0")

# set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
# set(CONV_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

#set(CONV_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB_RECURSE GTEST_SRC_FILES_LIST "${PROJECT_SOURCE_DIR}/src/*.cpp")

#include_directories(${CONV_HEADERS_DIR})

add_executable(kdnn_gest ${GTEST_SRC_FILES_LIST})
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(kdnn_gest gtest_main gtest)
# add_subdirectory(src src)
# add_subdirectory(test test)