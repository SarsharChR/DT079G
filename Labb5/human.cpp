//
// Created by 1998s on 5/12/2026.
//

#include "human.h"

Human::Human() : name(""), weight(0.0), age(0), length(0.0) {}
Human::Human(std::string name,double weight,int age,double length): name(name),age(age),weight(weight),length(length) {};

double Human::getWeight() const{
    return weight;
}

double Human::getLength() const{
   return length;
}
int Human::getAge() const{
    return age;
}
std::string Human::getName() const{
    return name;
}

bool operator==(const Human& rhs, const Human& lhs) {
if (rhs.name == lhs.name) {
    return true;
}
    else {
        return false;
    }
}

