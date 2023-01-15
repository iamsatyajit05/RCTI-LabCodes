def addition(list):
    result = 0

    for i in list:
        result = result + i

    return result

def subtraction(list):
    result = list[0]

    for i in range(1, len(list)):
        result = result - list[i]

    return result

def multiplication(list):
    result = 1
    
    for i in list:
        result = result * i

    return result

def division(list):
    result = 1
    
    for i in list:
        result = result / i

    return result

def modulo(num1, num2):
    return num1 % num2

def square(num1):
    return num1 * num1

def factorial(num1):
    if num1 == 0:
        return 1
    else:
        return num1 * factorial(num1-1)
