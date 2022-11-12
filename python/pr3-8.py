# Write a program to determine the length of ladder required to reach a given height when leaned against the house. The height and the angle of the ladder are given ad input. Use the math library

import math

print("Doing Maths & Finding length of ladder :)\n")

height = int(input("Enter the height: "))
angle = int(input("Enter the angle: "))

radian = math.radians(angle)

ladder_length = height/math.sin(radian)

print(f"Ladder must be {ladder_length} unit long!!")