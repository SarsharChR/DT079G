//
// Created by 1998s on 3/6/2026.
//

#include "rectangle.h"

Rectangle::Rectangle(std::string color, double width, double height):Shape(color),width(width),height(height){

}
double Rectangle::get_width() const {
    return width;
}
double Rectangle::get_height() const {
    return height;
}
double Rectangle::area() const {
    return width * height;
}
