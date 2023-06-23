# Write a program to randomly fill in 0s and 1s into 4x4 2d list, print the list and find the rows and columns with the most number of 1s

import random

cols,rows =(4,4)
arr = [[0 for i in range(cols)] for j in range (rows)]

for i in range (4):
     for j in range (4):
        r =  random. randint ( 0, 1)
        arr[i] [j] = r

print("4x4 2D Matrix")
for i in range(4):
    print(arr[i])

a = [0] * 4

for i in range(4):
    a[i] = arr[i].count(1)

print (f"\nThe max numbers of 1;s in row is {max(a)} on The row number: { a.index(max(a)) + 1}")
    
col_arr = [[0 for i in range(cols)] for j in range(rows)]

for i in range (4):
    for j in range (4):
        col_arr[i][j] = arr[j][i]

for i in range (4):
    a[i] = col_arr[i].count(1)

print(f"\nThe max numbers of 1's in coloum is {max(a)} on The row number: {a.index(max(a)) + 1}")