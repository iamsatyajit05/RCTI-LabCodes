import pandas as pd

df = pd.read_csv('pr10/STD.csv')

print("Original Dataset:\n", df)

df.drop_duplicates(inplace=True)

print("\nAfter Removing Duplicate:\n", df)