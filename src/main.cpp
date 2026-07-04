#include "raylib.h"
#include "Application.hpp"

#define SCREEN_WIDTH 1280 
#define SCREEN_HEIGHT 720  
#define FPS 60

int main() 
{
  Application app(SCREEN_WIDTH, SCREEN_HEIGHT, FPS);
  app.init();

  while (!WindowShouldClose()) 
  {
    BeginDrawing(); 
    ClearBackground(RAYWHITE);
    DrawText("Hello window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();

  return 0;
}
