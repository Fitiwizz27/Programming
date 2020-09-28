import math

a, c, b = map(str, input().split())

if (c != '+') and (c != '-') and (c != '*') and (c != '/') :
    print("Калькулятор не может выполнить заданное действие")
    exit(0)

if (c == '+') :
    a = int(a) + int(b)
    print(a)
    exit(0)

if (c == '-') :
    a = int(a) - int(b)
    print(a)
    exit(0)

if (c == '*') :
    a = int(a) * int(b)
    print(a)
    exit(0)

if (c == '/') :

    if (b == 0) :
        print("Деление на 0 невозможно")
        exit(0)
    
    a = int(a) / int(b)
    print(a)
    exit(0)
