# Write a program to read n numbers from users and calculate the average of those n numbers

print("Let's calculate average :)\n")

total_num = int(input("Enter total numbers: "))
sum = 0

for i in range(1, total_num + 1):
    x = int(input(f"Enter the {i} number: "))
    sum += x

avg = sum / total_num

print("\nAverage of entered numbers:", avg)