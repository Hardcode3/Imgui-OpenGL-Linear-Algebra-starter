message(STATUS "> Found main directory")

add_executable (main "main.cpp")

target_link_libraries(main ${OPENGL_LIBRARIES} glfw imgui sources)

