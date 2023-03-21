from collections import Counter
#taking file name
file = input("Enter the file: ")
F1 = open(file,'r')
file = F1.read()
print("File readed Successfully")
alpha_count = Counter(file.lower()) 
print("Number of each alpha in file : ")
for letter, count in alpha_count.items():
    if letter.isalpha():
        print(f'{letter}: {count}')