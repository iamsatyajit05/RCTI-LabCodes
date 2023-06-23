# Write a program that counts the occurrences of each digit in a string. The program counts how many times a digit in the string.

# For example, if the input is 12203AB3 then the output should output 0 - 1 time, 2 - 2 time, 3 - 2 time

string = input("Enter the string: ")

digits = [0] * 10

for i in string:
    if(i == '0'):
        digits[0] += 1

    elif(i == '1'):
        digits[1] += 1

    elif(i == '2'):
        digits[2] += 1
    
    elif(i == '3'):
        digits[3] += 1

    elif(i == '4'):
        digits[4] += 1

    elif(i == '5'):
        digits[5] += 1

    elif(i == '6'):
        digits[6] += 1

    elif(i == '7'):
        digits[7] += 1

    elif(i == '8'):
        digits[8] += 1

    elif(i == '9'):
        digits[9] += 1
        
for i in range(10):
    if(digits[i] != 0):
        print(f"{i} - {digits[i]} times")