file = input("Enter the file : ")
F1 = open(file,'r')
file = F1.read()
words =  file.split()
print("File readed Successfully") 
num_words = []
print(file)
print("Numbers in the file ")
for num in words:
    if num.isnumeric():
        num_words.append(int(num))
print(num_words)