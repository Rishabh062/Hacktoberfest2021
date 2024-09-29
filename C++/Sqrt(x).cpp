/*Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 */
class Solution {
public:
    int mySqrt(long long int x) {
        
        if(x==0 || x==1) 
            
        {
            return x;
        }
        
         long long int i=1, result=1;
        while(result<= x)
        {
            i++;
            result = i*i;
    
        }
        return i-1;
    }
    
    int main()
    {
         long long int x= 11;
        cout<<mySqrt(x)<<endl;
        return 0;
    }
};



