'''HANGMAN GAME IN PYTHON

Implementation:
1. The Hangman program randomly selects a secret word from a list of secret words. 
The random module will provide this ability, so line 1 in program imports it.

2. The Game: Here, a random word (a fruit name) is picked up from our collection 
and the player gets limited chances to win the game.

3. When a letter in that word is guessed correctly, that letter position in the 
word is made visible. In this way, all letters of the word are to be guessed before
all the chances are over. For convenience, we have given length of word + 2 chances. 
For example, word to be guessed is mango, then user gets 5 + 2 = 7 chances, as mango 
is a five-letter word.''' 

# Code: 
import random 
from collections import Counter 
'''The statement from collections import Counter imports the Counter class from the 
collections module. The Counter class is a container that stores elements as dictionary 
keys and their counts are stored as dictionary values. The Counter class is a powerful 
tool for counting the occurrences of elements in a collection. It is a versatile class 
that can be used in a variety of ways.'''

someWords = '''apple banana mango strawberry 
orange grape pineapple apricot lemon coconut watermelon
cherry papaya berry peach lychee muskmelon'''

someWords = someWords.split(' ') 
# randomly choose a secret word from our "someWords" LIST.

word = random.choice(someWords)

def get_hint(word):
    print("It is a fruit")

if __name__ == '__main__':
    print("Guess the word!")
    print("Do you want a Hint? If yes,Press H for hint")

    user.input = input()

    if user.input.upper() = 'H':
        get_hint() 