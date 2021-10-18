#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;                                                                                                                                          
typedef long long int ll;                             //g++ ll.cpp -o ll.exe  
typedef long double ld;  
typedef pair<ll,ll> iii;                              //all elements to 0   .\ll.exe
const ll mod =1e9+7;


// (X[i], Y[i]) are coordinates of i'th point.
double polygonArea(double X[], double Y[], int n)
{
    
    double area = 0.0;
 
    // Calculate value of shoelace formula
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;  // j is previous vertex to i
    }
 
    // Return absolute value
    return abs(area / 2.0);
}
 
int main()
{


    double X[] = {0, 299960316,299960317,299960316};
    double Y[] = {0, 0, 1,1};
 
    int n = sizeof(X)/sizeof(X[0]);
 
    cout << polygonArea(X, Y, n);
}
