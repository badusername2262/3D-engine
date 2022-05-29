#include "vertexarray.hpp"

namespace Graphics {

	Graphics::VertexArray::VertexArray()
	{
		glGenVertexArrays(1, &arrayID);
	}

	Graphics::VertexArray::~VertexArray()
	{
		for (int i = 0; i < buffers.size(); i++)
			delete buffers[i];
	}

	void Graphics::VertexArray::addBuffer(Buffer* buffer, GLuint index)
	{
		bind();
		buffer->bind();

		glEnableVertexAttribArray(index);
		glVertexAttribPointer(index, buffer->getComponentCount(), GL_FLOAT, GL_FALSE, 0, 0);

		buffer->unbind();
		unbind();
	}

	void Graphics::VertexArray::bind() const
	{
		glBindVertexArray(arrayID);
	}

	void Graphics::VertexArray::unbind() const
	{
		glBindVertexArray(0);
	}

}