//
// Created by 1998s on 3/7/2026.
#include "parallelepiped.h"

Parallelepiped::Parallelepiped(std::string color, double width, double height, double length) : Rectangle(color, width, height), length(length) {
}

double Parallelepiped::area() const {
    return 2 * ((get_height() * get_width()) + (get_height()*length) + (get_width()*length));
}
