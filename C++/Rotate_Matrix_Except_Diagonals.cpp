Given a square matrix mat[][] of dimension N and an integer K,
rotate the matrix by 90 degrees K times  without changing the position
of the diagonal elements.


#include <bits/stdc++.h>
using namespace std;

// Function to print the matrix
void print(vector<vector<int> >& mat)
{
    // Iterate over the rows
    for (int i = 0; i < mat.size(); i++) {

        // Iterate over the columns
        for (int j = 0; j < mat[0].size(); j++)

            // Print the value
            cout << setw(3) << mat[i][j];
        cout << "\n";
    }
}

// Function to perform the swapping of
// matrix elements in clockwise manner
void performSwap(vector<vector<int> >& mat,
                 int i, int j)
{
    int N = mat.size();

    // Stores the last row
    int ei = N - 1 - i;

    // Stores the last column
    int ej = N - 1 - j;

    // Perform the swaps
    int temp = mat[i][j];
    mat[i][j] = mat[ej][i];
    mat[ej][i] = mat[ei][ej];
    mat[ei][ej] = mat[j][ei];
    mat[j][ei] = temp;
}


void rotate(vector<vector<int> >& mat,
            int N, int K)
{
    // Update K to K % 4
    K = K % 4;

    // Iterate until K is positive
    while (K--) {

        // Iterate each up to N/2-th row
        for (int i = 0; i < N / 2; i++) {

            // Iterate each column
            // from i to N - i - 1
            for (int j = i;
                 j < N - i - 1; j++) {

                // Check if the element
                // at i, j is not a
                // diagonal element
                if (i != j
                    && (i + j) != N - 1) {

                    // Perform the swapping
                    performSwap(mat, i, j);
                }
            }
        }
    }

    // Print the matrix
    print(mat);
}

// Driver Code
int main()
{
    int K = 5;
    vector<vector<int> > mat = {
        { 1, 2, 3, 4 },
        { 6, 7, 8, 9 },
        { 11, 12, 13, 14 },
        { 16, 17, 18, 19 },
    };
    int N = mat.size();
    rotate(mat, N, K);

    return 0;
}



OUTPUT :
1   11   6  4
17   7   8  2
18  12  13  3
16  14   9 19

Time and Space Complexity :
Time Complexity: O(N^2)
Auxiliary Space: O(1)
