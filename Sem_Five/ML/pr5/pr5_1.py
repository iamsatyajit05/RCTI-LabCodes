import numpy as np

arr_2d = np.array([[23, 76, 45], [12, 88, 34], [57, 91, 65]])

flattened_arr = arr_2d.flatten()

max_value = np.max(flattened_arr)
min_value = np.min(flattened_arr)

print("Maximum value:", max_value)
print("Minimum value:", min_value)