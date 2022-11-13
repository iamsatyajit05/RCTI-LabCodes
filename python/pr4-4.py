# Write a program to read the marks and assign a grade to a student

# A if 100-90
# B if 80-89
# C if 70-79
# D if 60-69
# E if 50-59
# F if 0-50

print("Let's see your grade :)\n")

marks = int(input("Enter the marks: "))

if (marks < 100 and marks >= 90):
    print("\nCongratulations, Your got A Grade")

elif (marks < 90 and marks >= 80):
    print("\nCongratulations, Your got B Grade")

elif (marks < 80 and marks >= 70):
    print("\nCongratulations, Your got C Grade")

elif (marks < 70 and marks >= 60):
    print("\nCongratulations, Your got D Grade")

elif (marks < 60 and marks >= 50):
    print("\nCongratulations, Your got E Grade")

elif (marks < 50 and marks > 0):
    print("\nBad Luck, Your got F Grade")

else:
    print("\nERROR, Unknown value")