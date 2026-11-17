//
// Created by 1998s on 3/6/2026.
//
#include "circle.h"



Circle::Circle(double radius, std::string color):Shape(color), radius(radius){}
double Circle::get_radius() const {
    return radius;
}
double Circle::area() const {
    return M_PI * radius * radius;
}
