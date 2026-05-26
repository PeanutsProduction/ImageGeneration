#include <iostream>
#include <cmath>

int main() {
    
    int img_width = 255;
    int img_height = 255;
    int maxColour = 255;

    // ppm config
    /*
    * P3 -- signifies ASCII type colours
    * width height -- size of the image
    * maxColourNumb -- max number for colour e.g. 255 means it can be between 0 and 255 (inclusive).
    */

    std::cout << "P3\n" << img_width << ' ' << img_height << '\n' << maxColour << '\n'; // ppm config
    
    // Go row by row from top to bottom. Each row is done one pixel at a time from left to right.
    for (int y=0; y<img_height; y++) {
        for (int x=0; x<img_width; x++) {
            
            int r = x;
            int g = (x + y) / 2;
            int b = y;

            int radius = 120;
            int centerX = img_width / 2;
            int centerY = img_height / 2;

            bool inCirc = sqrt(pow((centerX - x), 2) + pow((centerY - y), 2)) < radius;
    
            if (inCirc) {
                std::cout << "0 0 0\n";
                continue;            
            }            

            std::cout << r << ' ' << g << ' ' << b << '\n';
        }     
    }    

    return 0;
}
