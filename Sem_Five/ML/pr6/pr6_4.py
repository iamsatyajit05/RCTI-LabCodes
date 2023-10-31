import pandas as pd

series = pd.Series([78, 56, 34, 90, 12])

print("Orginial Series:")
print(series)

sorted_series = series.sort_values()
print("Sorted Series:")
print(sorted_series)