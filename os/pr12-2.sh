#!/bin/bash
echo "Multiplication table generator :)"
echo "Enter the number: "
read num
i=1
echo "Multiplication table of $num is,"
while [ $i -le 10 ]
do
    ans=$(($i*$num))
    echo "$num * $i = $ans"
    ((i++))
done