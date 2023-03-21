

#creating a file object
F1 = open("test",'a+')
#reading whole file
F1.seek(0)
read_all = F1.read()
print("Text of The file : ",read_all)
#reading line by line
for i in range(len(F1.readlines())):
    read_line = F1.readline()
    print(read_line,'\n')

write = input("Enter To append :")
#writting in the file
F1.write(write+'\n')
list = ['! Sunday','2 Monday','3 tuesday','4 wednesday','5 Thusday','6 Friday','7 Saturday']
#writting  list into the file
for value in list:
    F1.write(value +'\n')
F1.seek(0)
#count the number of lines and words
print("The total numbers of lines in File : ",len(F1.readlines()))
F1.seek(0)
read_all = F1.read()
words = read_all.split()
print("The total numbers of lines in File : ",len(words))