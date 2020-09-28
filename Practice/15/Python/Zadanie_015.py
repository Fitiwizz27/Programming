import random

f = 1

while (f > 0) :
    print("Добро пожаловать в игру \"Угадай число\"")
    print("Компьютер загадывает случайное число от 0 до 100")
    print("Вам необходимо его угадать")
    
    a = random.randint(0, 100)
    i = 5

    while (i > 0) :
        i = i - 1
        b = int(input())

        if (b == a) :
            print("Поздравляю! Вы угадали")
            print("Хотите начать сначала ? (1 - ДА)")

            b = int(input())

            if (b == 1) :
                break
            else :
                exit(0)
        
        if (i == 0) :
            print("Вы проиграли. Было загадано: {0}". format(b))
            print("Хотите начать сначала ? (1 - ДА)")

            b = int(input())

            if (b == 1) :
                break
            else :
                exit(0)

        if (b < a) :
            print("Загаданное число больше")
        else :
            print("Загаданное число меньше")
            
