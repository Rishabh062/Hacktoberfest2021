import random
import math
import time


def find_best_move():
    best_val = -math.inf
    best_move = -1
    if len(available_moves(board)) == 9:
        return random.choice(available_moves(board))
    else:
        current_board = [x for x in board]
        for move in available_moves(board):
            current_board[move] = computer

            move_val = minimax(current_board, False)

            current_board[move] = " "

            if move_val > best_val:
                best_move = move
                best_val = move_val

    return best_move


def minimax(current_board, is_max):
    score = evaluate(current_board)

    if score != 0:
        return score

    if not is_moves_left(current_board):
        return 0

    if is_max:
        best = -math.inf

        for move in available_moves(current_board):
            current_board[move] = computer
            best = max(best, minimax(current_board, False))
            current_board[move] = " "
    else:
        best = math.inf

        for move in available_moves(current_board):
            current_board[move] = human
            best = min(best, minimax(current_board, True))
            current_board[move] = " "
    return best


def is_moves_left(current_board):
    return current_board.count(" ") > 0


def empty_squares(current_board):
    return current_board.count(' ')


def evaluate(current_board):
    for combination in combinations:
        if current_board[combination[0]] == current_board[combination[1]] == current_board[combination[2]] == computer:
            return empty_squares(current_board) + 1
        if current_board[combination[0]] == current_board[combination[1]] == current_board[combination[2]] == human:
            return -(empty_squares(current_board) + 1)
    return 0


def available_moves(current_board):
    return [i for i in range(9) if current_board[i] == ' ']


def check_winner(player):
    for combination in combinations:
        if board[combination[0]] == board[combination[1]] == board[combination[2]] == player:
            board[combination[0]] = board[combination[1]] = board[combination[2]] = player
            return True
    return False


def print_board():
    for i in range(3):
        print("| " , end="")
        for j in range(3):
            print(board[i * 3 + j] + " | ", end="")
        print()


def print_index():
    print("Index table: ")
    for i in range(3):
        print("| " , end="")
        for j in range(3):
            print(str(i * 3 + j) + " | ", end="")
        print()


def is_move_available(move):
    if move not in range(9):
        return False
    else:
        return board[move] == " "


def change_player_turn():
    global player_turn
    player_turn = computer if player_turn == human else human


def play():
    print_index()
    while len(available_moves(board)) > 0:
        print()
        if player_turn == human:
            human_move = -1
            while not is_move_available(human_move):
                human_move = int(input("Choose your move: "))
                if not is_move_available(human_move):
                    print("Choose correct move!")

            print(human + " makes move at: " + str(human_move))
            board[human_move] = player_turn
            if check_winner(player_turn):
                print_board()
                print(player_turn + " wins")
                return
            print_board()
        else:
            time.sleep(.8)
            computer_move = find_best_move()
            print(computer + " makes move at: " + str(computer_move))
            board[computer_move] = computer
            if check_winner(player_turn):
                print_board()
                print(player_turn + " wins")
                return
            print_board()

        change_player_turn()

    if len(available_moves(board)) == 0:
        print("Game Draw")


board = [' ' for _ in range(9)]

combinations = [[0, 1, 2], [3, 4, 5], [6, 7, 8], [0, 3, 6], [1, 4, 7], [2, 5, 8], [0, 4, 8], [2, 4, 6]]

human = input("Play as x or o? ")
computer = "o" if human == "x" else "x"

player_turn = human if human == "x" else computer

print("\nYou play as : " + human )
print("Computer play as : " + computer)

play()
