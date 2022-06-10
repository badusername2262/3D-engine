#include "src/Graphics/window.hpp"
#include "src/Graphics/shader.hpp"

#include "src/Buffers/buffer.hpp"
#include "src/Buffers/indexbuffer.hpp"
#include "src/Buffers/vertexarray.hpp"

#include <glm/ext.hpp>

using namespace Graphics;

int main()
{
    Window window("title", 960, 540);
    glClearColor(0.2, 0.3, 0.8, 1.0);

	GLfloat vertices[] =
	{
		0, 0, 0,
		0, 3, 0,
		8, 3, 0,
		8, 0, 0
	};

	GLushort indices[] =
	{
		0, 1, 2,
		2, 3, 0
	};

	GLfloat colorsA[] =
	{
		1, 0, 1, 1,
		1, 0, 1, 1,
		1, 0, 1, 1,
		1, 0, 1, 1
	};

	GLfloat colorsB[] =
	{
		0.2f, 0.3f, 0.8f, 1,
		0.2f, 0.3f, 0.8f, 1,
		0.2f, 0.3f, 0.8f, 1,
		0.2f, 0.3f, 0.8f, 1
	};

	VertexArray sprite1, sprite2;
	IndexBuffer ibo(indices, 6);

	sprite1.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
	sprite1.addBuffer(new Buffer(colorsA, 4 * 4, 4), 1);

	sprite2.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
	sprite2.addBuffer(new Buffer(colorsB, 4 * 4, 4), 1);

	glm::mat4 ortho = glm::ortho(-(800.0f/2), 800.0f/2, -(600.0f/2), 600.0f/2, 0.0f, 1.0f);

    glm::mat4 view = glm::mat4(1.0f);
	// note that we're translating the scene in the reverse direction of where we want to move
	view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f)); 

	glm::mat4 model = glm::mat4(1.0f);
	model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f)); 

	glm::mat4 translate = glm::translate(glm::mat4(), glm::vec3(0, 0, 0));

	glm::mat4 translate2 = glm::translate(glm::mat4(), glm::vec3(4, 3, 0));

	glm::mat4 translate3 = glm::translate(glm::mat4(), glm::vec3(0, 0, 0));

    Shader shader("../resources/Shaders/VertShader", "");
    shader.bind();
	shader.setUniformMat4("pr_matrix", glm::value_ptr(ortho));
	shader.setUniformMat4("ml_matrix", glm::value_ptr(view));

	shader.setUniform2f("light_pos", glm::vec2(4.0f, 1.5f));
	shader.setUniform4f("colour", glm::vec4(0.2f, 0.3f, 0.8f, 1.0f));

	bool show_demo_window = true;
    static float f = 0.0f;
    static int counter = 0;

    while (!window.Closed())
    {
        window.Clear();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        if(window.isKeyPressed(GLFW_KEY_TAB)) {
        ImGui::Begin("FPS Checker.");
        ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::End();
        }

        double x, y;
        window.getmouseposition(x, y);
        shader.setUniform2f("light_pos", glm::vec2((float)(x * 16.0f / 960.0f), (float)(9.0f - y * 9.0f / 540.0f)));

		sprite1.bind();
		ibo.bind();
		shader.setUniformMat4("ml_matrix", glm::value_ptr(model));
		glDrawElements(GL_TRIANGLES, ibo.getCount(), GL_UNSIGNED_SHORT, 0);
		ibo.bind();
		sprite1.unbind();

		sprite2.bind();
		ibo.bind();
		shader.setUniformMat4("ml_matrix", glm::value_ptr(model));
		glDrawElements(GL_TRIANGLES, ibo.getCount(), GL_UNSIGNED_SHORT, 0);
		ibo.bind();
		sprite2.unbind();

		ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        window.Update();
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    glfwTerminate();
    return 0;
}
