#ifndef VEC3_H
#define VEC3_H

class vec3 {
    public:
        double x, y, z;

        vec3(double a, double b, double c) : x(a), y(b), z(c) {} // constructor
        
        vec3 operator + (const vec3& other) const;       
        
        vec3 operator - (const vec3& other) const;

        vec3 operator * (const double scalar) const;
        
        double dot (const vec3& other) const;

        vec3 cross (const vec3& other) const;

        double magnitude() const;
};

#endif
