# Write a program to print Fibonacci sequence up to n numbers using recursion. Fibonacci sequence is defined as below. Fibonacci sequence = 1 1 2 3 5 8 12 21 ... where Nth term Xn = Xn-1 + Xn-2

print('Printing Fibonacci series :)\n')

length = int(input('Enter the length of Fibonacci Series: '))

def fibonacci(n):
    if n<=0:
        return 0
    elif n==1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print(f'\nFibonacci series upto {length} terms:',end=' ')

for i in range(length):
    print(fibonacci(i), end=' ')