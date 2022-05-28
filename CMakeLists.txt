cmake_minimum_required(VERSION 3.0.0)
project(engine VERSION 0.1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

include(CTest)
enable_testing()

link_directories(${CMAKE_SOURCE_DIR}/lib)

find_package(OpenGL REQUIRED)

set(LIBS glfw3 opengl32 glew32)

set(Engine_HEADERS src/Buffers/buffer.h
                      src/Buffers/indexbuffer.h
                      src/Buffers/vertexarray.h
                      src/Graphics/shader.h
                      src/Graphics/window.h
                      src/Utils/camera.h
                      src/Utils/fileutils.h)

set(Engine_SOURCES main.cpp src/Buffers/buffer.cpp src/Buffers/indexbuffer.cpp src/Buffers/vertexarray.cpp src/Graphics/shader.cpp src/Graphics/window.cpp src/Utils/camera.cpp)

add_executable(engine ${Engine_SOURCES} ${Engine_HEADERS})

target_link_libraries(engine ${LIBS})
target_include_directories(engine PRIVATE include/)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

