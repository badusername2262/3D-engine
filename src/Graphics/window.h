#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>

namespace Graphics {

  class Window
  {
  private:
    const char* m_title;
    int m_width;
    int m_height;
    GLFWwindow* m_window;
    bool  m_closed;
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
