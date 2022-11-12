# Write a program to find a maximum of given three numbers by using terrnary operators

print("Finding largest brother among us :)\n")

number1 = int(input("Enter the value of 1st number: "))
number2 = int(input("Enter the value of 2nd number: "))
number3 = int(input("Enter the value of 3rd number: "))

max_number = (number1 if (number1>number2 and number1>number3) else (number2 if (number2>number1) and number2>number3 else number3))

print(f"\nLargest brother among us is {max_number}")