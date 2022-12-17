cmake_minimum_required(VERSION 2.8.12...3.24)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project("RayTracing" VERSION 1.0)

configure_file(cmake/RayTracingConfigure.h.in RayTracingConfigure.h)

# internal targets
option(RAYTRACING_TEST_WITH_EXECUTABLES "Compile mains" ON)
option(RAYTRACING_TEST_WITH_TESTS "Compile tests" ON)

# external dependencies
option(RAYTRACING_CLONE_GLEW "Initialize glew from remote repository as git submodule" ON)
option(RAYTRACING_CLONE_GLFW "Initialize glfw from remote repository as git submodule" ON)
option(RAYTRACING_CLONE_GLM "Initialize glm from remote repository as git submodule" ON)
option(RAYTRACING_CLONE_EIGEN "Initialize Eigen3 from remote repository as git submodule" ON)
option(RAYTRACING_CLONE_IMGUI "Initialize imgui from remote repository as git submodule" ON)

if(WIN32)
    message(STATUS "> Windows platform detected")
elseif(UNIX)
    if(APPLE)
        message(STATUS "> APPLE platform detected")
    else()
        message(STATUS "> NON APPLE UNIX platform detected")
    endif()
else()
    message(NOTICE "> UNRECOGNIZED platform detected")
endif()

message(STATUS "> Running on ${CMAKE_SYSTEM_NAME}")

add_subdirectory(external)
add_subdirectory(src)

if (RAYTRACING_TEST_WITH_EXECUTABLES)
    message (STATUS "> Configuring RayTracing with executables")
    add_subdirectory (mains)
endif ()

if (RAYTRACING_TEST_WITH_TESTS)
    enable_testing ()
    message (STATUS "> Configuring RayTracing with tests")
    add_subdirectory (tests)
endif ()
