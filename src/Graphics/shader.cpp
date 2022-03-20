#include "shader.h"

#include <GL/glew.h>

namespace Graphics {

  Shader::Shader(const char* vertpath, const char* fragpath)
      : vertp(vertpath), fragp(fragpath)
  {
    shaderID = load();
  }

  GLuint Shader::load()
  {

    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);

    std::string vertStrSource = Utils::read_file(vertp);
    std::string fragStrSource = Utils::read_file(fragp);

    const char* vertSource = vertStrSource.c_str();
    const char* fragSource = fragStrSource.c_str();

    const GLchar* source = vertSource;
    glShaderSource(vertexShader, 1, &source, 0);

    // Compile the vertex shader
    glCompileShader(vertexShader);

    GLint isCompiled = 0;
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &isCompiled);
    if(isCompiled == GL_FALSE)
    {
    	GLint maxLength = 0;
    	glGetShaderiv(vertexShader, GL_INFO_LOG_LENGTH, &maxLength);

    	// The maxLength includes the NULL character
    	std::vector<GLchar> infoLog(maxLength);
    	glGetShaderInfoLog(vertexShader, maxLength, &maxLength, &infoLog[0]);

    	// We don't need the shader anymore.
    	glDeleteShader(vertexShader);

    	std::cout << "ahhh vertex no worky" << std::endl;

    	// In this simple program, we'll just leave
    	return 0;
    }

    // Create an empty fragment shader handle
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

    // Send the fragment shader source code to GL
    // Note that std::string's .c_str is NULL character terminated.
    source = fragSource;
    glShaderSource(fragmentShader, 1, &source, 0);

    // Compile the fragment shader
    glCompileShader(fragmentShader);

    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &isCompiled);
    if (isCompiled == GL_FALSE)
    {
    	GLint maxLength = 0;
    	glGetShaderiv(fragmentShader, GL_INFO_LOG_LENGTH, &maxLength);

    	// The maxLength includes the NULL character
    	std::vector<GLchar> infoLog(maxLength);
    	glGetShaderInfoLog(fragmentShader, maxLength, &maxLength, &infoLog[0]);

    	// We don't need the shader anymore.
    	glDeleteShader(fragmentShader);
    	// Either of them. Don't leak shaders.
    	glDeleteShader(vertexShader);

    	std::cout << "ahhh fragment no worky" << std::endl;

    	// In this simple program, we'll just leave
    	return 0;
    }

    // Vertex and fragment shaders are successfully compiled.
    // Now time to link them together into a program.
    // Get a program object.
    shaderID = glCreateProgram();
    GLuint program = shaderID;

    // Attach our shaders to our program
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);

    // Link our program
    glLinkProgram(program);

    // Note the different functions here: glGetProgram* instead of glGetShader*.
    GLint isLinked = 0;
    glGetProgramiv(program, GL_LINK_STATUS, (int *)&isLinked);
    if (isLinked == GL_FALSE)
    {
    	GLint maxLength = 0;
    	glGetProgramiv(program, GL_INFO_LOG_LENGTH, &maxLength);

    	// The maxLength includes the NULL character
    	std::vector<GLchar> infoLog(maxLength);
    	glGetProgramInfoLog(program, maxLength, &maxLength, &infoLog[0]);

    	// We don't need the program anymore.
    	glDeleteProgram(program);
    	// Don't leak shaders either.
    	glDeleteShader(vertexShader);
    	glDeleteShader(fragmentShader);

    	// Use the infoLog as you see fit.

    	// In this simple program, we'll just leave
    	return 0;
    }

    // Always detach shaders after a successful link.
    glDetachShader(program, vertexShader);
    glDetachShader(program, fragmentShader);

    return shaderID;
  }

  Shader::~Shader()
  {
    glDeleteProgram(shaderID);
  }

  void Shader::bind() const
  {
    glUseProgram(shaderID);
  }

  void Shader::unbind() const
  {
    glUseProgram(0);
  }
}
