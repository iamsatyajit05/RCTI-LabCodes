from sklearn.datasets import load_iris

iris = load_iris()

keys = iris.keys

print("Keys:", keys)

rows, columns = iris.data.shape

print("Rows, Columns:", rows, columns)

features = iris.feature_names

print("Features:", features)

description = iris.DESCR

print("Description:", description)
