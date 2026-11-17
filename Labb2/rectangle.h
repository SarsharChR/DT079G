//
// Created by 1998s on 3/6/2026.
//

#ifndef LABB2_RECTANGLE_H
#define LABB2_RECTANGLE_H
#include "shape.h"
class Rectangle : public Shape{
private:
    double width;
    double height;
public:
    Rectangle(std::string color, double width, double height);
    double area() const override;
    double get_height() const;
    double get_width() const;
};
#endif //LABB2_RECTANGLE_H