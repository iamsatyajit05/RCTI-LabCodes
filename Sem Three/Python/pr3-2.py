# Write a program to compute the slope of a line between two points (x1, y1) and (x2, y2)

# Slope = (y2 - y1) / (x2 - x1)

print("Let's find slope between two points :)\n")

x1 = float(input("Enter the value of x1: "))
y1 = float(input("Enter the value of y1: "))
x2 = float(input("Enter the value of x2: "))
y2 = float(input("Enter the value of y2: "))

slope = (y2 - y1) / (x2 - x1)

print("\nSlope of given points is " + str(slope))