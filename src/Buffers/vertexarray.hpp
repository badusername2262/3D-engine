#pragma once

#include <vector>
#include <GL/glew.h>

#include "buffer.hpp"

namespace Graphics {

	class VertexArray
	{
	private:
		GLuint arrayID;
		std::vector<Buffer*> buffers;
	public:
		VertexArray();
		~VertexArray();

		void addBuffer(Buffer* buffer, GLuint index);
		void bind() const;
		void unbind() const;
	};

}