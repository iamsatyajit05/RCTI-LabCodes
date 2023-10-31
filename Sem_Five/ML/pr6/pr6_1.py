import pandas as pd
import numpy as np

arr = np.array([23, 76, 12, 88, 34])

series = pd.Series(arr)
print("Numpy Array:", arr)
print("Series from NumPy array:")
print(series)