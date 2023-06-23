#!/bin/bash
echo "Let's do addition of two numbers :)"
echo "Enter 1st number: "
read num1
echo "Enter 2nd number: "
read num2
sum=$(expr $num1 + $num2)
echo "Sum of $num1 and $num2 is $sum"