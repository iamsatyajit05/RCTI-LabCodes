print("lets find the number of zero and +/- tive numbers in a list")
n =  int(input("Enter the total elements of list :"))
lis =[]
num_p=0
num_n=0
num_0=0
for i in range(n):
    lis.append(int(input(f"Enter no.{i} :")))
for i in range(n):
    if lis[i] > 0:
        num_p += 1
    elif lis[i] < 0:
        num_n += 1
    else:
        num_0 += 1
print(f"\nNumber of zero in list is {num_0} \nNumber of positive numbers in list is {num_p} \nNumber of negetive numbers in list is {num_n}")
