#include "Shapes/circle.h"
#include <cmath>

Circle::Circle(int x, int y, int radius, Pixel colour): x(x), y(y), radius(radius), colour(colour) {};

bool Circle::contains(int px, int py) {
    return sqrt(pow(x - px, 2) + pow(y - py, 2)) < radius;
}

void Circle::draw(Canvas& canvas) {
    for (int py = 0; py < canvas.getHeight(); py++) {
        for (int px = 0; px < canvas.getWidth(); px++) {
            if (contains(px, py)) {
                canvas.at(px, py) = colour;            
            }        
        }    
    }
}
