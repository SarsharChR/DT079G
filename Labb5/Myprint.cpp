//
// Created by 1998s on 5/12/2026.
//

#include "Myprint.h"

void MyPrint::operator()(const Human& obj) const {
    std::cout << obj.getName() << ", " << obj.getAge() << ", " << obj.getWeight() << ", " << obj.getLength() << std::endl;
}
