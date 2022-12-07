message(STATUS "> Found tests directory")

cmake_minimum_required(VERSION 3.10)

if((NOT Eigen3) OR (NOT Eigen3_INCLUDE_DIR))
    find_package(Eigen3 CONFIG REQUIRED)
endif()

if((NOT glfw3) OR (NOT glfw3_INCLUDE_DIR))
    find_package(glfw3 CONFIG REQUIRED)
endif()

if(NOT TARGET sources)
    project(${PROJECT_NAME} VERSION 1.0)
    find_package(sources CONFIG REQUIRED)
    enable_testing()
endif()

add_executable (imgui_test imgui_test.cpp)
target_link_libraries (imgui_test PUBLIC imgui)
add_test (NAME imgui_test COMMAND imgui_test)

add_executable(eigen_test eigen_test.cpp)
target_link_libraries(eigen_test PUBLIC Eigen3::Eigen)
add_test (NAME eigen_test COMMAND eigen_test)