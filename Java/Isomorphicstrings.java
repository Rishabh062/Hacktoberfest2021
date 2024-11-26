//Leetcode String question : Isomorphic Strings
//code by Lakshit

import java.util.*;

import static java.lang.Character.*;

class Isomorphicstrings
{
    public static boolean isIsomorphic(String s, String t)
    {
        char arr1[] = new char[256];
        char arr2[] = new char[256];
        Arrays.fill(arr1,'-');
        Arrays.fill(arr2,'-');
        int as,at;
        for (int i = 0; i < s.length(); i++) {
            as = (int)s.charAt(i);
            if(arr1[as]=='-')
            {
                arr1[as]=t.charAt(i);
            }
            else
            {
                if(arr1[as]!=t.charAt(i))
                    return false;
            }
        }
        for (int i = 0; i < t.length(); i++) {
            at = (int)t.charAt(i);
            if(arr2[at]=='-')
            {
                arr2[at]=s.charAt(i);
            }
            else
            {
                if(arr2[at]!=s.charAt(i))
                    return false;
            }
            }
        return true;
    }


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s,t;
        s=in.nextLine();
        t=in.nextLine();
        boolean ans = isIsomorphic(s,t);
        if(ans)
            System.out.println("true");
        else
            System.out.println("false");
    }
}
