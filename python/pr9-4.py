# Write a program to display a graph for ReLU (Rectified Linear Unit) function. ReLU function is defined as below: y = max (0, x) Consider the range of x from -5 to 5.

import matplotlib.pyplot as plt
import numpy as np

def relu(x):
    return np.maximum(0, x)

x = np.linspace(-5, 5)
y = relu(x)

plt.plot(x, y)

plt.xlabel('x axis')
plt.ylabel('y axis')
plt.title('ReLU Function')

plt.show()