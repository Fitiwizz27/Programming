import math

print("Выберете способ подсчета: ")
print("1. Через длины сторон")
print("2. Через координаты вершин")

S = int(input())

if (S < 1) or (S > 2) :
    print("Неправильный ввод данных: выберете способ из списка")
    exit(0)

if S == 1 :
    print("Введите длинны сторон треугольников")
    a = int(input())
    b = int(input())
    c = int(input())

    if (a + b <= c) or (a + c <= b) or (c + b <= a) :
        print("Неправильный ввод данных: треугольник не существует")
        exit(0)

    if (a <= 0) or (b <=0 ) or (c <= 0):
        print("Неправильный ввод данных: не бывает отрицательной длины")
        exit(0)
    S = (a + b + c) / 2
    S = math.sqrt(S * (S - a) * (S - b) * (S - c))

    print("S = {0}". format(S))
    exit(0)

else :
    print("Введите координаты сторон треугольников")
    a, a1 = map(int, input().split())
    b, b1 = map(int, input().split())
    c, c1 = map(int, input().split())

    if ((a == b and a1 == b1) or (b == c and b1 == c1) or (c == a) and (c1 == a1)) :
        print("Неправильный ввод данных: координаты некоторых точек совпадают")
        exit(0)

    S = abs((b - a1) * (c1 -a1) - (c - a) * (b1 - a1)) / 2
    print("S = {0}". format(S))
    exit(0)

