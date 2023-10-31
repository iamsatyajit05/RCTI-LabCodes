import pandas as pd

dict = {
    "Name": ["Virat", "Ravi", "Rohit"],
    "Marks": [80, 75, 95]
}

dframe = pd.DataFrame(dict)
sort_dframe = dframe.sort_values(by="Name", ascending=True)

print("Before Sorting:\n", dframe)
print("After Sorting:\n", sort_dframe)