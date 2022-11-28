numerator = 1
denominator = 3
total = numerator/denominator
while denominator < 99 :
    numerator = denominator 
    denominator += 2
    total += (numerator/denominator)
print(f"The total of 1/3 + 3/5 + 5/7 ... 95/97 + 97/99 is : {total}")