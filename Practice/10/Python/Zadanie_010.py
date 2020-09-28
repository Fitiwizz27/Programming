from array import *

s1 = array('i', [0, 1])
s2 = array('i', [0, 1])
s, s1[0], s1[1], s2[0], s2[1] =map(int, input().split())

if ((s1[0] > s1[1]) or (s2[0] > s2[1])) :
    print("Неправильная последовательность ввода чисел")
    exit(0)

if (((s1[0] + s2[0]) == s) or ((s1[0] + s2[1]) == s)) :
    print("{0} {1}". format(s1[0], s - s1[0]))
    exit(0)

if (((s1[1] + s2[0]) == s) or ((s1[1] + s2[1]) == s)) :
    print("{0} {1}". format(s1[1], s - s1[1]))
    exit(0)

else :
    print("-1")
    exit(0)
