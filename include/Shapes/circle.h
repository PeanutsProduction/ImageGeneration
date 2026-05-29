#ifndef SHAPE_2D_CIRCLE
#define SHAPE_2D_CIRCLE

#include "shape.h"

class Circle : public Shape {
    private:
        int radius;
    
    public:
        Circle(int x, int y, Pixel colour, int radius);

        bool contains(int px, int py) const override;

        void draw(Canvas& canvas) const override;

        int getRadius();
};

#endif     

     


