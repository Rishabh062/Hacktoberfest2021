class Player:
    def __init__(self,name):
        self.name = name
        self.getNumberOfTries = 0
        self.guess = 0

    def getNumberOfTries(self):
        return self.getNumberOfTries

    def getPlayerName(self):
        return self.name

    def play(self):
        try:
            self.guess = int(input("Enter an integer from " + str(lower) +" to "+ str(upper)+" : "))
            self.getNumberOfTries+=1
            return self.guess
        except Exception as error:
            print(error)
            return None


import random
import math
p1 = Player(input("Enter Player 1 name : "))
p2 = Player(input("Enter Player 2 name : "))
players = []
players.append(p1) #addding player
players.append(p2)
lower = int(input("Enter Lower bound:- "))
upper = int(input("Enter Upper bound:- "))
n1 = int(random.randint(lower,upper))
NUMBER_OF_TRIES = round(math.log(upper - lower + 1, 2))
#print(n1) #for debug
while players:
    for player in players:
        print(player.getPlayerName() + "'s turn, you have " + str(NUMBER_OF_TRIES - player.getNumberOfTries) + " turns left")
        guess = player.play()
        if guess < n1:
            print("guess is low")
        elif guess > n1:
            print ("guess is high")
        else:
            print("Congratulations " + player.getPlayerName(),", you guessed it in " + str(player.getNumberOfTries) + " tries " )
            players.clear() # exit game
            break #exit loop
        if player.getNumberOfTries == NUMBER_OF_TRIES:
            print(player.getPlayerName(), " out of chances")
            players.remove(player)
