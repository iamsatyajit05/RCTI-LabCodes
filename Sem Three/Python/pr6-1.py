# Write a program to perform the below operations on the list.

# Create a list
# Add & Remove an item to form a list
# Get the numbers of elements in the list
# Access elements of the list using the index
# Sort & Reverse the list

list = [5, 4, 9, 8, 1]

print("\nOriginal:", list)

list.reverse()

print("\nReverse:", list)

list.sort()

print("\nSorted:", list)

list.insert(3, "HELLO")

print("\nInsert element HELLO at 3rd index: ", list)

list.remove(1)

print("\nRemoved element 1:", list)

print("\nLength:", len(list))

print("\nElement at 3rd index:", list[2])
