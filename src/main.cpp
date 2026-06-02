#include <iostream>
#include <cmath>
#include "canvas.h"
#include "Shapes/allShapes.h"

int main() {
    
    Canvas canvas(1920, 1080);
    int maxColour = 255;
    
    canvas.setBackgroundColour({0, 255, 0});

    Circle c1(960, 540, {255, 0, 0}, 120);
    Square s1(400, 300, {0,0,255}, 50);

    c1.drawWithOutline(canvas, 5);
    s1.draw(canvas);
    
    drawLine(canvas, {0, 0}, {1920, 1080});

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
