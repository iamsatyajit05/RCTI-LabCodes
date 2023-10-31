import numpy as np

arr1 =  np.array([[57, 33], [22, 45]])
arr2 = np.array([[89, 14, 76], [61, 28, 53]])
stacked_arr = np.hstack((arr1,arr2))

print(f"1st Array: {arr1}")
print(f"2nd Array: {arr2}")
print(f"Stacked Array: {stacked_arr}")