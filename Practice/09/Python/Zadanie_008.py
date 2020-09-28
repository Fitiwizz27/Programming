import math

h1, m1 = map(int, input().split(':'))
h2, m2 = map(int, input().split(':'))

if (((h1 < 0) or (h1 > 23)) or ((h2 < 0) or (h2 > 23)) or ((m1 < 0) or (m1 > 59)) or ((m2 < 0) or (m2 > 59))) :
    print("Неправильный ввод данных")
    exit(0)

s1 = h1 * 60 + m1
s2 = h2 * 60 + m2

if (math.fabs(s1 - s2) < 16) :
    print("Встреча состоится")
    exit(0)

else :
    print("Встреча не состоится")
    exit(0)
