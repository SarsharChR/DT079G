//
// Created by 1998s on 3/6/2026.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H
#include <string>

class Shape {
private: std::string color;
public:
    Shape(std::string color);
    virtual  double area() const = 0;
    std::string getColor() const;
};
#endif //LABB2_SHAPE_H