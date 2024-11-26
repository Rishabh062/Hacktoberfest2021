import java.util.*;

public class EachWordsVowelPrint

{

    public static void main(String args[])

    {

        String st, word="";

        char ch,ch1;

        int v;      // variable for vowel

        int c;      // variable for Consonents

        int w;      // variable for word

        int i,j;    // for loop

        int l,l1;   // l is for length of sentence and for word

        v=c=w=0;    // Initialization

        Scanner sc=new Scanner(System.in);

        System.out.println("Enter a sentence:");

        st=sc.nextLine();

        st=st + " ";    // one space add to the sentence

        //st=st.toUpperCase();

        l=st.length();  // length of the sentence

        for(i=0; i<l; i++)

        {

            ch=st.charAt(i);

            // if space is come then goto else calculate each words vowel

            if(ch!=' ')

            {

                word=word + ch;

            }

            else

            {

                l1=((word.trim()).length());   // length of the word               

                for(j=0; j<l1; j++)

                {

                    ch1=word.charAt(j);                    

                    switch(ch1)

                    {

                        case 'A' :

                        case 'a' :

                        case 'E' :

                        case 'e' :

                        case 'I' :

                        case 'i' :

                        case 'O' :

                        case 'o' :

                        case 'U' :

                        case 'u' :

                        v++; 

                    }                 

                }

                // print the word total vowels

                System.out.println(word + " contain vowel= " + v);

                // Initialize the words and v for vowel

                word = "";   

                v=0;

            }

        }

    }

}
