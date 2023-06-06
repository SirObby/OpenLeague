#include <GL/gl.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>


struct Vertex {
    float x, y, z;
};

struct Face {
    int v1, v2, v3;
};

std::vector<Vertex> parseObjFile(const std::string& filename) {
    std::vector<Vertex> vertices;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return vertices;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string token;
        iss >> token;

        if (token == "v") {
            Vertex v;
            iss >> v.x >> v.y >> v.z;
            vertices.push_back(v);
        }
    }

    file.close();

    return vertices;
}

void render(const std::string& objFilename) {
    // Load vertices from .obj file
    std::vector<Vertex> vertices = parseObjFile(objFilename);

    // Render vertices
    glBegin(GL_TRIANGLES);
    for (const auto& v : vertices) {
        glVertex3f(v.x, v.y, v.z);
    }
    glEnd();
}

void renderCube() {
    glBegin(GL_QUADS);
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
}