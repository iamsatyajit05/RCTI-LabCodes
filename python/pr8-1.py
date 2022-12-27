# Write a program that defines a function (shuffle) to scramble a list into a random order, like shuffling a deck of cards.

import random

print('Shuffling the List :)')


length = int(input('\nEnter the length of list: '))

myList = [0]*length

for x  in range(length):
    myList[x] = input(f'Enter the {x+1} element: ')

print(f'\nInitial List: {myList}')

def shuffle(list):
    for x in range(random.randint(10, 20)):
        pos1 = random.randint(0, len(myList)-1)
        pos2 = random.randint(0, len(myList)-1)

        temp = list[pos1]
        list[pos1] = list[pos2]
        list[pos2] = temp

shuffle(myList)

print(f'\nShuffled List: {myList}')