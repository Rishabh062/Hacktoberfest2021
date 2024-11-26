#include <iostream>
using namespace std;

class Matrix{
	public:
		int mat[2][2];
		
	Matrix()
	{
		mat[0][0]=1;
		mat[0][1]=1;
		mat[1][0]=1;
		mat[1][1]=1;
	}
	
	Matrix(int a, int b, int c, int d)
	{
		mat[0][0]=a;
		mat[0][1]=b;
		mat[1][0]=c;
		mat[1][1]=d;
	}
	
	Matrix addmat(Matrix s ,Matrix t)
	{
		Matrix r;
		r.mat[0][0]=s.mat[0][0]+t.mat[0][0];
		r.mat[0][1]=s.mat[0][1]+t.mat[0][1];
		r.mat[1][0]=s.mat[1][0]+t.mat[1][0];
		r.mat[1][1]=s.mat[1][1]+t.mat[1][1];
		return r;
	}
	
	void display()
	{
		cout<<mat[0][0]<<"   "<<mat[0][1]<<endl<<mat[1][0]<<"   "<<mat[1][1]<<endl;
	}
	
	~Matrix()
	{
		cout<<endl<<"                                                    Executing destructor";
	}
};

main()
{
	Matrix s1,s2,s3,s4(2,4,6,8),s5(3,5,7,9),s6;
	
	
	cout<<endl<<"Default constructor: "<<endl;
	s3 = s3.addmat(s1,s2);
	cout<<endl<<"Matrix 1: "<<endl;
	s1.display();
	cout<<endl<<"Matrix 2: "<<endl;
	s2.display();
	cout<<"Sum of Matrix 1 and Matrix 2 is: "<<endl;
	s3.display();
	
	cout<<endl<<"Paramater constructor: "<<endl;
	s6 = s6.addmat(s4,s5);
	cout<<endl<<"Matrix 1: "<<endl;
	s4.display();
	cout<<endl<<"Matrix 2: "<<endl;
	s5.display();
	cout<<"Sum of Matrix 1 and Matrix 2 is: "<<endl;
	s6.display();

}
	
