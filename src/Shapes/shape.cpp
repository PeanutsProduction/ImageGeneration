#include "Shapes/shape.h"

Shape::Shape(int x, int y, Pixel colour) : x(x), y(y), colour(colour) {}

Shape::~Shape() {}

int Shape::getCenterX() const { return x; }

int Shape::getCenterY() const { return y; }

Pixel Shape::getColour() const { return colour; }
