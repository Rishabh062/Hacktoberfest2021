#include <iostream>
#include <iomanip>// Library that provides one hour in an hour structure and a format string to use
                 //Allows convenient string cycling, with insertion and extraction operators
using namespace std;
int main()
{
    int D,M,A;
cout << "Digite a Data de hoje no formato DD/MM/AA \n";
cout << "Dia:";
cin >> D ;
cout << "Mes:";
cin >> M ;
cout << "Ano:";
cin >> A;
//setw to use the condition if it has less than 2 houses, and the setfill to place the 0 if the condition is conceived.
cout << endl << "A data formatada: " << setw(2) << setfill('0')<<  D  << "/" << setw(2) << M << "/" << A;
}