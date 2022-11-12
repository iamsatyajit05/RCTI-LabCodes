# Write a program to computes the real roots of a given quadratic equation using matht library

import math

print("Let's find root of equation (not of tree) :)\n")

a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
c = int(input("Enter value of c: "))

disc = (b ** 2) - (4 * a * c)

sqrt_disc = math.sqrt(abs(disc))

pos_real_root = ((-b + sqrt_disc) / (2 * a))
neg_real_root = ((-b - sqrt_disc) / (2 * a))

print("\nHere you go,")
print(f"Root values = {pos_real_root}, {neg_real_root}")