#include "raylib.h"
#include "Application.hpp"

#define SCREEN_WIDTH 1280 
#define SCREEN_HEIGHT 720  
#define FPS 60

int main() 
{
  Application app(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
  app.init();
  app.run();

  return 0;
}
