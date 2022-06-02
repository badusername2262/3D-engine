#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>
#include "2drenderer.hpp"

namespace Graphics{

    class Render
    {
        public:
	    virtual void submit(const Renderer* renderer) = 0;
	    virtual void flush() = 0;
    };
}