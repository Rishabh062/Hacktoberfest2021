//To take two strings and check if the strings are anagram or not
import java.util.*;
class Anagram
{
   public static void main(String[] args)
   {
        String a="cat";//Taking input
        String b="atc";//Taking input
        boolean isAnagram=false;//boolean to cheque anagrams
         
        if(a.length()==b.length())
        {
         for(int i=0;i<a.length();i++)
          {
            char c=a.charAt(i);
            isAnagram=false;
            for(int j=0;j<b.length();j++)
            {
                if(b.charAt(j)==c)
                {
                    isAnagram=true;//chequing for anagram
                    break;
                }
                
              }
          }
        }
        else
        {
          isAnagram=false;
         }
    if(isAnagram)//Check true and give output
    {
        System.out.println("Anagram");
    }
    else //Check false and give output
    {
        System.out.println("not anagram");
    }
   }
}
