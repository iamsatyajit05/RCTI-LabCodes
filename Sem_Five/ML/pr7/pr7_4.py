import pandas as pd

dict = {
    "Name": ["Virat", "Ravi", "Rohit"],
    "Marks": [80, 75, 95],
    "Grade": ["AB", "BB", "AA"]
}

dframe = pd.DataFrame(dict)
dframe.to_csv("pr7/Student.csv", sep="\t")
csv_dframe = pd.read_csv("pr7/Student.csv")

print("Original Dataframe:\n", dframe)
print("CSV File:\n", csv_dframe)