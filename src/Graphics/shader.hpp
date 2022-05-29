#pragma once

#include <vector>
#include <iostream>
#include <GL/glew.h>

#include "../Utils/camera.hpp"
#include <glm/glm.hpp>
#include "../Utils/fileutils.hpp"

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

        GLint getUniformLocation(const GLchar* name);

        void setUniform1i(const GLchar* name, int value);
        void setUniform1f(const GLchar* name, float value);
        void setUniform2f(const GLchar* name, const glm::vec2& vector);
        void setUniform3f(const GLchar* name, const glm::vec3& vector);
        void setUniform4f(const GLchar* name, const glm::vec4& vector);
        void setUniformMat4(const GLchar* name, const Graphics::Camera& matrix);

        void bind() const;
        void unbind() const;
    private:
        GLuint load();
    };
    
}
