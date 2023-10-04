#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomoutput(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return (-1);
    }
    if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 'p'))
    {
        return 0;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 's'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char input[] = {'r', 'p', 's'};
    printf("Welcome to the GAME\n\n\n");
    for (int i = 0; i < 3; i++)
    {

        printf("Player1's turn:\n\n");
        printf("Choose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerchar = input[temp - 1];
        printf("You chosse %c\n", playerchar);

        printf("Computer's turn:\n");
        printf("Choose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissors\n");
        temp = generaterandomoutput(3) + 1;
        // scanf("%d", &temp);
        // getchar();
        compchar = input[temp - 1];
        printf("Comp chosse %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compScore += 1;
            printf("Comp GOT IT!\n\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a Draw\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You GOT IT!\n\n");
        }
        printf("You:%d\ncomp:%d\n", playerScore, compScore);
    }

    if (compScore > playerScore)
    {
        printf("Comp win the game");
    }
    else if (compScore == playerScore)
    {
        printf("Its a Draw");
    }
    else
    {
        printf("you win the Game");
    }

    return 0;
}
