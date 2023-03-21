# Remove duplicate value from list using function and loop

def no_multipl_value(user_list):
    return_value = []
    for i in user_list:
        if not i in return_value:
            return_value.append(i)

    return return_value

count = int(input('How many numbers are there? '))

numbers = []

for i in range(1, count+1):
    temp = int(input(f'Enter the value for {i} number: '))
    numbers.append(temp)

edited_numbers = no_multipl_value(numbers)

print(f'Old Numbers: {numbers}')
print(f'New Numbers: {edited_numbers}')