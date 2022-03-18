#pragma once

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>

namespace Graphics {
	
	class View_Matrices
	{
	public:
		void orthographicProj { float left, float right, float bottom, float top, float near, float far };
		
		void PerspectiveProj { float left, float aspect, float top, float near, float far };
		
		const glm::mat4& getProjection {} const { return projectionMatrix; };
		
	private:
		glm::mat4 projectionMatrix { 1.0f };
	};
	
}