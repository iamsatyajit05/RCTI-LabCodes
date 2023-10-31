import numpy as np

arr_2d = np.array([[71, 42, 18], [55, 37, 82], [64, 19, 39]])

mean_result = np.mean(arr_2d, axis=0)

print("Mean across dimension (axis=0):", mean_result)