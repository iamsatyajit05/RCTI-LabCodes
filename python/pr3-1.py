# Write a program to convert temperature from Celcius to Fahrenheit

# F = (9/5) * C + 32

print("We will convert temperature from Celcius to Fahrenheit :)\n")

celcius = float(input("Enter the celcius temperature: "))
fahrenheit = (9/5) * celcius + 32

print("\nHere is your solution, " + str(celcius) + " °C = " + str(fahrenheit) + " °F")