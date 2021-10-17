#include <iostream>
using namespace std;

int main()
{
    int rows, number = 1;

    cout << "Enter number of rows of Floyd's Triangle to print: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)                    /* If the no. of columns are less than or equal to the no. of rows we go on
        {
            cout << number << " ";                                 printing the number and incrementing it each time*/
            ++number;
        }

        cout << endl;
    }

    return 0;
}
