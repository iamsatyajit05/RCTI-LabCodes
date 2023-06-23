# Write a program to print below pattern

#     *
#    * * 
#   * * * 
#  * * * *
# * * * * *

print("Design Time ;)\n")

row = int(input("Enter the total rows: "))

for x in range(row):
    for y in range(row - (x+1)):
        print(' ', end='')

    for y in range(x+1):
        print('*', end=' ')

    print()