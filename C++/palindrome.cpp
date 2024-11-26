#include <iostream>
using namespace std;

int reverse=0;     #global variable

int palindrom(int num)
{
    int digit;
    do
     {
         digit = num % 10;
         reverse = (reverse * 10) + digit;
         num = num / 10;
     } while (num != 0);
    return reverse;
}

int main()
{
     int n, num;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     palindrom(num);
     cout << " The reverse of the number is: " << reverse << endl;

     if (n == reverse)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
