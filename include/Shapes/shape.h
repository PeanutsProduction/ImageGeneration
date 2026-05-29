#ifndef GENERIC_SHAPE_2D
#define GENERIC_SHAPE_2D

#include "canvas.h"
#include "pixel.h"

class Shape {
    private:
        int x, y;
        Pixel colour;            

    public:
        Shape(int x, int y, Pixel colour); // constructor

        virtual ~Shape(); // destructor

        virtual bool contains(int px, int py) const = 0;

        virtual void draw(Canvas& canvas) const = 0;
        
        // getter
        int getCenterX() const;
        int getCenterY() const;
        
        Pixel getColour() const;
};

#endif
