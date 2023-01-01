# Write a program that defines a function to find the GCD of two numbers using the algorithm below. The GCD of two values can be computed using Eucli'd algorithm. Starting with the values m and n, we repeatedly apply the formula: n, m=m, n%m until m is 0. At that point, n is the GCD of the origincal m and n (Use Recursion)

def gcd(a, b):
    if b == 0:
        return a
    
    else:
        return gcd(b, a%b)

print('Finding the GCD :)\n')

num1 = int(input('Enter the 1st number: ')) 
num2 = int(input('Enter the 2nd number: ')) 

print(f'\nGCD of {num1} and {num2} is {gcd(num1, num2)}')