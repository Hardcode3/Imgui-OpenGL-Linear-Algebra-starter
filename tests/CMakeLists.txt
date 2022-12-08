message(STATUS "> Found tests directory")

cmake_minimum_required(VERSION 3.10)


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
