# Write a program to perform below operations on set:
# Create two different sets with the data.
# Print set items.
# Add/remove items in/from a set.
# Perform operations on sets: union, intersection, difference, symmetric difference, check subset of another set.

print("Basic operations on Set :)")

set1 = {1, 2, 3, 4, 5}
set2 = {3, 4, 5, 6, 7}

print("Set 1:", set1)
print("Set 2:", set2)

set1.add(6)
set1.remove(4)

print("\nSet 1 after adding 6 and removing 4:", set1)

print("\nUnion:", set1.union(set2))
print("Intersection:", set1.intersection(set2))
print("Difference:", set1.difference(set2))
print("Symmetric Difference:", set1.symmetric_difference(set2))

print("\nIs set 1 a subset of set 2?", set1.issubset(set2))
print("Is set 2 a subset of set 1?", set2.issubset(set1))