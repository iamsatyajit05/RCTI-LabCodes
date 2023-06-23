# Write a program to read the marks and assign a grade to a student, Using switch case

# A if 100-90
# B if 80-89
# C if 70-79
# D if 60-69
# E if 50-59
# F if 0-50

print("Let's see your grade :)\n")

marks = int(input("Enter the marks: ")) // 10

a = lambda : 'A'
b = lambda : 'B'
c = lambda : 'C'
d = lambda : 'D'
e = lambda : 'E'
f = lambda : 'F'
default = lambda : "Unkown Value"

grade = {
    10: a(),
    9: a(),
    8: b(),
    7: c(),
    6: d(),
    5: e(),
    4: f(),
    3: f(),
    2: f(),
    1: f(),
    0: f()
}

def get_grade(m):
    return grade.get(m, default)

print('Your Grade is', get_grade(marks))