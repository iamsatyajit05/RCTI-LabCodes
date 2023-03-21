# file operation and dictionary

file_name = input('Enter the file name to read and write name of users and subscription status: ')

file = open(file_name, 'a')

length = int(input('How many users are there? '))

data = {}

for i in range(length):
    print(f'\nUser {i+1},')
    user = input('User Name: ')
    status = input('Subscripiton Status: ')
    data[user] = status

for i, j in data.items():
    file.write(f'{i}: {j}\n')

file.close()

print('\nFile after modifications: ')

file = open(file_name, 'r')

read_data = file.readlines()

for i in read_data:
    print(i)