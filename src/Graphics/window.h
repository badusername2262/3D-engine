#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#undef GLFW_DLL
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>

namespace Graphics {

  class Window
  {
  private:
    const char* title;
    int width;
    int height;
    GLFWwindow* window;
    bool  closed;
  public:
    Window(const char* title, int width, int height);
    ~Window();
    void Clear() const;
    bool Closed() const;
    void Update();
  private:
    bool Init();
  };

}
