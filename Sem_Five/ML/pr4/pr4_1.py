import numpy as np

array1 = np.array([71, 42, 18, 64])
array2 = np.array([55, 37, 82, 19])

add_result = np.add(array1, array2)

sub_result = np.subtract(array1, array2)

mul_result = np.multiply(array1, array2)

div_result = np.divide(array1, array2)

round_result = np.round(array1)

print("Addition result:", add_result)
print("Subtraction result:", sub_result)
print("Multiplication result:", mul_result)
print("Division result:", div_result)
print("Rounded array:", round_result)