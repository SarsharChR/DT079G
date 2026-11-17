//
// Created by 1998s on 5/12/2026.
//

#ifndef LABB5_HUMAN_H
#define LABB5_HUMAN_H
#include <string>


class Human {
private:
    std::string name;
    double weight;
    int age;
    double length;
public:
    Human();
    Human(std::string name,double weight,int age,double length);
    std::string getName() const;
    double getWeight() const;
    int getAge() const;
    double getLength() const;


    friend bool operator==(const Human& rhs, const Human& lhs);
};


#endif //LABB5_HUMAN_H