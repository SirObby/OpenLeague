#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>

void render() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("OpenGL Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_FULLSCREEN | SDL_WINDOW_OPENGL);

    SDL_GLContext context = SDL_GL_CreateContext(window);

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set the clear color to black
    glEnable(GL_DEPTH_TEST); // Enable depth testing
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the color and depth buffers

    glMatrixMode(GL_PROJECTION); // Switch to the projection matrix
    glLoadIdentity(); // Reset the projection matrix
    gluPerspective(45.0f, (GLfloat)SDL_GetWindowSurface(window)->w / (GLfloat)SDL_GetWindowSurface(window)->h, 0.1f, 100.0f); // Set the perspective

    glMatrixMode(GL_MODELVIEW); // Switch to the modelview matrix
    glLoadIdentity(); // Reset the modelview matrix

    glTranslatef(0.0f, 0.0f, -6.0f); // Move the camera back

    bool quit = false;
    while (!quit) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the color and depth buffers
        glRotatef(1.0f, 1.0f, 1.0f, 1.0f); // Rotate the cube

        glBegin(GL_QUADS); // Begin drawing the cube
        // Front face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f(-1.0f, -1.0f,  1.0f); // Bottom-left of the front face
        glVertex3f( 1.0f, -1.0f,  1.0f); // Bottom-right of the front face
        glVertex3f( 1.0f,  1.0f,  1.0f); // Top-right of the front face
        glVertex3f(-1.0f,  1.0f,  1.0f); // Top-left of the front face
        // Back face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-right of the back face
        glVertex3f(-1.0f,  1.0f, -1.0f); // Top-right of the back face
        glVertex3f( 1.0f,  1.0f, -1.0f); // Top-left of the back face
        glVertex3f( 1.0f, -1.0f, -1.0f); // Bottom-left of the back face
        // Top face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f(-1.0f,  1.0f, -1.0f); // Top-left of the top face
        glVertex3f(-1.0f,  1.0f,  1.0f); // Bottom-left of the top face
        glVertex3f( 1.0f,  1.0f,  1.0f); // Bottom-right of the top face
        glVertex3f( 1.0f,  1.0f, -1.0f); // Top-right of the top face
        // Bottom face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f(-1.0f, -1.0f, -1.0f); // Top-right of the bottom face
        glVertex3f( 1.0f, -1.0f, -1.0f); // Top-left of the bottom face
        glVertex3f( 1.0f, -1.0f,  1.0f); // Bottom-left of the bottom face
        glVertex3f(-1.0f, -1.0f,  1.0f); // Bottom-right of the bottom face
        // Right face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f( 1.0f, -1.0f, -1.0f); // Bottom-right of the right face
        glVertex3f( 1.0f,  1.0f, -1.0f); // Top-right of the right face
        glVertex3f( 1.0f,  1.0f,  1.0f); // Top-left of the right face
        glVertex3f( 1.0f, -1.0f,  1.0f); // Bottom-left of the right face
        // Left face
        glColor3f(1.0f, 1.0f, 1.0f); // Set the color to white
        glVertex3f(-1.0f, -1.0f, -1.0f); // Bottom-left of the left face
        glVertex3f(-1.0f, -1.0f,  1.0f); // Bottom-right of the left face
        glVertex3f(-1.0f,  1.0f,  1.0f); // Top-right of the left face
        glVertex3f(-1.0f,  1.0f, -1.0f); // Top-left of the left face
        glEnd(); // End drawing the cube

        SDL_GL_SwapWindow(window);
    }

    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
    SDL_Quit();
}