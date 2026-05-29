#include "canvas.h"

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
    return pixels[y * width + x];
}
