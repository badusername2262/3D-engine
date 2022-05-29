#include "buffer.hpp"

namespace Graphics {

	Buffer::Buffer(GLfloat* data, GLsizei count, GLuint componentcount)
		: componentCount(componentcount)
	{
		glGenBuffers(1, &bufferID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferID);
		glBufferData(GL_ARRAY_BUFFER, count * sizeof(GLfloat), data, GL_STATIC_DRAW);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

	void Buffer::bind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, bufferID);
	}

	void Buffer::unbind() const
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

}