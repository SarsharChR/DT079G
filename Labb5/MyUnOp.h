//
// Created by 1998s on 5/14/2026.
//

#ifndef LABB5_MYUNOP_H
#define LABB5_MYUNOP_H
#include "human.h"

class MyUnOp {
    public:
    double operator()(const Human& h) {
        return h.getWeight();
    }
};


#endif //LABB5_MYUNOP_H