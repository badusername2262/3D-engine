#include "window.h"

namespace Graphics
{

    bool Window::Keys[MAX_KEYS];
    bool Window::mouseButtons[MAX_BUTTONS];
    double Window::mx;
    double Window::my;

    void window_resize(GLFWwindow*, int width, int height);
    void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
    void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);

    Window::Window(const char* title, int width, int height)
      : title(title), width(width), height(height)
    {
        if (!Init())
            glfwTerminate();

        for (int i = 0; i < MAX_KEYS; i++)
        {
            Keys[i] = false;
        }

        for (int i = 0; i < MAX_BUTTONS; i++)
        {
            mouseButtons[i] = false;
        }
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
	    glfwMakeContextCurrent(window); // @suppress("Invalid arguments")
        glfwSetWindowUserPointer(window, this); // @suppress("Invalid arguments")
        glfwSetWindowSizeCallback(window, window_resize); // @suppress("Invalid arguments")
        glfwSetKeyCallback(window, key_callback); // @suppress("Invalid arguments")
        glfwSetMouseButtonCallback(window, mouse_button_callback); // @suppress("Invalid arguments")
        glfwSetCursorPosCallback(window, cursor_position_callback); // @suppress("Invalid arguments")

	    glewExperimental=GL_TRUE;
	    GLenum err=glewInit();
	    if(err!=GLEW_OK)
	    {
	        glfwTerminate();
	        std::cout<<"glewInit failed, aborting."<<std::endl;
	    }

	return true;
    }

    bool Window::isKeyPressed(unsigned int keycode)
    {
        if (keycode >= MAX_KEYS)
            return false;

        return Keys[keycode];
    }

    bool Window::isMouseButtonPressed(unsigned int button)
    {

        if (button >= MAX_BUTTONS)
            return false;

        return mouseButtons[button];
    }

    void Window::getmouseposition(double& x, double& y)
    {
    	x = mx;
    	y = my;
    }

    void Window::Clear() const
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

    bool Window::Closed() const
    {
        return glfwWindowShouldClose(window) == 1; // @suppress("Invalid arguments")
    }

    void Window::Update()
    {
        glfwSwapBuffers(window); // @suppress("Invalid arguments")
        glfwPollEvents();
    }

    void window_resize(GLFWwindow*, int width, int height)
    {
        glViewport(0, 0, width, height);
    }

    void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
    {
        Window* win = (Window*) glfwGetWindowUserPointer(window); // @suppress("Invalid arguments")
        win->Keys[key] = action != GLFW_RELEASE;
    }

    void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
    {
    	Window* win = (Window*) glfwGetWindowUserPointer(window); // @suppress("Invalid arguments")
        win->mouseButtons[button] = action != GLFW_RELEASE;
    }

    void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
    {
    	Window* win = (Window*) glfwGetWindowUserPointer(window); // @suppress("Invalid arguments")
    	win->mx = xpos;
    	win->my = ypos;
    }

};
