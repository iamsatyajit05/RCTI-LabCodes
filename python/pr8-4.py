# Write a program that defines a function to determine whether input number n is prime or not. A positive whole number n>2 is prime, if no number between 2 and sqrt(n) evenly divides n. If n is not prime, the program should quit as soon as if finds a value that evenly divides n. 

import math

print('Prime or Not :)\n')

num = int(input('Enter the number to check prime : '))

# WITHOUT RECURSION
def isPrime(n):
    prime = True
    for i in range(2, math.ceil(math.sqrt(n))):
        if n%i == 0:
            prime = False
            break

    return prime

# WITH RECURSION
# def isprime(n, divisor=2):
#   if n < 2:
#     return False
#   elif n == 2:
#     return True
#   elif n % divisor == 0:
#     return False
#   elif divisor * divisor > n:
#     return True
#   else:
#     return isprime(n, divisor+1)

print(f'\nIs {num} a prime number? {isPrime(num)}')
