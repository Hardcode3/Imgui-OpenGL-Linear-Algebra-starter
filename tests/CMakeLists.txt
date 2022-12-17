message(STATUS "> Found tests directory")

set(CMAKE_FOLDER tests)

cmake_minimum_required(VERSION 3.10)

if(NOT TARGET sources)
    project(${PROJECT_NAME} VERSION 1.0)
    find_package(sources CONFIG REQUIRED)
    enable_testing()
endif()

add_executable(imgui_test imgui_test.cpp)
target_link_libraries(imgui_test PUBLIC externals)
add_test(NAME imgui_test COMMAND imgui_test)

add_executable(eigen_test eigen_test.cpp)
target_link_libraries(eigen_test PUBLIC externals)
add_test(NAME eigen_test COMMAND eigen_test)

add_executable(glew_glfw_test glew_glfw_test.cpp)
target_link_libraries(glew_glfw_test PUBLIC externals libglew_static)
add_test(NAME glew_glfw_test COMMAND glew_glfw_test)

add_executable(glm_test glm_test.cpp)
target_link_libraries(glm_test PUBLIC externals)
add_test(NAME glm_test COMMAND glm_test)