#include <bits/stdc++.h>
using namespace std;
class College
{
    string collegename;
    int noofbranches;

public:
    void getdata1()
    {
        cout << "enter college name and no of branches ";
        cin >> collegename >> noofbranches;
    }
    void show1()
    {
        cout << "The college name is " << collegename;
        cout << "No of students " << noofbranches;
    }
};
class CS : public College
{
    int noofstudents;

public:
    void getdata2()
    {
        cout << "Enter no. of students in CS branch ";
        cin >> noofstudents;
    }
    void show2()
    {
        cout << " No. of students in CS branch " << noofstudents;
    }
};
class Mechanical : public College
{
    int noofstudents;

public:
    void getdata3()
    {
        cout << "NO of Students in Mechanical Branch ";
        cin >> noofstudents;
    }
    void show3()
    {
        cout << "Noofstudents in mechanical " << noofstudents;
    }
};
class EC : public College
{
    int noofstudents;

public:
    void getdata4()
    {

        cout << "Enter No of students in EC branch ";
        cin >> noofstudents;
    }
    void show4()
    {

        cout << "TOtal no. of students in Ec branch " << noofstudents;
    }
};
int main()
{
    College c;
    c.getdata1();
    CS cs;
    cs.getdata2();
    Mechanical m;
    m.getdata3();
    EC ec;
    ec.getdata4();
    c.show1();
    m.show3();
    cs.show2();
    ec.show4();
    return 0;
}