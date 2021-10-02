/*   Created by IntelliJ IDEA.
 *   Author: Naman Seth (ns191)
 *   Date: 01/10/21
 *   Time: 11:22 AM
 *   File: BalancedParanthesis.java
 */
 
/* Problem Statement: */
/* Program to check braces, brackets, and paranthesis are balanced in a given string or not. */

import java.util.Scanner;

public class BalancedParanthesis {

    public void checkBalanced(String str) {
        boolean balanced = false;
        Stack obj = new Stack(str.length());
        obj.push(str.charAt(0));
        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == '(' || str.charAt(i) == '[' || str.charAt(i) == '{') {
                obj.push(str.charAt(i));
            } else if (obj.peek() == '(' && str.charAt(i) == ')') {
                obj.pop();
            } else if (obj.peek() == '[' && str.charAt(i) == ']') {
                obj.pop();
            } else if (obj.peek() == '{' && str.charAt(i) == '}') {
                obj.pop();
            } else {
                System.out.println("It's not balanced");
                return ;
            }
            if(i == str.length() - 1) {
                balanced = true;
            }
        }
        if(balanced && obj.top == -1) {
            System.out.println("It's balanced");
        } else {
            System.out.println("It's not balanced");
        }
    }
}


/* Stack class */

class Stack {
    char[] characters;
    int top;

    public Stack(int size) {
        characters = new char[size];
        top--;
    }

    public boolean isStackFull() {
        return (top == characters.length - 1);
    }

    public boolean isStackEmpty() {
        return (top != -1);
    }

    public void push (char data) {
        if(!isStackFull()) {
            characters[top + 1] = data;
            top++;
        } else {
            System.out.println("Stack is full");
        }
    }

    public void pop() {
        if(isStackEmpty()) {

            top--;
        } else {
            System.out.println("Stack is Empty");
        }
    }

    public char peek() {
        if(isStackEmpty()) {
            return characters[top];
        } else {
            System.out.println("Stack is empty");
        }
        return 0;
    }
}

/* Execution Class*/

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        BalancedParanthesis object = new BalancedParanthesis();
        object.checkBalanced(str);
    }
}
