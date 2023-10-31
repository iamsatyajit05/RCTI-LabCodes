import numpy as np

arr = np.array([[1, 2], [3, 4], [5, 6]])

print(f"Array before reshaping: {arr}")

arr = arr.reshape(2, 3)

print(f"Array after reshaping: {arr}")