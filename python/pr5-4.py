# Write a program that displays an ASCII character table from ! to ~
# Display the ASCII value of a charcter in decimal and hexadecimal
# Display 5 characters per line

print("Here is ASCII table from ! to ~\n")

start = ord('!')
end = ord('~')
count = start

while (count <= end):
    for y in range(5):
        print(f"({chr(count)} = {count} = {hex(count)})", end="    ")
        count += 1

    print()