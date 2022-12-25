# Write a program to perform the below operations on the tuple.

# Create a tuple with different datatype
# Print tuple items
# Convert tuple into a list
# Remove data items to form a list
# Convert list into a tuple
# Print tuple items

print("Basic operations on Tuple :)")

myTuple = (4, 12.69, 7, 'Hello', 9)

print("\nInitial Tuple:", myTuple)

myList = list(myTuple)

myList.remove(12.69)

print("\nList after removing 12.69:", myList)

myTuple = tuple(myList)

print("\nUpdated tuple:", myTuple)