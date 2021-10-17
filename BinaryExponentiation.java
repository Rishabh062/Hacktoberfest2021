package com.saikat;

import java.util.Scanner;

public class BinaryExponentiation {
    public static void main(String[] args) {
        System.out.println("Enter base number");
        Scanner in = new Scanner(System.in);
        double base = in.nextDouble();
        System.out.println("Enter exponent");
        int power = in.nextInt();
        System.out.println(binaryExponentiation(base, power));
    }
    static double binaryExponentiation(double x, int n)
    {
        if(n<0)
            return negPow(x,n);
        if(n==0)
            return 1; //base case
        double res = binaryExponentiation(x,n/2);
        if(n%2==1)
            return x*(res*res); // if n is odd
        return res*res;
    }
    static double negPow(double x, int n)
    {
        if(n<0)
            return 1/x*negPow(1/x,-(n+1));
        return binaryExponentiation(x,n);
    }

}
