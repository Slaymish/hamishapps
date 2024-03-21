cmake_minimum_required(VERSION 3.17)
project(hamishapp)

set(CMAKE_CXX_STANDARD 20)

# Configure include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/lib/glad/include
    ${PROJECT_SOURCE_DIR}/lib/glfw/include
    ${PROJECT_SOURCE_DIR}/lib/imgui/include
    ${PROJECT_SOURCE_DIR}/vendor
)

# Add source files
file(GLOB_RECURSE PROJECT_SOURCES
     "${PROJECT_SOURCE_DIR}/src/*.cpp"
     "${PROJECT_SOURCE_DIR}/src/views/*.cpp"
        "${PROJECT_SOURCE_DIR}/vendor/*.cpp"
)

# Add header files (optional, for IDEs to list headers)
file(GLOB_RECURSE PROJECT_HEADERS
     "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/vendor/*.h"
)

# Define the executable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS})

# Add glad source directly
set(GLAD_SOURCE ${PROJECT_SOURCE_DIR}/lib/glad/src/glad.c)
set(GLAD_INCLUDE ${PROJECT_SOURCE_DIR}/lib/glad/include/glad/glad.h)
target_sources(${PROJECT_NAME} PRIVATE ${GLAD_SOURCE})
add_library(glad ${GLAD_SOURCE} ${GLAD_INCLUDE})

# GLFW
set(GLFW_DIR "${PROJECT_SOURCE_DIR}/lib/glfw")
set(GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "Build the GLFW example programs")
set(GLFW_BUILD_TESTS OFF CACHE INTERNAL "Build the GLFW test programs")
set(GLFW_BUILD_DOCS OFF CACHE INTERNAL "Build the GLFW documentation")
set(GLFW_INSTALL OFF CACHE INTERNAL "Generate installation target")
add_subdirectory(${GLFW_DIR})

# ImGui
set(IMGUI_DIR "${PROJECT_SOURCE_DIR}/lib/imgui")
file(GLOB IMGUI_SOURCES 
    ${IMGUI_DIR}/src/*.cpp
)
add_library(imgui STATIC 
    ${IMGUI_SOURCES} 
)
target_include_directories(imgui PRIVATE 
    ${IMGUI_DIR}/include
)


# Linking
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glad "${CMAKE_DL_LIBS}")
target_link_libraries(${PROJECT_NAME} imgui "${CMAKE_DL_LIBS}")

# Definitions
target_compile_definitions(${PROJECT_NAME} PRIVATE "GLFW_INCLUDE_NONE")
