# Write a program to calculate total wage for the week, inputs are number of hour and hourly rate

# Overtime paymet about 40 hour and 1.5 of hourly rate

print("Let's calculate total wage :)\n")

total_hour = int(input("Enter the total worked hour: "))
hourly_rate = int(input("Enter the hourly rate in $: "))

total_wage = 0

if (total_hour > 40):
    extra_hour = total_hour - 40
    official_hour =  total_hour - extra_hour 
    extra_rate = hourly_rate * 1.5
    total_wage = (official_hour * hourly_rate) + (extra_hour * extra_rate)

else:
    total_wage = total_hour * hourly_rate

print(f"\nYour worked for {total_hour} hour and earned {total_wage} $")