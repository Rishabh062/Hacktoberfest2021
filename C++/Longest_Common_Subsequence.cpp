//  ---------------- OUTPUT -----------------------
// Enter the 1st string
// AGGTAB
// Enter the 2nd string
// GXTXAYB
// The longest common subsequence is : GTAB
// Length of LCS is 4
//  ------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int LCS(char *X, char *Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    int index = L[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

    i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        }

        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }

    cout << lcs << "\n";

    return L[m][n];
}

int main()
{

    char X[100];
    char Y[100];

    cout << "Enter the 1st string" << endl;
    gets(X);
    cout << "Enter the 2nd string" << endl;
    gets(Y);

    int m = strlen(X);
    int n = strlen(Y);

    cout << "The longest common subsequence is : ";
    int length = LCS(X, Y, m, n);
    cout << "Length of LCS is "
         << length;

    return 0;
}