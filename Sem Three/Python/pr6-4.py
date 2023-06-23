# Write a program to eliminate duplicate values in the list

print("Removing duplicate values from list :)\n")

length = int(input("Enter the total numbers: "))

numbers = []

for i in range(length):
    num = int(input(f"Enter the value of {i+1} number: "))
    numbers.insert(i, num)

print("Original:", numbers)

res = []

for i in numbers:
    if i not in res:
        res.append(i)
    
numbers = res

print("Modified:", numbers)
