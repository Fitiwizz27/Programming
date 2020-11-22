#ifndef GARBAGE
#define GARBAGE
#include <iostream>
#include <cmath>
#include "fact.h"

double Talor(double x, int k)
{
    if (x > 0)
    {
        double anws = 0;

        for (int i = 0; i < k; i++)
        {
            anws = pow(-1, i) * (pow(x, 2 * i + 1) / (fact(2 * i + 1))) + anws;
        }
        return anws;
    }
    else return 0;
}

#endif