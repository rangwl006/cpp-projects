cmake_minimum_required(VERSION 3.10.0)

project(Decorator)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(${CMAKE_SOURCE_DIR}/gun_decorator)
add_subdirectory(${CMAKE_SOURCE_DIR}/text_decorator)

add_executable(${PROJECT_NAME} source.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC Gun Text)