#from Ipython.display import clear_output
from os import system
def display_board(board):
	#clear_output()
    print(board[7]+'|'+board[8]+'|'+board[9])
    print(board[4]+'|'+board[5]+'|'+board[6])
    print(board[1]+'|'+board[2]+'|'+board[3])

def player_input():
	marker = ''
	#KEEP ASKING PLAYER 1 TO CHOOSE X OR O
	while not(marker=='X' or marker=='O'):
		marker = input('Player 1 choose X or O : ').upper()
	#ASSIGN PLAYER 2 , THE OPPOSITE MARKER
	if marker == 'X':
		return('X','O')
	else:
		return('O','X')

	return(player1,player2)

def place_marker(board,marker,position):
	board[position] = marker

def win_check(board,mark):
    return ((board[7] == mark and board[8] == mark and board[9] == mark) or # across the top
    (board[4] == mark and board[5] == mark and board[6] == mark) or # across the middle
    (board[1] == mark and board[2] == mark and board[3] == mark) or # across the bottom
    (board[7] == mark and board[4] == mark and board[1] == mark) or # down the left side 
    (board[8] == mark and board[5] == mark and board[2] == mark) or # down the middle
    (board[9] == mark and board[6] == mark and board[3] == mark) or # down the right side
    (board[7] == mark and board[5] == mark and board[3] == mark) or # diagonal
    (board[9] == mark and board[5] == mark and board[1] == mark)) # diagonal

#WHO IS GOING FIRST
import random
def choose_first():
    if random.randint(0,1) == 0:
        return 'Player 1'
    else:
        return 'Player 2'

def space_check(board, position):
    return board[position] == ' '

def full_board_check(board):
    for i in range(1,10):
        if space_check(board, i):
            return False
    return True

def player_choice(board):
    position = 0
    while position not in [1,2,3,4,5,6,7,8,9] or not space_check(board, position):
        position = int(input('Choose your next position: (1-9) '))
    return position

def replay():
    return input('Do you want to play again? Enter Yes or No: ').lower().startswith('y')

#Proram starts here

print('Welcome to TIC TAC TOE !!')

while True:
	#play the game

	#set everything up (board, whos first, choose markers X or O )
	the_board = [' ']*10
	player1_marker,player2_marker = player_input()

	turn = choose_first()
	print(turn+' will go first')

	play_game = input('Ready to play ? y or n??').lower()

	if play_game == 'y':
		game_on = True
	else:
		game_on = False

	system('cls')
	##Game play

	while game_on:

		### PLAYER 1 TURN
		if turn == 'Player1':
			# Show the board
			display_board(the_board)
			# Choose a position
			position = player_choice(the_board)
			# Place the marker on the position
			place_marker(the_board,player1_marker,position)
			# Check if won
			if win_check(the_board,player1_marker):
				system('cls')
				display_board(the_board)
				print('PLAYER 1 HAS WON!!!')
				game_on = False
			# check if there is a tie
			else:
				if full_board_check(the_board):
					system('cls')
					display_board(the_board)
					print('TIE GAME!!')
					game_on = False	
			# No tie or no win ? Next player's turn
				else:
					turn = 'Player2'

		### PLAYER 2 TURN
		else:
			# Show the board
			display_board(the_board)
			# Choose a position
			position = player_choice(the_board)
			# Place the marker on the position
			place_marker(the_board,player2_marker,position)
			# Check if won
			if win_check(the_board,player2_marker):
				system('cls')
				display_board(the_board)
				print('PLAYER 2 HAS WON!!!')
				game_on = False
			# check if there is a tie
			else:
				if full_board_check(the_board):
					system('cls')
					display_board(the_board)
					print('TIE GAME!!')
					game_on = False
				
			# No tie or no win ? Next player's turn
				else:
					turn = 'Player1'

	if not replay():
		break

