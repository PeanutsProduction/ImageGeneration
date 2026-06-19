#include "canvas.h"
#include <iostream>

Canvas::Canvas(int w, int h) : width(w), height(h), pixels(w * h, {0, 0, 0}) {};

int Canvas::getWidth() const {
    return width;
}

int Canvas::getHeight() const {
    return height;
}

const std::vector<Pixel>& Canvas::getPixels() const {
    return pixels;
}

// given a x,y coordinate it returns a reference to the pixel value.
Pixel& Canvas::at(int x, int y) {
    static Pixel dummy;
    if (x < 0 || x >= width || y < 0 || y >= height) {
        std::clog << "coordinate out of bounds!!" << std::endl;
        return dummy;
    }
    return pixels[y * width + x];
}

void Canvas::setBackgroundColour(Pixel colour) {
    std::fill(pixels.begin(), pixels.end(), colour);
}
