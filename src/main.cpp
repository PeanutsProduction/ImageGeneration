    #include <iostream>
    #include <cmath>
    #include "canvas.h"
    #include "Shapes/allShapes.h"
    #include "shape3d.h"
    #include "renderer.h"

    int main() {
        
        Canvas canvas(600, 600);
        int maxColour = 255;
        
        canvas.setBackgroundColour({255, 255, 255});
        
        // Camera
        Camera cam = Camera(vec3(0, 0, 0));

        // Define 3d shape
        Shape3d cube;

        cube.vertices.push_back(vec3(-0.5, -0.5, 1));
        cube.vertices.push_back(vec3(0.5, -0.5, 1));
        cube.vertices.push_back(vec3(0.5, 0.5, 1));
        cube.vertices.push_back(vec3(-0.5, 0.5, 1));

        cube.vertices.push_back(vec3(-0.5, -0.5, 2));
        cube.vertices.push_back(vec3(0.5, -0.5, 2));
        cube.vertices.push_back(vec3(0.5, 0.5, 2));
        cube.vertices.push_back(vec3(-0.5, 0.5, 2));

        cube.edges.push_back({0, 1});
        cube.edges.push_back({1, 2});
        cube.edges.push_back({2, 3});
        cube.edges.push_back({3, 0});

        cube.edges.push_back({4, 5});
        cube.edges.push_back({5, 6});
        cube.edges.push_back({6, 7});
        cube.edges.push_back({7, 4});

        cube.edges.push_back({0, 4});
        cube.edges.push_back({1, 5});
        cube.edges.push_back({2, 6});
        cube.edges.push_back({3, 7});
        
        // Render shape points
        for (auto& edge : cube.edges) {
            auto p1 = projectPoint(cube.vertices[edge.first], cam, canvas);
            auto p2 = projectPoint(cube.vertices[edge.second], cam, canvas);
            drawLine(canvas, p1, p2);
        }


        // ppm config
        /*
        * P3 -- signifies ASCII type colours
        * width height -- size of the image
        * maxColourNumb -- max number for colour e.g. 255 means it can be between 0 and 255 (inclusive).
        */

        std::cout << "P3\n" << canvas.getWidth() << ' ' << canvas.getHeight() << '\n' << maxColour << '\n'; // ppm config
        
        // Iterate over pixels in canvas using reference and write stored rgb values for ppm format
        for (auto& p : canvas.getPixels()) {
            std::cout << p.r << ' ' << p.g << ' ' << p.b << '\n';    
        }   

        return 0;
    }
