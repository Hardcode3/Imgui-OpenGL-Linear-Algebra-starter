cmake_minimum_required(VERSION 2.8.12...3.24)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project("RayTracing" VERSION 1.0)

configure_file(cmake/RayTracingConfigure.h.in RayTracingConfigure.h)

option(RAYTRACING_TEST_WITH_EXECUTABLES "Compile mains" ON)
option(RAYTRACING_TEST_WITH_TESTS "Compile tests" ON)


if(WIN32)
    message(STATUS "> APPLE platform detected")
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
