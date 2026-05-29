#ifndef SHAPE_2D_CIRCLE
#define SHAPE_2D_CIRCLE

#include "canvas.h"
#include "pixel.h"

class Circle {
    private:
        int x, y, radius;
        Pixel colour;
    
    public:
        Circle(int x, int y, int radius, Pixel colour);

        bool contains(int px, int py);

        void draw(Canvas& canvas);
};

#endif
