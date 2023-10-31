import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier

# Sample dataset
data = {
    'Name': ['John', 'Mary', 'Bob', 'Alice', 'Eve'],
    'Age': [28, 22, 35, 30, 26],
    'IsMarried': [1, 0, 1, 1, 0]
}

# Create a DataFrame from the data
df = pd.DataFrame(data)

# Split the dataset into features (age) and target (IsMarried)
X = df[['Age']]
y = df['IsMarried']

# Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Create and fit the KNN classifier
knn = KNeighborsClassifier(n_neighbors=3)
knn.fit(X_train, y_train)

# Make predictions
y_pred = knn.predict(X_test)

# Evaluate the model
accuracy = knn.score(X_test, y_test)

# Print the accuracy
print("Accuracy:", accuracy)
