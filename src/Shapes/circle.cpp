#include "Shapes/circle.h"
#include <cmath>

Circle::Circle(int x, int y, Pixel colour, int radius): Shape(x, y, colour), radius(radius) {}

bool Circle::contains(int px, int py) const {
    int dx = Shape::getCenterX() - px;
    int dy = Shape::getCenterY() - py;
    return (dx * dx) + (dy * dy) < (radius * radius);
}

void Circle::draw(Canvas& canvas) const {
    int minX = std::max(0, Shape::getCenterX() - radius);
    int maxX = std::min(canvas.getWidth(), Shape::getCenterX() + radius);   

    int minY = std::max(0, Shape::getCenterY() - radius);
    int maxY = std::min(canvas.getHeight(), Shape::getCenterY() + radius);

    for (int py = minY; py < maxY; py++) {
        for (int px = minX; px < maxX; px++) {
            if (contains(px, py)) {
                canvas.at(px, py) = Shape::getColour();            
            }      
        }    
    }
}

void Circle::drawWithOutline(Canvas& canvas, int thickness) const {
    int minX = std::max(0, Shape::getCenterX() - (radius + thickness));
    int maxX = std::min(canvas.getWidth(), Shape::getCenterX() + (radius + thickness));   

    int minY = std::max(0, Shape::getCenterY() - (radius + thickness));
    int maxY = std::min(canvas.getHeight(), Shape::getCenterY() + (radius + thickness));

    for (int py = minY; py < maxY; py++) {
        for (int px = minX; px < maxX; px++) {
            if (contains(px, py)) {
                canvas.at(px, py) = Shape::getColour();
                continue;         
            } 
            
            int dx = Shape::getCenterX() - px;
            int dy = Shape::getCenterY() - py;
            
            if ((dx * dx) + (dy * dy) <= (radius + thickness) * (radius + thickness)) {
                if ((dx * dx) + (dy * dy) >= (radius * radius)) {
                    canvas.at(px, py) = {0, 0, 0};
                }
            }       
        }    
    }
}
