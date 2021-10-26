#include<iostream>

using namespace std;

bool isPossible(int[9][9],int,int,int);
bool solve(int[9][9],int,int);
void display_grid(int[9][9],int[9][9]);
void fancy_diplay(int[9][9],int[9][9]);

int main()
{					//  0 1 2  3 4 5 6 7 8 = x	
	int grid[9][9]={2,0,9, 0,0,3, 0,0,1,// 0 = y
					0,7,0, 6,1,0, 0,3,0,// 1
					0,0,0, 0,0,0, 7,0,0,// 2
					
					0,5,0, 0,0,0, 0,7,0,// 3
					7,0,0, 0,0,0, 0,0,4,// 4
					0,3,0, 0,0,0, 0,1,2,// 5
					
					0,0,2, 0,8,0, 0,0,0,// 6
					0,1,0, 0,5,0, 0,9,0,// 7
					4,0,0, 3,0,0, 2,0,5};//8
	
	int inpt[9][9];
	fancy_diplay(grid,inpt);
	
	solve(grid,0,0);				//Only this function you need in main
	
	display_grid(grid,inpt);
	return 0;
}

bool isPossible(int grid[9][9],int y,int x,int n)
{
	//checks the rows and columns if the number is there
	for(int i=0;i<9;i++)
	{
		if(grid[y][i]==n||grid[i][x]==n)
			return false;
	}
	
	//checks the boxes if the number is there
	int x0=(x/3)*3;
	int y0=(y/3)*3;
	
	for(int i=y0;i<y0+3;i++)
	{
		for(int j=x0;j<x0+3;j++)
		{
			if(grid[i][j]==n)
				return false;
		}
	}
	
	return true;
}

bool solve(int grid[9][9],int y,int x)
{
	if(y==8&&x==9)	//returns true to all in stack if end is reached
		return true;
	
	if(x==9)	    //if column has ended, reset column to 0 and incriment row
	{
		y++;
		x=0;
	}
	
	if(grid[y][x]!=0)			//if location is full go to next column in the row
		return solve(grid,y,x+1);
		
	for(int i=1;i<10;i++)
	{
		if(isPossible(grid,y,x,i))
		{
			grid[y][x]=i;	   //assign any number and pretend it is correct
			
			if(solve(grid,y,x+1))   //returns true if next number in the column is Possible
				return true;	
				
			grid[y][x]=0;	 //if the next number is not possible replace this number back to zero	
		}
	}
	return false;		//if none of the numbers match in the next column the control return false to all in stack
}

void display_grid(int grid[9][9], int inpt[9][9])
{
	for(int i=0;i<9;i++)
	{
		int k=1;
		if((i/3)*3==i&&i>0)
		{
			cout<<" ";
			for(int k=0;k<25;k++)
			{
				if(k>10&&k<14)
					cout<<"  ";
				else
					cout<<"= ";
			}
			cout<<endl;
		}
		for(int j=0;j<9;j++)
		{
			if((j/3)*3==j)
			{
				if(j>0)
					cout<<"| ";
				else
					cout<<" ";
			}
			if(k)
				cout<<inpt[i][j]<<" ";
			
			if(j==8&&k)
			{
				k=0;
				j=0;
				cout<<"\t     ";
			}
			if(!k)
				cout<<grid[i][j]<<" ";
		}
		if(i<8)
			cout<<endl;
	}
	cout<<endl<<endl;
}

void fancy_diplay(int grid[9][9],int inpt[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			inpt[i][j]=grid[i][j];
		}
	}
	cout<<"\n\t INPUT";
	for(int i=0;i<11;i++)
		cout<<"  ";
	cout<<" OUTPUT \n\n";	
}

