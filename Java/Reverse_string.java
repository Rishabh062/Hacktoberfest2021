// Java program to ReverseString using StringBuilder

import java.lang.*;

import java.io.*;

import java.util.*;
 
// Class of ReverseString

class ReverseString {

    public static void main(String[] args)

    {
		Scanner sc= new Scanner(System.in);
		
		System.out.print("Enter a string: ");
		
		String input = sc.nextLine();
 
        StringBuilder input1 = new StringBuilder();
 
        // append a string into StringBuilder input1

        input1.append(input);
 
        // reverse StringBuilder input1

        input1.reverse();

        // print reversed String

        System.out.println(input1);

    }
}
