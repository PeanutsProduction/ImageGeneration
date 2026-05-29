#include "Shapes/square.h"
#include <cmath>

Square::Square(int x, int y, Pixel colour, int width) : Shape(x, y, colour), width(width) {}

bool Square::contains(int px, int py) const {
    int cx = Shape::getCenterX();
    int cy = Shape::getCenterY();
    return std::abs(cx - px) < width/2 && std::abs(cy - py) < width/2;
}

void Square::draw(Canvas& canvas) const {
    int minX = std::max(0, Shape::getCenterX() - width/2);
    int maxX = std::min(canvas.getWidth(), Shape::getCenterX() + width/2);

    int minY = std::max(0, Shape::getCenterY() - width/2);
    int maxY = std::min(canvas.getHeight(), Shape::getCenterY() + width/2);

    for (int py = minY; py < maxY; py++) {
        for (int px = minX; px < maxX; px++) {
            if (contains(px, py)) {
                canvas.at(px, py) = Shape::getColour();            
            }        
        }    
    }
}
