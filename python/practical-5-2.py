a = [0]* 10
for i in range(10):
    a[i] = int(input(f"Enter the {i+1} Number for combinations :"))

for x in range(10):
    for y in range(10):
        print(a[x],a[y])
