# Write a program that plays the popular scissor-rock-paper game. (A scissor can cut a paper, a rock can knock a scissor, and a paper can wrap a rock.) The program randomly generates a number 0, 1, or 2 representing scissor, rock, and paper. The program prompts the user to enter a number 0, 1, or 2 and displays a message indicating whether the user or the computer wins, loses, or draws.

import random

print("Let's play Rock Paper Scissor :)")

print("\n0 for Rock\t1 for Paper\t2 for Scissor")

user = int(input("\nEnter your choice: "))

comp = random.randint(0, 2)

gameoption = {0: 'Rock', 1: 'Paper', 2: 'Scissor'}

whowin = ''

if (user == 0 and comp == 1) or (user == 2 and comp == 0) or (user ==
1 and comp == 2):
    whowin = 'comp'

elif (user == 1 and comp == 0) or (user == 0 and comp == 2) or (user
== 2 and comp == 1):
    whowin = 'user'

elif (user == 1 and comp == 1) or (user == 0 and comp == 0) or (user
== 2 and comp == 2):
    whowin = 'tie'

else:
    print("\nPlease select valid option!!")

if whowin != 'tie':
    print(f"\nUSER: {gameoption[user]}\nCOMPUTER: {gameoption[comp]}\n\nTHE WINNER IS {whowin}!!")

else:
    print(f"\nUSER: {gameoption[user]}\nCOMPUTER: {gameoption[comp]}\n\nGAME IS TIE!!")