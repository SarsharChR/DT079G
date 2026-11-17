//
// Created by 1998s on 5/14/2026.
//
#include "MyFunc.h"
MyFunc::MyFunc(double mean) : mean(mean) {};

double MyFunc::operator()(double xi) const {
    return xi - mean;
}
