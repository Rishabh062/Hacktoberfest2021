// In this we can move 1 path horizontal 1 path vertical to reach to the bottom 
// we can move horizontal till it is less than no of rows and vertical till it is less than columns
// we will make two calls for horizontal and vertical 
// It can move horizontally (increase col) till sc<sd same with vertical 
// on sr==dr and sc==dc we will return empty vector


#include<iostream>
#include<vector>
using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column

vector<string> getMazePaths(int sr, int sc, int dr, int dc) 
{
    if (sr == dr && sc == dc)
    {
        string base = "";

        vector<string> baseCase;

        baseCase.push_back(base);

        return baseCase;
    }

    vector<string> result;

    if(sc<dc)
    {
        vector<string> pathHorizontal = getMazePaths(sr, sc+1, dr, dc);

        int Size = pathHorizontal.size(); 

        for (int idx =0; idx<Size; idx++) 
        {
            pathHorizontal[idx] = "h" + pathHorizontal[idx] ; 

            result.push_back(pathHorizontal[idx]); 
        }
    }

    if(sr<dr)
    {
        vector<string> pathVertical = getMazePaths(sr+1, sc, dr, dc); 

        int Size = pathVertical.size();

        for (int idx =0; idx<Size; idx++)
        {
            pathVertical[idx] = "v" + pathVertical[idx];  

            result.push_back(pathVertical[idx]); 
        }
    }

    return result;
}


void display(vector<string>& arr)
{
    cout << "[";

    for(int index = 0; index < arr.size(); index++)
    {
        cout << arr[index];

        if(index < arr.size() -1)
        {
            cout << ", ";
        } 
    }

    cout << "]"<<endl;
}


int main()
{
    int rows,cols;

    cin >> rows >> cols; 

    vector<string> ans = getMazePaths(0,0,rows-1,cols-1); 

    display(ans);

    return 0;
} 