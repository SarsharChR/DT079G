//
// Created by 1998s on 5/12/2026.
//

#ifndef LABB5_MYPRINT_H
#define LABB5_MYPRINT_H
#include "human.h"
#include <vector>
#include <iostream>
class MyPrint {
public:
    void operator()(const Human& obj) const;
};

#endif //LABB5_MYPRINT_H