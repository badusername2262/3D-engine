cmake_minimum_required(VERSION 3.0.0)
project(engine VERSION 0.1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)


link_directories(${CMAKE_SOURCE_DIR}/lib)

find_package(OpenGL REQUIRED)

set(LIBS glfw3 opengl32 glew32 ImGui box2d)

set(Engine_HEADERS src/Buffers/buffer.hpp
                   src/Buffers/indexbuffer.hpp
                   src/Buffers/vertexarray.hpp
                   src/Graphics/shader.hpp
                   src/Graphics/window.hpp
                   src/Utils/camera.hpp
                   src/Utils/fileutils.hpp)

set(Engine_SOURCES src/main.cpp
		           src/Buffers/buffer.cpp
		           src/Buffers/indexbuffer.cpp
		           src/Buffers/vertexarray.cpp
		           src/Graphics/shader.cpp
		           src/Graphics/window.cpp
   		           src/Utils/camera.cpp)

add_executable(engine ${Engine_SOURCES} ${Engine_HEADERS})

target_link_libraries(engine ${LIBS})
target_include_directories(engine PRIVATE include/)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})