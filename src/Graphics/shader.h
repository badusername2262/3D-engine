#pragma once

#include <GL/glew.h>
#include <iostream>
#include <vector>
#include "../Utils/fileutils.h"

namespace Graphics {

  class Shader
  {
  private:
    GLuint shaderID;
    const char* vertp;
    const char* fragp;
  public:
    Shader(const char* vertpath, const char* fragpath);
    ~Shader();

    void bind() const;
    void unbind() const;
  private:
    GLuint load();
  };

}
