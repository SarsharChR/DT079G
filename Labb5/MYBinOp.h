//
// Created by 1998s on 5/14/2026.
//

#ifndef LABB5_MYBINOP_H
#define LABB5_MYBINOP_H
#include "Human.h"

class MyBinOp {
public:
    double operator()(double sum, const Human& h) {
        return sum + h.getWeight();
    };
};

#endif //LABB5_MYBINOP_H