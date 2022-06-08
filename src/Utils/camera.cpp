#include "camera.hpp"

namespace Graphics {

    Camera::Camera(glm::vec3& pos, int width, int height, int near, int far)
    : pos(pos), width(width), height(height), near(near), far(far)
    {
        Init();
    }

    void Camera::Init()
    {
        glm::mat4 ortho = glm::ortho(-(width / 2), width / 2, height / 2, -(height / 2), near, far);
        
    }

}