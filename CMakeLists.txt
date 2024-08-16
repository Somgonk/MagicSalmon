cmake_minimum_required(VERSION 3.11) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(MagicSalmon)

# Source Management
file(GLOB_RECURSE SRC_FILES src/*.cpp)

# Linking and such
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME})
