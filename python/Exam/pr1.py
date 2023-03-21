e = {}
j = 1
for i in range(65, 90+1):
    e[chr(i)]=j
    j+=1

sm=0
s='satyajit'.upper()
for i in s:
    sm+=e[i]
print(sm)