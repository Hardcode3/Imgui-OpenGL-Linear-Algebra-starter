cmake_minimum_required(VERSION 2.8.12...3.24)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED True)

project ("RayTracing" VERSION 1.0)

configure_file (cmake/RayTracingConfigure.h.in RayTracingConfigure.h)

option (RAYTRACING_TEST_WITH_EXECUTABLES "Compile mains" ON)
option (RAYTRACING_TEST_WITH_TESTS "Compile tests" ON)

add_subdirectory (external)
add_subdirectory (src)

find_package(imgui CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(Eigen3 CONFIG REQUIRED)

if (RAYTRACING_TEST_WITH_EXECUTABLES)
    message (STATUS "Configuring RayTracing with executables")
    add_subdirectory (mains)
endif ()

if (RAYTRACING_TEST_WITH_TESTS)
    enable_testing ()
    message (STATUS "Configuring RayTracing with tests")
    add_subdirectory (tests)
endif ()

