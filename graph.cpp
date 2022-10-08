#include <iostream>
#include <string>
using namespace std;

class Graph
{
 public:
 int graph[10][10],r,s,i,j,k;
 void create();
 void display();
};

void Graph :: create()
{
cout << "\n enter the no. of rows & columns\n";
cin >> r >> s;
cout << "\n Enter " << r * s << " elements\n";
for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cin >> graph[j][i];
        }
    }

cout << "\n Elements in the matrix are:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cout << "\t" << graph[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    Graph g;
    g.create();
    return 0;
}
