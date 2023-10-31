import numpy as np

array = np.array([6.7, 2.2, 4.8, 7.3, 1.5])

rounded_array = np.round(array).astype(int)

print("Original Array:", array)
print("Rounded Array to Nearest Integer:", rounded_array)