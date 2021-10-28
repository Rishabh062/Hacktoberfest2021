#include <iostream>
using namespace std;
bool A[10][10];
void initialize ()
{
    for(int i = 0; i <10; ++i)
        for (int j = 0; j < 10; ++j)
            A[i][j] = false;
}
int main ()
{
    int x, y, nodes, edges;
    initialize(); //since there is no edge initially
    cout << "enter node" << endl;
    cin >> nodes; //Number of nodes
    cout << "enter edges" << endl;
    cin >> edges; // Number of edges
    for (int i = 0; i < edges; ++i)
    {
        cout << "enter X and Y" << endl;
        cin >> x >> y; //Mark the edges from vertex x to vertex y
        A[x][y] = true;
    }
    if (A[3][4] == true)
        cout << "There is an edge between 3 and 4" << endl;
    else
        cout << "There is no edge between 3 and 4" << endl;
    if (A[2][3] == true)
        cout << "There is an edge between 2 and 3" << endl;
    else
        cout << "There is no edge between 2 and 3" << endl;
    return 0;
}
