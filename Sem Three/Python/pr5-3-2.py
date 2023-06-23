# Write a program to print below pattern

# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5

print("Design Time ;)\n")

row = int(input("Enter the total rows: "))

for x in range(row):
    for y in range(x + 1):
        print(y+1, end=' ')

    print()