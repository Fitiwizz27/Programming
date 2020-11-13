#pragma once
#include <iostream>

using namespace std;

int fact(int a)
{
    if (a > 0) return a * fact(a - 1);
    else return 1;
}