# Create a user defined module with simple functions for: addition, subtraction, multiplication, division, modulo, square, factorial. Write a program to import the module and access functions defined in the module.

import noobmath as nm

print("\nAddition of 1, 2, 3:", nm.addition([1,2,3]))

print("\nSubtraction of 1, 2, 3:", nm.subtraction([1,2,3]))

print("\nMultiplication of 1, 2, 3:", nm.multiplication([1,2,3]))

print("\nDivison of 1, 2, 3:", nm.division([1,2,3]))

print("\nModulo of 37 and 8;", nm.modulo(37,8))

print("\nSquare of 36:", nm.square(4))

print("\nFactorial of 4:", nm.factorial(4))
