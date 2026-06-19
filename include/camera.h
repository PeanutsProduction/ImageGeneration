#ifndef MAIN_CAMERA_H
#define MAIN_CAMERA_H

#include "vec3.h"

class Camera {
    public:
        vec3 position;
        vec3 forward = vec3(0, 0, 1);
        vec3 up = vec3(0, 1, 0);

        double nearPlane = 1;
        double farPlane = 10;

        Camera(const vec3& pos) : position(pos) {}   
};

#endif
