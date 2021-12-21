// C program to find HCF and LCM of two numbers

#include <stdio.h>

int LCM(int x, int y)
{
    int flag = 1;
    int i = 0;
    while (flag)
    {
        i++;
        if (i % x == 0 && i % y == 0)
        {
            flag = 0;
        }
    }
    return i;
}

int HCF(int x, int y)
{
    // We can also use the formula lcm(a,b)*hcf(a,b) = a*b
    // But here we will find hcf using loops
    int min = (x <= y) ? x : y;
    int ans;
    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    int lcm = LCM(a, b);
    int hcf = HCF(a, b);
    printf("The LCM is %d and HCF is %d\n", lcm, hcf);
    return 0;
}
