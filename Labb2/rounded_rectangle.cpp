//
// Created by 1998s on 3/7/2026.
//
#include "rounded_rectangle.h"
#include <cmath>
RoundedRectangle::RoundedRectangle(std::string color, double width, double height, double radius) : Rectangle(color, width, height), radius(radius) {

};
double RoundedRectangle::area() const {
    double kvadrat, restpiece, circle, whole;
    kvadrat= 4 * (radius * radius);
    restpiece =  Rectangle::area() - kvadrat;
    circle =  (M_PI * radius * radius );
    whole = circle + restpiece;

    return whole;
}