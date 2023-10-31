import pandas as pd

dict = {
    "Fruit": ["Apple", "Banana", "Watermelon"],
    "Color": ["Red", "Yellow", "Green"]
}

dframe = pd.DataFrame(dict)

print("Dictionary:", dict)
print("Pandas Dataframe:\n", dframe)