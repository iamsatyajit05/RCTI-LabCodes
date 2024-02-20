def shift_alphabet(char, shift):
    if (char.isupper()):
        return chr((ord(char) + shift - 65) % 26 + 65)
    else:
        return chr((ord(char) + shift - 97) % 26 + 97) 

def encrypt(text,s):
    result = ""
 
    for i in range(len(text)):  
        result += shift_alphabet(text[i], s)
 
    return result

def decrypt(text, s):
    result = ""
 
    for i in range(len(text)):  
        result += shift_alphabet(text[i], (26-s))
 
    return result

plaintext = 'ATTACKATONCE'
key = 4
encrypted_text = encrypt(plaintext, key)
decrypted_text = decrypt(encrypted_text, key)

print("Original Text:", plaintext)
print("Encrypted Text:", encrypted_text)
print("Decrypted Text:", decrypted_text)