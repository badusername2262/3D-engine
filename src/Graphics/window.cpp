#include "window.h"

namespace Graphics
{

  void WindowResize(GLFWwindow*, int width, int height);

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
	  std::cout << "Failed to create window!" << std::endl;
	  return false;
	}
	glfwMakeContextCurrent(m_window); // @suppress("Invalid arguments")
	glfwSetWindowSizeCallback(m_window, WindowResize); // @suppress("Invalid arguments")

	  glewExperimental=GL_TRUE;
	  GLenum err=glewInit();
	  if(err!=GLEW_OK)
	  {
	    //Problem: glewInit failed, something is seriously wrong.
	    std::cout<<"glewInit failed, aborting."<<std::endl;
	  }

	return true;
    }

  void Window::Clear() const
    {
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

  bool Window::Closed() const
    {
      return glfwWindowShouldClose(m_window) == 1; // @suppress("Invalid arguments")
    }

  void Window::Update()
    {
      glfwPollEvents();
      glfwSwapBuffers(m_window); // @suppress("Invalid arguments")
    }

  void WindowResize(GLFWwindow*, int width, int height)
  {
    glViewport(0, 0, width, height);
  }
};
