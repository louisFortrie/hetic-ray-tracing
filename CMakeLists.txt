cmake_minimum_required(VERSION 3.5.0)
project(raytracer VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(raytracer main.cpp)

# Add these lines
target_include_directories(raytracer PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/raymath"
                           )
target_include_directories(raytracer PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/rayImage"
)

target_include_directories(raytracer PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROJECT_SOURCE_DIR}/lodepng"
)

add_subdirectory(./raymath)
add_subdirectory(./rayImage)
add_subdirectory(./lodepng)

target_link_libraries(raytracer PUBLIC raymath)
target_link_libraries(raytracer PUBLIC rayImage)
target_link_libraries(raytracer PUBLIC lodepng)
