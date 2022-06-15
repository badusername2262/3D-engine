#pragma once

#include "../Buffers/buffer.hpp"
#include "../Buffers/indexbuffer.hpp"
#include "../Buffers/vertexarray.hpp"

#include <glm/glm.hpp>
#include "shader.hpp"

namespace Graphics {
	
	class Renderer {
    
    protected:
    glm::vec3 pos;
    glm::vec2 size;
    glm::vec4 color;

    VertexArray* VAO;
    IndexBuffer* IBO;
    Shader& shader;
    public:
    Renderer(glm::vec3 position, glm::vec2 size, glm::vec4 color, Shader& shader)
		: pos(position), size(size), color(color), shader(shader)
	{
		VAO = new VertexArray();
		GLfloat vertices[] = 
		{
			0, 0, 0,
			0, size.y, 0, 
			size.x, size.y, 0,
			size.x, 0, 0
		};

		GLfloat colors[] =
		{
			color.x, color.y, color.z, color.w,
			color.x, color.y, color.z, color.w,
			color.x, color.y, color.z, color.w,
			color.x, color.y, color.z, color.w
		};

		VAO->addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
		VAO->addBuffer(new Buffer(colors, 4 * 4, 4), 1);

		GLushort indices[] = { 0, 1, 2, 2, 3, 0 };
		IBO = new IndexBuffer(indices, 6);
	}

	virtual ~Renderer()
	{
		delete VAO;
		delete IBO;
	}

	inline const VertexArray* getVAO() const { return VAO; }
	inline const IndexBuffer* getIBO() const { return IBO; }

	inline Shader& getShader() const { return shader; }

	void Position(glm::vec3 Pos) { pos = Pos; }
	inline const glm::vec3& getPosition() const { return pos; }
	inline const glm::vec2& getSize() const { return size; }
	inline const glm::vec4& getColor() const { return color; }
	};
}