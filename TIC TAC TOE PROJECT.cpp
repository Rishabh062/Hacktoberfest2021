#include <bits/stdc++.h>

using namespace std;

// A fun() which returns a 2D char array.

char **createBoard(int boardSize = 3)
{
    cout << "Engagging board creation" << endl;
    // Returns a dynamically allocated array.
    char **board = new char *[boardSize];

    for (int i = 0; i < boardSize; i++)
    {
        board[i] = new char[boardSize];
    }

    return board;
}

void labelBoard(char **board, int boardSize)
{
    char counter = '0';
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardSize; j++)
        {
            board[i][j] = counter++;
        }
    }
}

void displayBoard(char **board, int boardSize)
{
    system("cls");
    printf("\n\n");

    int unitSize = boardSize;
    //Logic goes here.
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardSize; j++)
        {
            if (j < boardSize - 1)
                cout << " " << board[i][j] << " |";
            else
                cout << " " << board[i][j] << " ";
        }
        cout << endl;

        if (i < boardSize - 1)
            for (int k = 0; k <= unitSize * boardSize; k++)
                cout << "-";

        cout << endl;
    }
    cout << endl;
}

void choiceToCords(int *x, int *y, int boardSize)
{
    int ch;
    cin >> ch;

    *x = ch / boardSize;
    *y = ch % boardSize;
}

int checkWinCondition(char **board, int boardSize, int playerTurn)
{
    for (int i = 0; i < boardSize; i++)
    {
        char rowVal = board[i][0];
        int rowMatch = 1;
        char colVal = board[0][i];
        int colMatch = 1;
        for (int j = 0; j < boardSize; j++)
        {
            if (board[i][j] == rowVal)
                rowMatch++;
            if (board[j][i] == rowVal)
                colMatch++;
        }
        if (rowMatch == boardSize + 1 || colMatch == boardSize + 1)
            return playerTurn;
    }

    char leftD = board[0][0];
    int lD_match = 1;
    char rightD = board[boardSize - 1][0];
    int rD_match = 1;

    for (int i = 0; i < boardSize; i++)
    {
        if (board[i][i] == leftD)
            lD_match++;
        if (board[boardSize - 1][i] == rightD)
            rD_match++;
    }

    if (leftD == boardSize || rightD == boardSize)
        return playerTurn;

    return -1;
}

void runGame(char **board, int boardSize, char **playerIds)
{
    char weapon[] = {'X', 'O'};
    int playerTurn = 0, rounds = 0;

    displayBoard(board, boardSize);

    while (rounds < 9)
    {
        playerTurn = (playerTurn) ? 0 : 1; // Ternary Operators.

        int X, Y;
        cout << playerIds[playerTurn] << ", your turn > \n";
        choiceToCords(&X, &Y, boardSize);

        board[X][Y] = weapon[playerTurn];
        displayBoard(board, boardSize);

        int winner = checkWinCondition(board, boardSize, playerTurn);
        if (winner != -1)
        {
            cout << playerIds[winner] << " has won, bow down yall" << endl;
            exit(0);
        }

        rounds++;
    }
    cout << " Issa draw!" << endl;
}

char **fetchPlayers()
{
    char **playerNames = new char *[2];
    for (int i = 0; i < 2; i++)
    {
        playerNames[i] = new char[30];
        cout << "Player " << (i + 1) << " > ";
        cin >> playerNames[i];
    }

    return playerNames;
}

int main(void)
{

    int boardSize;
    cout << "Boardsize? ";
    cin >> boardSize;
    char **board = createBoard(boardSize);
    labelBoard(board, boardSize);
    displayBoard(board, boardSize);

    char **playerIds = fetchPlayers();
    runGame(board, boardSize, playerIds);

    return 0;
}
