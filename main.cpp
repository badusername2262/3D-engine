#include "src/Graphics/window.h"

int main()
{
  using namespace Graphics;

  Window window("title", 800, 600);
  glClearColor(0.6f, 0.2, 1.0f, 1.0);

  while (!window.Closed())
    {
      window.Clear();

      window.Update();
    }

  system("PAUSE");
  return 0;
}
