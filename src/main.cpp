#include "rendering.h"
/*
int main(int argc, char* argv[]) {
    render();
    return 0;
}
*/
#include <SDL2/SDL.h>
#include <GL/glu.h>
#include <GL/gl.h>

void renderCube();
void render();


int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("OpenLeague", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN);
    SDL_GLContext context = SDL_GL_CreateContext(window);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)640 / (GLfloat)480, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);

    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glLoadIdentity();
        glTranslatef(0.0f, 0.0f, -6.0f);
        glRotatef(SDL_GetTicks() / 10.0f, 1.0f, 1.0f, 1.0f);

        renderCube();

        //render(); put object file path inside the ()

        SDL_GL_SwapWindow(window);
    }

    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}