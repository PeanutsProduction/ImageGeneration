#include <iostream>
#include <cmath>
#include "canvas.h"
#include "Shapes/circle.h"

int main() {
    
    Canvas canvas(1920, 1080);
    int maxColour = 255;

    Circle c1(960, 540, 120, {255, 0, 0});
    Circle c2(400, 300, 80, {0,0,255});

    c1.draw(canvas);
    c2.draw(canvas);

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
