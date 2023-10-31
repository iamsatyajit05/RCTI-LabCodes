import pandas as pd

data = {'A': [10, 20, 30, 40, 50], 'B': [15, 25, 35, 45, 55]}
df = pd.DataFrame(data)

print("Original Series:", data)

first_column_series = df.iloc[:, 0]
print("First column as Series:")
print(first_column_series)