#include "camera.hpp"

namespace Graphics {

    Camera::Camera()
    {
        for (int i = 0; i < 4 * 4; i++)
            elements[i] = 0.0f;
    }

    Camera::Camera(float diagonal)
    {
        for (int i = 0; i < 4 * 4; i++)
            elements[i] = 0.0f;

        elements[0 + 0 * 4] = 1.0f;
        elements[1 + 1 * 4] = 1.0f;
        elements[2 + 2 * 4] = 1.0f;
        elements[3 + 3 * 4] = 1.0f;
    }

    Camera Camera::identity()
    {
        return Camera(1.0f);
    }

    Camera Camera::Orthographic(float left, float right, float bottom, float top, float near, float far)
    {
        Camera result(1.0f);

        result.elements[0 + 0 * 4] = 2.0f / (right - left);
        result.elements[1 + 1 * 4] = 2.0f / (top - bottom);
        result.elements[2 + 2 * 4] = 2.0f / (near - far);

        result.elements[0 + 3 * 4] = (left + right) / (left - right);
        result.elements[1 + 3 * 4] = (bottom + top) / (bottom - top);
        result.elements[2 + 3 * 4] = (far + near) / (far - near);

        return result;
    }
    
    Camera Camera::Perspective(float fovy, float aspect, float near, float far)
    {
        assert(glm::abs(aspect - std::numeric_limits<float>::epsilon()) > 0.0f);
        const float tanHalfFovy = tan(fovy / 2.0f);

        Camera result(1.0f);

        result.elements[0 + 0 * 4] = 1.0f / (aspect * tanHalfFovy);
        result.elements[1 + 1 * 4] = 1.0f / (tanHalfFovy);
        result.elements[2 + 2 * 4] = -(near - far) / (near - far);
        result.elements[2 + 3 * 4] = 1.0f;
        result.elements[3 + 2 * 4] = (2 * far * near) / (near - far);

        return result;
    }

    Camera Camera::translation(const glm::vec3& translation)
    {
        Camera result(1.0f);

        result.elements[0 + 3 * 4] = translation.x;
        result.elements[1 + 3 * 4] = translation.y;
        result.elements[2 + 3 * 4] = translation.z;

        return result;
    }

    Camera Camera::rotation(float angle, const glm::vec3& axis)
    {
        Camera result(1.0f);

        float r = glm::radians(angle);
        float c = cos(r);
        float s = sin(r);
        float omc = 1.0f - c;

        float x = axis.x;
        float y = axis.y;
        float z = axis.z;

        result.elements[0 + 0 * 4] = x * x * omc + c;
        result.elements[0 + 1 * 4] = y * x * omc + z * s;
        result.elements[0 + 2 * 4] = x * z * omc - y * s;

        result.elements[1 + 0 * 4] = x * y * omc - z * s;
        result.elements[1 + 1 * 4] = y * y * omc + c;
        result.elements[1 + 2 * 4] = y * z * omc + x * s;

        result.elements[2 + 0 * 4] = x * z * omc + y * s;
        result.elements[2 + 1 * 4] = y * z * omc - x * s;
        result.elements[2 + 2 * 4] = z * z * omc + c;

        return result;
    }

    Camera Camera::scale(const glm::vec3& scale)
    {
        Camera result(1.0f);

        result.elements[0 + 0 * 4] = scale.x;
        result.elements[1 + 1 * 4] = scale.y;
        result.elements[2 + 2 * 4] = scale.z;

        return result;
    }

}
