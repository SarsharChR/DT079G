//
// Created by 1998s on 3/6/2026.
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H
#include "shape.h"
#include <cmath>;

class Circle : public Shape {
private:
    double radius;
    const double PI = 3.14;
public:
    Circle(double radius, std::string color ="");
    double area() const override;
    double get_radius() const;
};
#endif //LABB2_CIRCLE_H