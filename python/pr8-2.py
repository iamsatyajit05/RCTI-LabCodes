# Write a program that defines a function to return a new list by eliminating the duplicating values in the list.

print("Removing duplicate values from list using Function :)\n")

length = int(input("Enter the length of list: "))

myList = [0]*length

for i in range(length):
    myList[i] = input(f'Enter the {i+1} element: ')

print("\nOriginal:", myList)

def remove_duplicate(list):
    res = []

    for i in list:
        if i not in res:
            res.append(i)

    return res
        
myList = remove_duplicate(myList)   

print("\nModified:", myList)
