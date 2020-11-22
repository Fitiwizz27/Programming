a = int(input())

if ((a > pow(10, 9)) or (a < 0)) :
    print("Ошибка")
    exit(0)

b = a
i = 1
a = 1

while (i < (b + 1)) :
    a = a * i
    i = i + 1

print(a)
