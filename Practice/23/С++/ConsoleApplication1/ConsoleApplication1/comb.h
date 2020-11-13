#ifndef GARBAGE_002
#define GARBAGE_002
#include <iostream>
#include "fact.h"

double comb(int k, int n)
{
	double anws = 0;
	
	anws = fact(n) / (fact(k) * fact(n - k)) + anws;
	return anws;
}

#endif