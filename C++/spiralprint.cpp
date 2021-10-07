#include <iostream>

using namespace std;

void spiralPrint(int input[100][100], int nRows, int nCols)
{
    int cs=0;
    int rs=0;
    int re=nRows-1;
    int ce=nCols-1;
    while(rs<=re && cs<=ce){
        for(int i=cs;i<=ce;i++){
            cout<<input[rs][i]<<" ";
        
        }
        rs++;
        for(int j=rs;j<=re;j++){
            cout<<input[j][ce]<<" ";
            
        }
        ce--;
        if(rs<=re){
            for(int i1=ce;i1>=cs;i1--){
                cout<<input[re][i1]<<" ";
                
            }
        }
        re--;
        if(cs<=ce){
            for(int j1=re;j1>=rs;j1--){
                cout<<input[j1][cs]<<" ";
            }
        }
        cs++;
    }
    
}

int main()
{
    int input[100][100];
    int nRows,nCols;
    cout<<"Enter rows and columns of the matrix"<<endl;
    cin>>nRows;
    cin>>nCols;
    cout<<"Enter the matrix :-"<<endl;
	for(int i=0;i<nRows;i++){
	    for(int j=0;j<nCols;j++){
	        cin>>input[i][j];
	    }
	}
	
	cout<<"Matrix is :-"<<endl;
	for(int i=0;i<nRows;i++){
	    for(int j=0;j<nCols;j++){
	        cout<<input[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"Spiral print :-";
	spiralPrint(input,nRows,nCols);
	
	

    return 0;
}
