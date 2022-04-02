#include "SDL.H"
#include "graphics.h"

Graphics::Graphics() {
    SDL_CreateWindowAndRenderer(640, 640, 0, &window, &renderer);
    SDL_SetWindowTitle(window, "Snake");
}

Graphics::~Graphics() {
    SDL_DestroyWindow(window);
}

