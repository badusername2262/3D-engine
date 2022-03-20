#include "window.h"

namespace Graphics
{

  void WindowResize(GLFWwindow*, int width, int height);

  Window::Window(const char* title, int width, int height)
      : title(title), width(width), height(height)
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
      window = glfwCreateWindow(width, height, title, NULL, NULL);
      if(!window)
	{
	  std::cout << "Failed to create window!" << std::endl;
	  return false;
	}
	glfwMakeContextCurrent(window);
	glfwSetWindowSizeCallback(window, WindowResize);

	  glewExperimental=GL_TRUE;
	  GLenum err=glewInit();
	  if(err!=GLEW_OK)
	  {
	    glfwTerminate();
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
      return glfwWindowShouldClose(window) == 1;
    }

  void Window::Update()
    {
      glfwPollEvents();
      glfwSwapBuffers(window);
    }

  void WindowResize(GLFWwindow*, int width, int height)
  {
    glViewport(0, 0, width, height);
  }
};
