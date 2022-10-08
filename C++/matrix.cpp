#include <iostream>
using namespace std;
class matrix
{
public:
    int a[4][4], b[4][4], c[4][4], d[4][4], r, s, i, j,k;
    void get();
    void put();
    void sum();
    void diff();
    void Multi();
    void trans();
};

void matrix ::get()
{
    cout << "\n enter the no. of rows & columns\n";
    cin >> r >> s;
    cout << "\n Enter " << r * s << " elements\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cin >> a[j][i];
        }
    }
    cout << "\n Enter elements of second Matrix are\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cin >> b[j][i];
        }
    }
}
void matrix ::put()
{
    cout << "\n Elements in the matrix are:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << "\n";
    }
    cout << "\n Elements in the 2nd matrix are:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            cout << "\t" << b[i][j];
        }
        cout << "\n";
    }
}
void matrix ::sum()
{
    cout << "Sum of Matrices 1 and 2 is\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
void matrix ::diff()
{
    cout << "Diffrence of Matrices 1 and 2 is\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            d[i][j] = a[i][j] - b[i][j];
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}
void matrix ::Multi()
{
    cout << "Multiplication of Matrices 1 and 2 is\n";
    {
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<s;j++)    
                {    
                    d[i][j]=0;    
                    for(k=0;k<r;k++)    
                    {    
                        d[i][j]+=a[i][k]*b[k][j];    
                    }    
                }    
            }
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<s;j++)    
                    {    
                        cout<<d[i][j]<<" ";    
                    }    
                cout<<"\n";    
            }
        }

}
void matrix ::trans()
{
    cout << "Transpose of the matrix is:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < s; j++)
        {
            c[i][j] = a[j][i];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    matrix ob;
    char ch;
    do
    {
        ob.get();
        ob.put();
        ob.sum();
        ob.diff();
        ob.Multi();
        ob.trans();
        cout << "Do You want to do another set of opertions y/n??\n";
        cin >> ch;
    } while (ch != 'n');
    cout << "Thank You!!\n";
    system("pause");
    return 0;
}
