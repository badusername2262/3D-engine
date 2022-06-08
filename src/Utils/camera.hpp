#pragma once

#define GLM_FORCE_INLINE

#include <glm/glm.hpp>
#include <glm/ext/matrix_clip_space.hpp>

namespace Graphics {
	
	class Camera
	{
	private:
	int width, height, near, far;
	glm::vec3 pos;
	public:
	Camera(glm::vec3& pos, int width, int height, int near, int far);
	~Camera();

	Orthographic();
	Perspective();
	Normal();
	private:
	void Init();
	};
	
}
