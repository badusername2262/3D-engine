#pragma once

#include <GL/glew.h>

namespace Graphics {

	class Buffer
	{
	private:
		GLuint bufferID;
		GLuint componentCount;
	public:
		Buffer(GLfloat* data, GLsizei count, GLuint componentcount);

		void bind() const;
		void unbind() const;

		inline GLuint getComponentCount() const { return componentCount; }
	};

}