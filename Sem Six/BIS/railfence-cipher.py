def encrypt(plain_text, key):
    plain_text = plain_text.replace(" ", "")
    
    cipher_text = [''] * len(plain_text)
    rail = [[' ' for _ in range(len(plain_text))] for _ in range(key)]

    direction = False
    row, col = 0, 0
    

    for char in plain_text:
        rail[row][col] = char
        col += 1

        if row == 0 or row == key - 1:
            direction = not direction

        row = row + 1 if direction else row - 1
    print(rail)

    index = 0
    for i in range(key):
        for j in range(len(plain_text)):
            if rail[i][j] != ' ':
                cipher_text[index] = rail[i][j]
                index += 1

    return ''.join(cipher_text)


def decrypt(cipher_text, key):
    decrypted_text = [''] * len(cipher_text)
    rail = [[' ' for _ in range(len(cipher_text))] for _ in range(key)]

    direction = False
    row, col = 0, 0

    for _ in range(len(cipher_text)):
        rail[row][col] = '*'
        col += 1

        if row == 0 or row == key - 1:
            direction = not direction

        row = row + 1 if direction else row - 1

    index = 0
    for i in range(key):
        for j in range(len(cipher_text)):
            if rail[i][j] == '*' and index < len(cipher_text):
                rail[i][j] = cipher_text[index]
                index += 1

    direction = False
    row, col = 0, 0
    for _ in range(len(cipher_text)):
        decrypted_text[_] = rail[row][col]
        col += 1

        if row == 0 or row == key - 1:
            direction = not direction

        row = row + 1 if direction else row - 1

    return ''.join(decrypted_text)

plaintext = "INFORMATION SECURITY"
key = 3
encrypted_text = encrypt(plaintext, key)
decrypted_text = decrypt(encrypted_text, key)

print("Original Text:", plaintext)
print("Encrypted Text:", encrypted_text)
print("Decrypted Text:", decrypted_text)