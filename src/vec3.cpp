#include "vec3.h"
#include <cmath>

vec3 vec3::operator + (const vec3& other) const {
    return vec3(x + other.x, y + other.y, z + other.z);
}

vec3 vec3::operator - (const vec3& other) const {
    return vec3(x - other.x, y - other.y, z - other.z);
}

vec3 vec3::operator * (const double scalar) const {
    return vec3(x * scalar, y * scalar, z * scalar);
}

double vec3::dot (const vec3& other) const {
    return (x * other.x) + (y * other.y) + (z * other.z);
}

vec3 vec3::cross (const vec3& other) const {
    double crossX = (y * other.z) - (z * other.y);
    double crossY = -((x * other.z) - (z * other.x));
    double crossZ = (x * other.y) - (y * other.x);

    return vec3(crossX, crossY, crossZ);
}

double vec3::magnitude() const {
    return sqrt((x*x) + (y*y) + (z*z));
}

