import numpy as np

arr_2d = np.array([[47, 64, 32], [18, 55, 79], [12, 36, 88]])

mean_result = np.mean(arr_2d, axis=1)
std_dev_result = np.std(arr_2d, axis=1)
variance_result = np.var(arr_2d, axis=1)

print("Mean along axis=1:", mean_result)
print("Standard Deviation along axis=1:", std_dev_result)
print("Variance along axis=1:", variance_result)