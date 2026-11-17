//
// Created by 1998s on 3/7/2026.
//

#ifndef LABB2_PARALLELEPIPED_H
#define LABB2_PARALLELEPIPED_H
#include "shape.h"
#include "rectangle.h"

class Parallelepiped : public Rectangle {
private:
    double length;
public:
    Parallelepiped(std::string color, double width, double height, double length);
    double area() const override;
};
#endif //LABB2_PARALLELEPIPED_H