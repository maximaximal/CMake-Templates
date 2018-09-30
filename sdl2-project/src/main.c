#include <stdio.h>

#include <SDL.h>

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *argv[]) {
  printf("[INFO] Hello World!");

  // This is following Lazy Foo Tutorials
  // http://lazyfoo.net/tutorials/SDL/01_hello_SDL/index2.php

  // Init SDL
  SDL_Window *window = NULL;
  SDL_Surface *screenSurface = NULL;
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("[ERROR] SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
  } else {
    // Successfully initialised SDL!

    // Now initialise the window.
    window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                              SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
      // Error initialising window!
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    } else {
      // Successfully initialised window!
      screenSurface = SDL_GetWindowSurface(window);
      SDL_FillRect(screenSurface, NULL,
                   SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

      // Short delay to let the linux window manager update itself.
      SDL_UpdateWindowSurface(window);
      SDL_Delay(50);

      // Correct drawing!
      SDL_UpdateWindowSurface(window);
      SDL_Delay(2000);
    }
  }
  SDL_DestroyWindow(window);
  SDL_Quit();
  return 0;
}
