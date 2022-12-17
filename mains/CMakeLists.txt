message(STATUS "> Found main directory")

set(CMAKE_FOLDER main)

add_executable (main "main.cpp")

target_link_libraries(main sources externals)

