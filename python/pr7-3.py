# Write a program to perform the below operations on the Dictionary.

# Create a Dictionary
# Print dictionary items
# Add/remove key-value pair in/from a dictionary
# Check weather a key exists in a dictionary
# Iterate through a dictionary
# Concate multiple dictionaries

print("Basic operations on Dictionary :)")

myDict = (4, 12.69, 7, 'Hello', 9)

print("\nInitial Tuple:", myDict)

myList = list(myDict)

myList.remove(12.69)

print("\nList after removing 12.69:", myList)

myDict = tuple(myList)

print("\nUpdated tuple:", myDict)