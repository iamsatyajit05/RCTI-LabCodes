num_list = [7,3,4,2,8,9,5,6,1]

num_list.append(10)

print(f"list after adding {num_list[9]} is {num_list}")

r = num_list.pop()

print(f"list after removing {r} is {num_list}")

le = num_list.__len__()
print(f"The length of list is {le}")

a = int(input("Enter the index to find in number :"))
print(f"the number on index {a} is {num_list[a]}")

num_list.sort()
print(f"after sorting the list {num_list}")

num_list.reverse()
print(f"after reversing the list {num_list}")