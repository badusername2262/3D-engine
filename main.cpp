#include "src/Graphics/window.hpp"
#include "src/Graphics/shader.hpp"
#include "src/Utils/camera.hpp"

#include "src/Buffers/buffer.hpp"
#include "src/Buffers/indexbuffer.hpp"
#include "src/Buffers/vertexarray.hpp"

#include "src/Graphics/renderer.hpp"
#include "src/Graphics/simple2drenderer.hpp"

#define using_buffers 1
using namespace Graphics;

int main()
{
    Window window("title", 960, 540);
    glClearColor(0.2, 0.3, 0.8, 1.0);

	Camera ortho = Camera::Orthographic(0, 16, 0, 9, -1, 1);

    Shader shader("../resources/Shaders/shader.vert", "../resources/Shaders/shader.frag");
    shader.bind();
	shader.setUniformMat4("pr_matrix", ortho);
	shader.setUniformMat4("ml_matrix", Camera::translation(glm::vec3(4, 3, 0)));

	Renderer sprite(glm::vec3(5, 5, 0), glm::vec2(4, 4), glm::vec4(1, 0, 1, 1), shader);
	Renderer sprite2(glm::vec3(7, 1, 0), glm::vec2(2, 3), glm::vec4(0.2f, 0, 1, 1), shader);
	simple2drenderer renderer;

	shader.setUniform2f("light_pos", glm::vec2(4.0f, 1.5f));
	shader.setUniform4f("colour", glm::vec4(0.2f, 0.3f, 0.8f, 1.0f));

	bool show_demo_window = true;

    while (!window.Closed())
    {
        window.Clear();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        static float f = 0.0f;
        static int counter = 0;
        ImGui::Begin("FPS Checker.");
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();

        double x, y;
        window.getmouseposition(x, y);
        shader.setUniform2f("light_pos", glm::vec2((float)(x * 16.0f / 960.0f), (float)(9.0f - y * 9.0f / 540.0f)));

		renderer.submit(&sprite);
		renderer.submit(&sprite2);
		renderer.flush();

		ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        window.Update();
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwTerminate();
    return 0;
}
