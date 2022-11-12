# Write a program to get change values a Quarter, Dime, Nickles, and Pennies. Calculate the value of change in Dollar.and
# Consider, Quarter = 0.25$
# Dime = 0.10$
# Nickles = 0.05$
# Pennies = 0.01$

print("Converting dollar and going to moon :)\n")

dollar = float(input("Enter the dollar value: "))

quarter = dollar / 0.25
dime = dollar / 0.10
nickles = dollar / 0.05
pennies = dollar / 0.01

print(f"\n{dollar} $ = {quarter} Quarter")
print(f"{dollar} $ = {dime} Dime")
print(f"{dollar} $ = {nickles} Nickles")
print(f"{dollar} $ = {pennies} Pennies")