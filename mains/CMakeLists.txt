message(STATUS "> Found main directory")

add_executable (main "main.cpp")

target_link_libraries (main PUBLIC
    glfw
    imgui
    Eigen3
    sources
)
