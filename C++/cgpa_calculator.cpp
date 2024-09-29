#include <iostream>
/*
Code to calculate the Cumulative Grade Point Average for any Student
*/
using namespace std;

int main()
{
    string name, course_name;
    int denom, course_no;


    cout << "Hello world!" << endl;
    cout << "This program can calculate the Semester Grade Point Average (SGPA) of any student" << endl;
    cout << "What is your name? " << endl;
    getline(cin, name);
    cout << "How many courses did " << name << " offer last semester? " << endl;
    cin >> course_no;
    float WS = 0; //Weighted Score
    float j = 0;    // Where j is a self-assigned iteration counter
    int UA = 0; //Units Attempted
    int UF = 0; //Units Failed
    int UP;
    while(j < course_no)
    {
        float gradeeqn, unit, gradepoint;
        string grade;

        cout << "For the each course, input the course code for the course: " <<endl;
        cout << endl;
        cout << "This should be input without SPACE (eg. as CPE211)" << endl;
        cin >> course_name;

        cout << "For "  << course_name <<", input the course unit: " <<endl;
        cin >> unit;
        cout << "In Capital Letters, kindly input your grade in " << course_name << " i.e. A,B,C etc. " << endl;
        cin >> grade;
        // Converting the grade to their equivalent
        if(grade == "A")
            gradeeqn = static_cast<float>(5);
        else if(grade == "B")
            gradeeqn = static_cast<float>(4);
        else if(grade == "C")
            gradeeqn = static_cast<float>(3);
        else if(grade == "D")
            gradeeqn = static_cast<float>(2);
        else if (grade == "E")
            gradeeqn = static_cast<float>(1);
        else if (grade == "F")
        {
            gradeeqn = static_cast<float>(0);
            UF = UF + unit; // Computing Units Failed to make easy the computation of Units Passed
        }

        gradepoint = gradeeqn * unit;
        UA = UA + unit; // Units Attempted Computed
        UP = UA - UF; //Computing Units Passes as Units Attempted less Units Failed
        WS = WS + gradepoint; // Weighted Score Computed

        j = j + 1;

    }
    cout.setf(ios:: fixed);
    cout.precision(2);
    cout << "THE UNITS ATTEMPTED BY " << name << " is " << UA << endl;
    cout << "THE UNITS PASSED BY " << name << " is " << UP << endl;
    cout << "THE WEIGHTED SCORE FOR " << name << " is " << WS << endl;
    cout << "THE SEMESTER GRADE POINT AVERAGE FOR "<< name << " is " << WS/UA << endl;


    return 0;
}
