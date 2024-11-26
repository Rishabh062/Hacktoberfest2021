#include <iostream>
using namespace std;

int main()
{
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter the height of triangle ";
    cin >> rows;                                                          // It stores the height of palindrome which is eventually equal to no. of rows!
    for(int i = 0; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";                                                  //Inserting spaces till (no. of rows - i)
            ++count;
        }

        while(k != 2*i-1)                                                  
        {
            if (count <= rows-1)
            {
                cout << i+k << " ";                                         // This code block represents numbers in ascending order forming a palindrome
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";                                //Insert spaces till row no. i.e k is equal to 2*i-1
            }
            ++k;
        }
        count1 = count = k = 0;                                             // Initializing all the variables with zero i.e removing all the data stored in them!

        cout << endl;
    }
    return 0;
}
