#ifndef SHAPE_3D_STRUCT_H
#define SHAPE_3D_STRUCT_H

#include "vec3.h"
#include <utility>
#include <vector>

struct Shape3d {
    std::vector<vec3> vertices;
    std::vector<std::pair<int,int>> edges; 
};

#endif
