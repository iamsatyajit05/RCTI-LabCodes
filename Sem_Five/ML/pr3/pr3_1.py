import numpy as np

arr = np.array([57, 33, 22, 45, 89, 14, 76, 61, 28, 53, 19, 68, 94, 39])

print(f"Array before splitting: {arr}")

arr = np.array_split(arr, [2, 6])

print(f"Array after splitting: {arr}")