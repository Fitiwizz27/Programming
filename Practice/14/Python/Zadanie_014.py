import math

a = int(input())

if ( a > pow(10, 16)) :
    exit(0)

if (a < 1) :
    print(0)
    exit(0)

a = math.log2(a) + 1

print(math.trunc(a))
