#ifndef MAIN_IMG_CANVAS_OF_PIXELS
#define MAIN_IMG_CANVAS_OF_PIXELS

#include <vector>
#include "pixel.h"

class Canvas {
    private:
        int width, height;
        std::vector<Pixel> pixels;

    public:
        // constructor which needs width, height, and pixel (which are calculated using w * h);
        Canvas(int w, int h);    

        // function to change pixel value at specific coordinate
        Pixel& at(int x, int y);

        int getWidth() const;
        int getHeight() const;

        const std::vector<Pixel>& getPixels() const;
};

#endif
