#ifndef SHAPE_2D_SQUARE
#define SHAPE_2D_SQUARE

#include "shape.h"

class Square : public Shape {
    private:
        int width;

    public:
        Square(int x, int y, Pixel colour, int width);

        bool contains(int px, int py) const override;

        void draw(Canvas& canvas) const override;

        int getWidth();
};

#endif
