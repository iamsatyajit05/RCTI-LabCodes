# Write a program to create a list representing the results of 100 students in a test, where each element represents a student's marks (between 0 to 10), and display a histogram for the result.

import random
from matplotlib import pyplot as plt
import numpy as np

marks = []

for i in range(100):
    marks.append(random.randint(0,10))

x = np.array(marks)

plt.hist(x, color = "skyblue")
plt.color = 'yellow'
plt.xlabel = 'Marks'
plt.ylabel = 'Total Students'
plt.legend(['Marks'])
plt.title('Viva Result')

plt.show()