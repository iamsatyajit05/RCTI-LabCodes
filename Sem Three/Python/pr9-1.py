# Write a program that defines functions (mean and deviation), that computes mean and standard deviation of given numbers. 

import math

def mean(numbers):
    return sum(numbers) / len(numbers)

def deviation(numbers):
    mu = mean(numbers)
    var = sum([(x-mu)**2 for x in numbers]) / len(numbers)
    return math.sqrt(var)

print("Mean and Standard Deviation Calculator :)")

length = int(input("Enter total terms: "))

numbers = []

for i in range(length):
    x = int(input(f"Enter value of {i+1} number: "))
    numbers.append(x)

print("\nMean:", mean(numbers))
print("Deviation:", deviation(numbers))
