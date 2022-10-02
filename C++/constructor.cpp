// Passing value to the base class constructor from derived
#include<iostream>
#include<string>

using namespace std;

class Father
{
    protected :
    int height;
    public:
    Father(int iheight)
    {
        cout<<"Constructor of the father is called"<<endl;
        height = iheight;
    }
    
};
class Mother
{
    protected :
    string color;
    public:
    Mother(string icolor)
    {
        cout<<"Constructor of the Mother is called"<<endl;
        color = icolor;
    }
    
};
class child : public Father , public Mother
    {
        public:
        child(int x, string icolor): Father(x), Mother(icolor)
        {
            cout<<"Child class constructor";

        }
        void display()
        {
            cout<<"height"<<endl<<height<<endl<<color;
        }


    };
    int main()
    {
        child harsh(25,"white") ;
        harsh.display();

    }
