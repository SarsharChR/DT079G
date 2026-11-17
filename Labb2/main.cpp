#include <iostream>
#include <vector>
#include "circle.h"
#include "rectangle.h"
#include "parallelepiped.h"
#include "rounded_rectangle.h"
#include "cylinder.h"

void get_data(std::vector<Shape*>c);
int main() {
    std::vector<Shape*> shapes;
    Shape* rectangle= new Rectangle("blue", 4 , 5);
    shapes.push_back(rectangle);
    Shape* circle = new Circle(3, "blue");
    shapes.push_back(circle);
    Shape* cylinder = new Cylinder("red", 7, 9);
    shapes.push_back(cylinder);
 get_data(shapes);

}
void get_data(std::vector<Shape*>c) {
    double total_area = 0;
    for (int i; i < c.size(); i++) {
        total_area += c[i]->area();
        std::cout << "Color: " << c[i]->getColor() << std::endl;
        std::cout << "Area: " << c[i]->area() << std::endl;
    }
    std::cout << "Total area: " << total_area << std::endl;
}