#pragma once

#include "2drenderer.hpp"
#include "../Buffers/indexbuffer.hpp"

namespace Graphics {

#define RENDERER_MAX_SPRITES	60000
#define RENDERER_VERTEX_SIZE	sizeof(VertexData)
#define RENDERER_SPRITE_SIZE	RENDERER_VERTEX_SIZE * 4
#define RENDERER_BUFFER_SIZE	RENDERER_SPRITE_SIZE * RENDERER_MAX_SPRITES
#define RENDERER_INDICES_SIZE	RENDERER_MAX_SPRITES * 6

#define SHADER_VERTEX_INDEX 0
#define SHADER_COLOR_INDEX	1

	class BatchRenderer2D : public Renderer
	{
	private:
		GLuint VAO;
		GLuint VBO;
		IndexBuffer* IBO;
		GLsizei IndexCount;
		VertexData* Buffer;
	public:

	BatchRenderer2D()
	{
		init();
	}

	~BatchRenderer2D()
	{
		delete IBO;
		glDeleteBuffers(1, &VBO);
	}


	void begin()
	{
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		Buffer = (VertexData*)glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
	}

	void submit(const Renderer* renderable)
	{
		const glm::vec3& position = renderable->getPosition();
		const glm::vec2& size = renderable->getSize();
		const glm::vec4& color = renderable->getColor();

		Buffer->vertex = position;
		Buffer->color = color;
		Buffer++;

		Buffer->vertex = glm::vec3(position.x, position.y + size.y, position.z);
		Buffer->color = color;
		Buffer++;

		Buffer->vertex = glm::vec3(position.x + size.x, position.y + size.y, position.z);
		Buffer->color = color;
		Buffer++;

		Buffer->vertex = glm::vec3(position.x + size.x, position.y, position.z);
		Buffer->color = color;
		Buffer++;

		IndexCount += 6;
	}

	void end()
	{
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

	void flush()
	{
		glBindVertexArray(VAO);
		IBO->bind();

		glDrawElements(GL_TRIANGLES, IndexCount, GL_UNSIGNED_INT, NULL);

		IBO->unbind();
		glBindVertexArray(0);

		IndexCount = 0;
	}
    private:
	void init()
	{
		glGenVertexArrays(1, &VAO);
		glGenBuffers(1, &VBO);

		glBindVertexArray(VAO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, RENDERER_BUFFER_SIZE, NULL, GL_DYNAMIC_DRAW);
		glEnableVertexAttribArray(SHADER_VERTEX_INDEX);
		glEnableVertexAttribArray(SHADER_COLOR_INDEX);
		glVertexAttribPointer(SHADER_VERTEX_INDEX, 3, GL_FLOAT, GL_FALSE, RENDERER_VERTEX_SIZE, (const GLvoid*)0);
		glVertexAttribPointer(SHADER_COLOR_INDEX, 4, GL_FLOAT, GL_FALSE, RENDERER_VERTEX_SIZE, (const GLvoid*)(3 * sizeof(GLfloat)));
		glBindBuffer(GL_ARRAY_BUFFER, 0);

		GLuint* indices = new GLuint[RENDERER_INDICES_SIZE];

		int offset = 0;
		for (int i = 0; i < RENDERER_INDICES_SIZE; i += 6)
		{
			indices[  i  ] = offset + 0;
			indices[i + 1] = offset + 1;
			indices[i + 2] = offset + 2;

			indices[i + 3] = offset + 2;
			indices[i + 4] = offset + 3;
			indices[i + 5] = offset + 0;

			offset += 4;
		}

		IBO = new IndexBuffer(indices, RENDERER_INDICES_SIZE);

		glBindVertexArray(0);
	} };
}
