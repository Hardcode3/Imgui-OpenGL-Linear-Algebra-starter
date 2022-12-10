message(STATUS "> Found sources directory")

set(target_name sources)

add_library(${target_name} STATIC "")

target_link_libraries(${target_name} PRIVATE Eigen3::Eigen)
target_link_libraries(${target_name} PRIVATE glfw)
target_link_libraries(${target_name} PRIVATE imgui)

target_sources(${target_name}
    PRIVATE
        "${PROJECT_SOURCE_DIR}/src/anisotropy.cpp"
        "${PROJECT_SOURCE_DIR}/src/solver.cpp"
        "${PROJECT_SOURCE_DIR}/src/ray_tracing.cpp"
        "${PROJECT_SOURCE_DIR}/src/models.cpp"
        "${PROJECT_SOURCE_DIR}/src/plots.cpp"
        "${PROJECT_SOURCE_DIR}/src/gui.cpp"

    PRIVATE
        "${PROJECT_SOURCE_DIR}/include/anisotropy.h"
        "${PROJECT_SOURCE_DIR}/include/solver.h"
        "${PROJECT_SOURCE_DIR}/include/ray_tracing.h"
        "${PROJECT_SOURCE_DIR}/include/models.h"
        "${PROJECT_SOURCE_DIR}/include/plots.h"
        "${PROJECT_SOURCE_DIR}/include/gui.h"
)

target_include_directories (${target_name}
    PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
        "${PROJECT_BINARY_DIR}"
)