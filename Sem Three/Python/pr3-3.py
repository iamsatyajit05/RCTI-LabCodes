# Write a program to calcuate simple and compound interest

# Simple Interest = (P * R * T) / 100

# Compound Interest = P * ((1 + (R/100 * n)) ** (T * n))
# Here n = 1

print("Let's become rich by calculating simple and compound interest :)\n")

principle = float(input("Enter the principle amount: "))
rate = float(input("Enter the interest rate: "))
time = float(input("Enter the time duration: "))

simple_interest = (principle * rate * time) / 100
compound_interest = (principle * ((1 + (rate/100 * 1)) ** (time * 1))) - principle

print("\nHere is your answer after veeeeery long calculation ;)")
print(f"Simple Interest = {simple_interest} Unit")
print(f"Compound Interest = {compound_interest} Unit")