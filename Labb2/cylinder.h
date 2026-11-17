//
// Created by 1998s on 3/7/2026.
//

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H
#include "circle.h"
#include "shape.h"
class Cylinder : public Circle {
private:
 double height;
public:
 Cylinder(std::string color, double radius, double height);
 double area() const override;
};
#endif //LABB2_CYLINDER_H