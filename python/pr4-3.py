# Write a program to get a person's weight (in kg) and height (in cm) and display a message whether the person is healthy, underweight or overweight

# BMI = weight / (height * height)
# weight in kg, height in meter

# BMI > 19 and BMI <25 => healthy
# BMI < 19 => underweight
# BMI > 25 => overweight

print("Let's check your health :)\n")

weight = int(input("Enter the weight in kg: "))
height = int(input("Enter the height in cm: "))

height /= 100

BMI = weight / (height ** 2)

if (BMI > 19 and BMI < 25):
    print("\nNo Problem, You're healthy, BMI = ", BMI)

elif (BMI <= 19):
    print("\nProblem, You're underweight, BMI = ", BMI)

elif (BMI >= 25):
    print("\nProblem, You're overweight, BMI = ", BMI)

else:
    print("\nERROR, Unknown value, BMI = ", BMI)