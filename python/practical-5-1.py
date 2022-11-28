n = int(input('Enter the amounts of numbers to find average :')) 

a = [0]*n
s = 0

for i in range (n):
    a[i] = int(input(f'Enter the {i+1} number :'))
    s += a[i]

avg = s/n

print(f'avrage of given numbers is : {avg}')
