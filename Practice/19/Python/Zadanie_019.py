import itertools as it

anws = []
n = int(input())
slovo = input()
slovo = list(slovo)

if n > len(slovo):
    perem = n - len(slovo)
    b = list(it.permutations(slovo, perem))
    
    for i in b:
        for j in i:
            slovo.append(j)
            
        a = [el for el in it.permutations(slovo, n)]
        
        for i in range (len(a)):
            anws.append(''.join(map(str, a[i])))
            
        del slovo[len(slovo)::]
        
    h = list(set(anws))
    
    for g in range(len(h)):
        print(h[g], end=' ')
else:
    for i in list(it.permutations(slovo, n)):
        print(''.join(map(str, i)), end = ' ')
