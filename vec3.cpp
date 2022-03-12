#include <iostream>
#include "vec3.h"

vec3::vec3(int x_, int y_, int z_): x(x_), y(y_), z(z_){};
vec3::vec3(): x(0), y(0), z(0){};
vec3::vec3(std::vector<int> data): x(data[0]), y(data[1]), z(data[2]){};

void vec3::x_set(int x_) {
    x = x_;
}

int vec3::x_get() {
    return x;
}

void vec3::y_set(int y_) {
    y = y_;
}

int vec3::y_get() {
    return y;
}

void vec3::z_set(int y_) {
    z = y_;
}

int vec3::z_get() {
    return z;
}

vec3 vec3::operator+(vec3 another){
    another.x_set(x_get() + another.x_get());
    another.y_set(y_get() + another.y_get());
    another.z_set(z_get() + another.z_get());
    return another;
}

double vec3::mod() {
    return std::sqrt(x + y + z);
}

double vec3::angle(vec3 another){
    return std::abs(x * another.x_get() + y * another.y_get() + z * another.z_get())
    / (std::sqrt(x*x + y*y + z*z) * std::sqrt(x*x + y*y + z*z));
}

void vec3::print() {
    std::cout << '(' << x << ", " << y << ", " << z << ')';
}