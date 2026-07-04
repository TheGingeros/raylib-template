#pragma once

class Application
{
public:
    // Constructor
    Application();
    Application(unsigned long screen_width,  unsigned long screen_height, unsigned long FPS);

    // Get and Set methods

    // Methods
    void init();
    void run();
private:
  unsigned long m_screen_width;
  unsigned long m_screen_height;
  unsigned long m_FPS;
};
