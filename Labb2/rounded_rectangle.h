//
// Created by 1998s on 3/7/2026.
//

#ifndef LABB2_ROUNDED_RECTANGLE_H
#define LABB2_ROUNDED_RECTANGLE_H
#include "rectangle.h"

class RoundedRectangle : public Rectangle {
private:
    double radius;
public:
    RoundedRectangle(std::string color, double width, double height,double radius);
    double area() const override;
};
#endif //LABB2_ROUNDED_RECTANGLE_H