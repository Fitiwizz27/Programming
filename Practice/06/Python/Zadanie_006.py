import math

a = int(input())
b = int(input())
c = int(input())

if (a == 0) and (b == 0) :
    print("Ошибка ввода значений")
    exit(0)

if (a == 0) :
    x = (-1 * c) / b
    print("Уравнение имеет один корень x = {0}". format(x))
    exit(0)
x = (b * b) - (4 * a * c)
if (x < 0) :
    print("Решений нет (УЧИ КОМПЛЕКСНЫЕ ЧИСЛА!) :)")
    exit(0)
else :
        if (x == 0) :
            x = (-1 * b) / (2 * a)
            print("Уравнение имеет один корень x = {0}". format(x))
            exit(0)
        else :
                x1 = (-1 * b + math.sqrt(x)) / (2 * a)
                x2 = (-1 * b - math.sqrt(x)) / (2 * a)
                print("Первый корень уравнения x1 = {0}". format(x1))
                print("Второй корень уравнения x2 = {0}". format(x2))
                exit(0)
