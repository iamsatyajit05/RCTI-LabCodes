# Write a program to print the dates of all the Sundays in a given year.

import datetime

def sundays(year):
  d = datetime.date(year, 1, 1)
  d += datetime.timedelta(days = 6 - d.weekday())
  while d.year == year:
    currentmonth, currentdate = d.strftime("%B"), d.strftime("%d")

    print(currentdate, currentmonth)
    d += datetime.timedelta(days = 7)

print('All sunday of any year :)\n')

year = int(input("Enter the year: "))

print(f"\nHere is the all sunday from {year}")
sundays(year)