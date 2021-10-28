#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;                                    // coef is a counter variable to perform the pascal's triangle function

    cout << "Enter number of rows: ";
    cin >> rows;                                           // No. of rows the user wants to input

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++) 
            cout <<"  ";                                    // Adding spaces till columns are less than or equal to the (no. of rows - i)

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)                          // Base case
                coef = 1;                                   
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;                                     // To skip to the other row
    }

    return 0;
}
