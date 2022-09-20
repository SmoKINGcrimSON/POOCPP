#ifndef POWERMATH_H
#define POWERMATH_H
#include <iostream>

class Math{
    public:

    template<typename V>
    static V Sum(const V a, const V b);
};

#include "math.tpp"
#endif