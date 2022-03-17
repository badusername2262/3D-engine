#include "src/Graphics/window.h"
#include "GLM/glm.hpp"

int main()
{
  using namespace Graphics;

  Window window("title", 800, 600);
  glClearColor(0.6, 0.2, 1.0, 1.0);

  while (!window.Closed())
    {
      window.Clear();

      window.Update();
    }

  return 0;
}
