//
// Created by 1998s on 5/14/2026.
//

#ifndef LABB5_MYFUNC_H
#define LABB5_MYFUNC_H


class MyFunc {
public:
    double mean;
    MyFunc(double mean);
    double operator()(double xi) const;
};


#endif //LABB5_MYFUNC_H