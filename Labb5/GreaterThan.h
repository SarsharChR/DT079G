//
// Created by 1998s on 5/12/2026.
//

#ifndef LABB5_GREATERTHAN_H
#define LABB5_GREATERTHAN_H
#include "Human.h"

class GreaterThan {
    private:
    double limit;
public:
    GreaterThan(double lim): limit(lim){};
    bool operator()(const Human& h) const {
        return h.getWeight() > limit;
    };

};


#endif //LABB5_GREATERTHAN_H