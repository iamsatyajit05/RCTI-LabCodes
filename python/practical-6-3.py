a = input("Enter the input :")
list_1 = list(a)
for i in range(a.__len__()):
    if list_1[i] == '1' :
        list_1[i] = 1 
    elif list_1[i] == '2':
        list_1[i] = 2
    elif list_1[i] == '3':
        list_1[i] = 3
    elif list_1[i] == '4':
        list_1[i] = 4
    elif list_1[i] == '5':
        list_1[i] = 5
    elif list_1[i] == '6':
        list_1[i] = 6
    elif list_1[i] == '7':
        list_1[i] = 7
    elif list_1[i] == '8':
        list_1[i] = 8
    elif list_1[i] == '9':
        list_1[i] = 9
for i in range(1,10) :
    d = list_1.count(i)
    if d != 0:
        print(f"{i}({d}times)")

