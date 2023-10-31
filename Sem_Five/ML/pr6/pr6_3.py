import pandas as pd

series = pd.Series([12, 34, 56, 78, 90])

print("Orginial Series:")
print(series)

mean = series.mean()
std_dev = series.std()
print("Mean of the Series:", mean)
print("Standard Deviation of the Series:", std_dev)