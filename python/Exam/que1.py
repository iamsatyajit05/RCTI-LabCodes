# Pattern using for loop

print('Pattern Print :)\n')

row = int(input('Enter total row count: '))

count = 1
x = 1

while x < row+1:
    for y in range(x):
        print(count, end=' ')
        count += 1
    x += 1
    print()