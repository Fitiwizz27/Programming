import string

a = int(input())

b = 0

s1 = list(map(list, input().split()))

for i in range (a) :
     
     if ((s1[b][0] == 'a') and (s1[b][4] == '5') and (s1[b][5] == '5') and (s1[b][6] == '6') and (s1[b][7] == '6') and (s1[b][8] == '1')) :
          s1[b] = ''.join(s1[b])
          print(s1[b], end = ' ')
          b = b + 1

if (b == 0) :
    print(-1)
