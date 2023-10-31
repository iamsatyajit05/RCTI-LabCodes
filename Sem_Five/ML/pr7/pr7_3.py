import pandas as pd

dict = {
    "Name": ["Virat", "Ravi", "Rohit"],
    "Marks": [80, 75, 95],
    "Grade": ["AB", "BB", "AA"]
}

dframe = pd.DataFrame(dict)
sort_dframe = dframe.drop(["Grade"], axis=True)

print("Before Droping:\n", dframe)
print("After Droping:\n", sort_dframe)