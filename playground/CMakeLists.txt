
set (target gfx_playground)
add_executable(${target} main.cpp)
target_link_libraries(${target} PRIVATE glfw glm glad-gl4)
