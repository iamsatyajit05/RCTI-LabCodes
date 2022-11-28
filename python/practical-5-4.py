start = ord('!')
end = ord('~')
count = start
while count <= end:
    for i in range(5):
        print(f"({chr(count)} = {count} = {hex(count)})")
        count += 1
    print()
