#include "window.h"

namespace Graphics
{

  Window::Window(const char* title, int width, int height)
      : m_title(title), m_width(width), m_height(height)
    {
      Init();
    }

  Window::~Window()
    {
      glfwTerminate();
    }

  bool Window::Init()
    {
      if(!glfwInit())
	{
	  std::cout << "failed to initialized glfw!" << std::endl;
	  return false;
	}

      m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
      if(!m_window)
	{
	  glfwTerminate();
	  std::cout << "Failed to create window!" << std::endl;
	  return false;
	}
	glfwMakeContextCurrent(m_window);
	return true;
    }

  void Window::Clear() const
    {
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

  bool Window::Closed() const
    {
      return glfwWindowShouldClose(m_window) == 1;
    }

  void Window::Update()
    {
      glfwPollEvents();
      glfwGetFramebufferSize(m_window, &m_width, &m_height);
      glfwSwapBuffers(m_window);
    }
};
