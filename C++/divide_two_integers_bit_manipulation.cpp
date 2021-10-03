//-------------------------------- PROBLEM STATEMENT---------------------------------------------
//Given two integers dividend and divisor, divide two integers without 
//using multiplication, division, and modulus operator. Task is to find the integer part of quotient only!!
//For this problem, assume that your function returns 231 − 1 when the division result overflows.
// some parts of problem statement are taken from leetcode


//--------------------------- SOLUTION--------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;


// WE WILL USE BIT MANIPULATION HERE TO SOLVE THIS PROBLEM
int get_truncated_quotient_using_bit_magic(int dividend, int divisor)
{
    if (dividend == INT_MIN && divisor == -1) {// base case to keep track of overflows
            return INT_MAX;
        }
        long dvd = labs(dividend), dvs = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        // sign variable to keep track if quotient is negative or not

    //we right shift the divisor till it is less than or equal to dividend
    // and maintain a count of how many times the divisor can be subtracted from dividend
    // we add that count to ans, and change dividend accordingly

        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            
            while ((temp << 1) <= dvd) {
                temp <<= 1;// temp is right shifted by 1, or doubled
                m <<= 1;// we right shift m by 1, to to keep track of quotient
            }
            dvd -= temp;//subtract the largest factor of divisor obtained by right shifting such that conditions are satisfied
            ans += m;//m keeps track how may times 
        }
    return sign * ans;// sign is to make sure that quotient follows sign convention 
}
// time complexity: O(log(dividend))

int main()
{
    int divisor, dividend;
    // taking input for divisor
    cout<<"enter divisor: ";
    cin>>divisor;
    // taking input for dividend
    cout<<"enter dividend: ";
    cin>>dividend;
    // printing the truncated quotient or the integer part of quotient
    
    cout<<"integer quotient using bit manipulation: ";
    cout<<get_truncated_quotient_using_bit_magic(dividend, divisor);
    return 0;
}