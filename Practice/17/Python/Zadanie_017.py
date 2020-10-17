red_num = [1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36]
black_num = [2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35]
zapominalka = [0] * 12
s3 = [0] * 37
s1 = [0] * 37
s2 = [0] * 37

max = 0
black = 0
red = 0

for i in range (12) :
    zapominalka[i] = -1
    
for i in range (37) :
    s1[i] = i
    s2[i] = i

while True :
    for k in range (12) :
        a = int(input())

        if (a < 0) or (a >= 37) : exit(0)
        for i in range (18) :
            if (a == black_num[i]) : black+=1
        for i in range (18) :
            if (a == red_num[i]) : red+=1
        
        s3[a]+=1
        for i in range (37) :
            if (s3[i] > max) : max = s3[i]
        for i in range (37) :
            if (s3[i] == max) : print(s1[i], end = ' ')

        zapominalka[k % 12] = a
        for i in range (12) :
            for j in range (36) :
                if (s1[j] == zapominalka[i]) : s1[j] = -1

        print()
        for i in range (37) :
            if s1[i] != -1 : print(s1[i], end = ' ')
            else : s1[i] = s2[i]

        print()
        print(red, black, end = ' ')
        print()
