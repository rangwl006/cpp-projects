cmake_minimum_required(VERSION 3.10)

project(Example)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(${CMAKE_SOURCE_DIR}/usb_adapter)

add_executable(Example source.cpp)
target_link_libraries(Example PUBLIC Adapter)