cmake_minimum_required(VERSION 3.0)
project(Northen CXX)

# Northen cpp source file
set(
  NORTHEN_SOURCE_FILE
  ${CMAKE_SOURCE_DIR}/src/northen.cpp
  ${CMAKE_SOURCE_DIR}/src/lexer.cpp
  ${CMAKE_SOURCE_DIR}/src/token.cpp
)

include_directories(${CMAKE_SOURCE_DIR})

# Northen static library
add_library(northen_static STATIC ${NORTHEN_SOURCE_FILE})

# Northen shared library
add_library(northen_shared SHARED ${NORTHEN_SOURCE_FILE})

# Northen console application
add_executable(nc ${CMAKE_SOURCE_DIR}/src/northen_console.cpp)
target_link_libraries(nc northen_static)
target_include_directories(nc PRIVATE ${CMAKE_SOURCE_DIR}/include)
