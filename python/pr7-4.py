# Write a program that is given a dictionary containing the average daily temperature for each day of the week, and prints all the days on which the average temperature was between 40 and 50 degrees.

temperatures = {
    "Monday": 38,
    "Tuesday": 34,
    "Wednesday": 42,
    "Thursday": 50,
    "Friday": 44,
    "Saturday": 40,
    "Sunday": 24
}

print('List of days where temperature was between 40° and 50°,')
for day, temp in temperatures.items():
    if 40 <= temp <= 50:
        print(day)