#pragma once

#include "../Buffers/buffer.hpp"
#include "../Buffers/indexbuffer.hpp"
#include "../Buffers/vertexarray.hpp"

#include <glm/glm.hpp>
#include "shader.hpp"

namespace Graphics {
	
	struct VertexData
	{
		glm::vec3 vertex;
		glm::vec4 color;
	};

	class Renderer {
    
    protected:
    glm::vec3 pos;
    glm::vec2 size;
    glm::vec4 colour;

    public:
    Renderer(glm::vec3 position, glm::vec2 size, glm::vec4 color)
		: pos(position), size(size), colour(color)
	{ }

	virtual ~Renderer() { }

	inline const glm::vec3& getPosition() const { return pos; }
	inline const glm::vec2& getSize() const { return size; }
	inline const glm::vec4& getColor() const { return colour; }
	};
}