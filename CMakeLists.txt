cmake_minimum_required(VERSION 3.0.0)
project(engine VERSION 0.1.0)
project(ImGui)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)
set(OpenGL_GL_PREFERENCE "GLVND")

link_directories(${CMAKE_SOURCE_DIR}/lib)

find_package(OpenGL REQUIRED)

set(LIBS glfw3 OpenGL GLEW box2d)

set(Engine_HEADERS src/Buffers/
                   src/Graphics/
                   src/Utils/)

set(ImGui_sources include/imgui/imgui.cpp include/imgui/imgui_demo.cpp include/imgui/imgui_draw.cpp include/imgui/imgui_impl_glfw.cpp include/imgui/imgui_impl_opengl3.cpp include/imgui/imgui_tables.cpp include/imgui/imgui_widgets.cpp)

set(Engine_SOURCES main.cpp src/Graphics/window.cpp src/Utils/camera.cpp)

add_executable(engine ${Engine_SOURCES} ${ImGui_sources} bin/engine.rc)

target_link_libraries(engine ${LIBS})
target_include_directories(engine PRIVATE include/ ${Engine_HEADERS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})