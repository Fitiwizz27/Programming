import string

slovo = {}
n = {}
dl = 0
chance = 1

s1 = ['hallo', 'klempner','das','ist','fantastisch','fluggegecheimen']
word = input()
word = list(word)

for string in string.ascii_lowercase:
    slovo[string] = n[string] = 0
    
for wond in s1:
    dl += len(wond)
    for F in wond:
        n[F] += 1
        
for buckvy in n:
    slovo[buckvy] = n[buckvy] / dl

for i in range(len(word)):
    if slovo[word[i]] == 0: continue
    chance *= slovo[word[i]]

print("%.2e" % chance)
