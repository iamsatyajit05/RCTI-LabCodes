# Write a program to calculates whether a given year is leap year or not

# Every year which is divisible by 4, unless it is a century year that is not divisible by 400

print("Let's find leap year :)\n")

year = int(input("Enter the year to check leap year status: "))

if ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
    print(f"\n{year}, is a leap year")

else:
    print(f"\n{year}, is not a leap year")