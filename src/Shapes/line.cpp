#include "Shapes/line.h"
#include <cmath>

void drawLine(Canvas& canvas, const std::pair<int,int>& p1, const std::pair<int,int>& p2) {
    int dx = std::abs(p2.first - p1.first);
    int sx = p1.first < p2.first? 1 : -1;

    int dy = -std::abs(p2.second - p1.second);
    int sy = p1.second < p2.second? 1 : -1;

    int err = dx+dy, e2;
    
    int x = p1.first;
    int y = p1.second;

    while (true) {
        canvas.at(x, y) = {0, 0, 0};

        if (x == p2.first && y == p2.second) break;
        
        e2 = 2*err;
        
        if (e2 >= dy) {
            err += dy;
            x += sx;
        }

        if (e2 <= dx) {
            err += dx;
            y += sy;        
        }
    }
}
