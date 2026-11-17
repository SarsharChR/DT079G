#include "cylinder.h"
#include "circle.h"
Cylinder::Cylinder(std::string color, double radius, double height): Circle(radius, color), height(height) {
}

double Cylinder::area() const {
 return 2 * M_PI * get_radius() * (height + get_radius());
}