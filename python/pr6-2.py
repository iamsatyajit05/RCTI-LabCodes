# Write a program to read n numbers from a user and print:

# Number of positive numbers
# Number of negative numbers
# Number of Zeros

print("Let's count +ve, -ve, zero numbers :)\n")

length = int(input("Enter the total numbers: "))

numbers = []
positive = 0
negative = 0
zero = 0

for i in range(length):
    num = int(input(f"Enter the value of {i+1} number: "))
    numbers.insert(i, num)

for i in numbers:
    if i > 0:
        positive += 1

    elif i < 0:
        negative += 1

    else:
        zero += 1

print(f"\n{numbers} has,")
print(f"{positive} Positive Numbers")
print(f"{negative} Negative Numbers")
print(f"{zero} Zero Numbers")