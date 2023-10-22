#include <iostream>
using namespace std;

class scalar{
	public:
		int x[3];
	
	scalar()
	{
		x[0]=1;
		x[1]=1;
		x[2]=1;
	}
	
	scalar(int a)
	{
		x[0]=a;
		x[1]=1;
		x[2]=1;
	}
	
	scalar(int a, int b)
	{
		x[0]=a;
		x[1]=b;
		x[2]=1;
	}
	
	scalar(int a, int b, int c)
	{
		x[0]=a;
		x[1]=b;
		x[2]=c;
	}
	
	scalar multiplyscalar(int s ,scalar t)
	{
		scalar r;
		r.x[0]=t.x[0]*s;
		r.x[1]=t.x[1]*s;
		r.x[2]=t.x[2]*s;
		return r;
	}
	
	void display()
	{
		cout<<x[0]<<", "<<x[1]<<", "<<x[2]<<endl;
	}
	
	~scalar()
	{
		cout<<endl<<"                                                    Executing destructor";
	}
};

main()
{
	scalar s1,s2(3),s3(3,6),s4(3,6,9);
	
	
	cout<<endl<<"Default constructor: "<<endl;
	cout<<"Scalar : ";
	s1.display();
	cout<<"Scalar Multiplier : 2";
	s1 = s1.multiplyscalar(2,s1);
	cout<<endl<<"Product of Scalar and Multiplier 2 is: "<<endl;
	s1.display();
	
	cout<<endl<<"1 Parameter constructor: "<<endl;
	cout<<"Scalar : ";
	s2.display();
	cout<<"Scalar Multiplier : 4";
	s2 = s2.multiplyscalar(4,s2);
	cout<<endl<<"Product of Scalar and Multiplier 4 is: "<<endl;
	s2.display();
	
	cout<<endl<<"2 Parameter constructor: "<<endl;
	cout<<"Scalar : ";
	s3.display();
	cout<<"Scalar Multiplier : 6";
	s3 = s3.multiplyscalar(6,s3);
	cout<<endl<<"Product of Scalar and Multiplier 6 is: "<<endl;
	s3.display();
	
	cout<<endl<<"3 Parameter constructor: "<<endl;
	cout<<"Scalar : ";
	s4.display();
	cout<<"Scalar Multiplier : 8";
	s4 = s4.multiplyscalar(8,s4);
	cout<<endl<<"Product of Scalar and Multiplier 8 is: "<<endl;
	s4.display();
}
	
	
		
