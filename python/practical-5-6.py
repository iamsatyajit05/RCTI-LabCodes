sum_n = 0 
a = [0]*10000
for x in range (10000):
    for i in range(1,x):
        if x % i == 0:  
            sum_n=sum_n+i
    if sum_n == x :
        a[x] = True
    else :
        a[x] = False
    sum_n = 0

for i in range (1,10000):
    if a[i] == True :
        print(f"{i} is a perfect number")
    