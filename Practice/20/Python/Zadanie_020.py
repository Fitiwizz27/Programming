b = 0

groshi, n = int(input()), int(input())

napitki = [0] * n
price = [0] * n
v = [0] * n
rez = [0] * n
litr = [0] * n

for i in range (n) :
    napitki[i], price[i], v[i] = map(str, input().split(' '))
    #napitki[i] = ''.join(napitki[i])
    #price[i] = ''.join(price[i])
    #v[i] = ''.join(v[i])
    #print(napitki[i], price[i], v[i])
    price[i] = int(price[i])
    v[i] = int(v[i])
    rez[i] = int(groshi / price[i])
    litr[i] = rez[i] * v[i]
    #print(rez[i], litr[i])
    if litr[i] == 0 : b = b + 1

if b == n :
    print(-1)
    exit(0)

for i in range (n) :
    for j in range (n) :
        if litr[i] > litr[j] : k = i

print(napitki[k], rez[k])
print(litr[k])
print(groshi - (price[k] * rez[k]))
