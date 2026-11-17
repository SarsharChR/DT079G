//
// Created by 1998s on 3/6/2026.
//

#include "shape.h"

Shape::Shape(std::string color): color(color){}

std::string Shape::getColor() const
{
    return color;
}