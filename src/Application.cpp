#include "Application.hpp"
#include "raylib.h"

Application::Application(){}

Application::Application(unsigned long screen_width, unsigned long screen_height, unsigned long FPS)
{
  m_screen_width = screen_width;
  m_screen_height = screen_height;
  m_FPS = FPS;
}

// Get and Set Methods

// Methods
void Application::init()
{
  InitWindow(m_screen_width, m_screen_height, "Template Window");
  SetTargetFPS(m_FPS);
}

void Application::run()
{
  while (!WindowShouldClose()) 
  {
    BeginDrawing(); 
    ClearBackground(RAYWHITE);
    DrawText("Hello window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();
}
