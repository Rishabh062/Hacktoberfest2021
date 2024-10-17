def user1turn(board): #user 1 turn
    pos=int(input("enter x position:"))
    if(board[pos-1]!=0):
        print("wrong move")
        exit(0)
    board[pos-1]=-1

def user2turn(board): #user 2 turn
    pos=int(input("enter O position:"))
    if(board[pos-1]!=0):
        print("wrong move")
        exit(0) #if wrong move then program ends
    board[pos-1]=1

def displayboard(board): #this function used to print the board
    for i in range(0,9):
        if((i>0) and (i%3==0)):
            print("\n")
        if(board[i]==0):#0=empty
            print("_ ",end=" ")
        if(board[i]==1):#1=O
            print("O",end=" ")
        if(board[i]==-1):#-1=X
            print('X',end=" ")
    print("\n")



def analyzeboard(board): #this function used to find out if somebody has won or not
    cb=[[0,1,2],[3,4,5,],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]]#all combinations of winning
    for i in range(0,8):
        if((board[cb[i][0]]!=0) and (board[cb[i][1]]==board[cb[i][2]]) and (board[cb[i][0]]==board[cb[i][1]])):
            return board[cb[i][0]]#if somebody won

    return(0)#if no one won

def minmax(board,player):
    x=analyzeboard(board)
    if(x!=0):
        return (x*player)
    pos=-1
    value=-2
    for i in range(0,9):
        if(board[i]==0):
            board[i]=player
            score=-minmax(board, player*-1)
            board[i]=0
            if(score>value):
                value=score
                pos=i
    if(pos==-1):
        return 0
    return value



def computerturn(board):
    pos=-1
    value=-2
    for i in range(0,9):
        if(board[i]==0):
            board[i]=1
            score=-minmax(board, -1)
            board[i]=0
            if(score>value):
                value=score
                pos=i
    board[pos]=1




def main():
    choice=int(input("enter 1 for single player and 2 for multiplayer:"))
    board=[0,0,0,0,0,0,0,0,0] #mathmatical representation of gameboard
    if(choice==1):
        player=int(input("enter 1 to play first and 2 to play second:"))
        for i in range(0,9):
            if(analyzeboard(board)!=0):
                break
            if((i+player)%2==0):
                computerturn(board)
            else:
                displayboard(board)
                user1turn(board)

    else:
        for i in range(0,9):
            if(analyzeboard(board)!=0):#checking if somebody has won or not
                break#if somebody then show final result
            else:
                if(i%2==0):#even numbers(0,4..) are user1 turn
                    displayboard(board)#will show gameboard after every step
                    user1turn(board)
                else:       #odd numbers(1,3,..) are user2 turn
                    displayboard(board)
                    user2turn(board)

        x=analyzeboard(board) #code for multiplayer
        if(x==0):
            displayboard(board)
            print("draw")
        if(x==1):
            displayboard(board)
            print("play O won")
        if(x==-1):
            displayboard(board)
            print("play X won")
main()

