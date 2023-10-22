#include <iostream>
using namespace std;

class vector{
	public:
		int x[3];
	
	vector()
	{
		x[0]=0;
		x[1]=0;
		x[2]=0;
	}
	
	vector(int a)
	{
		x[0]=a;
		x[1]=0;
		x[2]=0;
	}
	
	vector(int a, int b)
	{
		x[0]=a;
		x[1]=b;
		x[2]=0;
	}
	
	vector(int a, int b, int c)
	{
		x[0]=a;
		x[1]=b;
		x[2]=c;
	}
	
	vector addvector(vector s,vector t)
	{
		vector r;
		r.x[0]=s.x[0]+t.x[0];
		r.x[1]=s.x[1]+t.x[1];
		r.x[2]=s.x[2]+t.x[2];
		return r;
	}
	
	void display()
	{
		cout<<x[0]<<"i + "<<x[1]<<"j + "<<x[2]<<"k "<<endl;
	}
	
	~vector()
	{
		cout<<"                                                    Executing destructor"<<endl;
	}
};

main()
{
	vector v1,v2,v3,v4(3),v5(6),v6,v7(1,2),v8(3,4),v9,v10(1,2,3),v11(4,5,6),v12;
	
	cout<<endl<<"Default constructor: "<<endl;
	v3 = v3.addvector(v1,v2);
	cout<<"Vector 1: ";
	v1.display();
	cout<<"Vector 2: ";
	v2.display();
	cout<<"Sum of Vector 1 and Vector 2 is: "<<endl;
	v3.display();
	
	cout<<endl<<"1 Paramater constructor: "<<endl;
	v6 = v6.addvector(v4,v5);
	cout<<"Vector 1: ";
	v4.display();
	cout<<"Vector 2: ";
	v5.display();
	cout<<"Sum of Vector 1 and Vector 2 is: "<<endl;
	v6.display();
	
	cout<<endl<<"2 Paramater constructor: "<<endl;
	v9 = v9.addvector(v7,v8);
	cout<<"Vector 1: ";
	v7.display();
	cout<<"Vector 2: ";
	v8.display();
	cout<<"Sum of Vector 1 and Vector 2 is: "<<endl;
	v9.display();
	
	cout<<endl<<"3 Paramater constructor: "<<endl;
	v12 = v12.addvector(v10,v11);
	cout<<"Vector 1: ";
	v10.display();
	cout<<"Vector 2: ";
	v11.display();
	cout<<"Sum of Vector 1 and Vector 2 is: "<<endl;
	v12.display();
}
	
	
		
