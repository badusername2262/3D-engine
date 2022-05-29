#pragma once

#include <GL/glew.h>

namespace Graphics {

	class IndexBuffer
	{
	private:
		GLuint bufferID;
		GLuint count;
	public:
		IndexBuffer(GLushort* data, GLsizei count);

		void bind() const;
		void unbind() const;

		inline GLuint getCount() const { return count; }
	};

}