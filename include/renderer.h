#ifndef RENDERER_IMAGEGEN_H
#define RENDERER_IMAGEGEN_H

#include <utility>
#include "vec3.h"
#include "camera.h"
#include "canvas.h"

// Takes 3d point and gives coordinate on screen
std::pair<int,int> projectPoint(const vec3& point, const Camera& cam, Canvas& canvas);

#endif
