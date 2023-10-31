import pandas as pd

df = pd.read_csv('pr10/STD.csv')

print("Original Dataset:\n", df)

df.dropna(inplace=True)

print("\nAfter Droping Null Values:\n", df)

df.drop_duplicates(inplace=True)

print("\nAfter Removing Duplicate:\n", df)