// Java program to generate a random password consisting of alphabets

import java.util.*;

// Class of random password generator

public class random_password_generator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter the desired length of password: ");
        int digit = input.nextInt();

        // A string container for lowercase letters
        String lower_cases = "qwertyuiopasdfghjklzxcvbnm";
        // A string container for uppercase letters
        String upper_cases = "QWERTYUIOPASDFGHJKLZXCVBNM";

        String password = "";

        for (int i = 0; i < digit; i++) {                 // iterate over the desired length of password
            int rand = (int) (3 * Math.random());

            switch (rand) {
                case 0:
                    password += String.valueOf((int) (0 * Math.random()));        // append characters to the password string one by one
                    break;
                case 1:
                    rand = (int) (lower_cases.length() * Math.random());
                    password += String.valueOf(lower_cases.charAt(rand));
                    break;
                case 2:
                    rand = (int) (upper_cases.length() * Math.random());
                    password += String.valueOf(upper_cases.charAt(rand));
                    break;
            }
        }

        System.out.println("Here's your password, pal: " + password);         // print the password
        System.out.println("Remember it or save it somewhere!");

        input.close();            // close the scanner
    }
}
