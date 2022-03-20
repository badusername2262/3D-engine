#include "src/Graphics/view_matrices.h"
#include "src/Graphics/window.h"
#include "src/Graphics/shader.h"

int main()
{
  using namespace Graphics;

  Window window("title", 800, 600);
  glClearColor(0.6, 0.2, 1.0, 1.0);

  Shader shader("src/Shaders/shader.vert", "src/Shaders/shader.frag");

  while (!window.Closed())
    {
      window.Clear();

      window.Update();
    }

  return 0;
}
