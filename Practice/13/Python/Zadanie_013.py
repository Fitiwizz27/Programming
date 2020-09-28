a = int(input())
i = 2

if ((a < 2) or (a > pow(10, 9))) :
    exit(0)

while (i != a) :
    if (a % i != 0) :
        i = i + 1
    else :
        i = 1
        break

if ((i == 1) or (a == 2)) :
    print("Составное")
else :
    print("Простое")
