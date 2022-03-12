#ifndef VEC3_H
#define VEC3_H

#include <vector>
#include <cmath>
#include <iosfwd>

class vec3 {
private:
    int x, y, z;

    void x_set(int x_);

    int x_get();

    void y_set(int y_);

    int y_get();

    void z_set(int z_);

    int z_get();
public:
    vec3();

    vec3(int x_, int y_, int z_);

    vec3(std::vector<int> data);

    vec3 operator+(vec3 another);

    double mod();
    double angle(vec3 another);
    void print();
};

#endif
