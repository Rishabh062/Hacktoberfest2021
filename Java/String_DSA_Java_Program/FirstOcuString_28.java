// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

public class FirstOcuString_28 {


    public static int substring(String s1, String s2){
       
        if (s2.isEmpty()) {
            return 0;
        }

        int n=s1.length(); // haystack
        int m=s2.length(); // needle
        for (int i = 0; i <= n- m; i++) {
            
            int j=0;

            while (j < m && s1.charAt(i + j) == s2.charAt(j)) {
                j++;
            }

            if (j == m) {
                return i;
            }
           
        }
        return -1;
    }

    // Another Approach
    public static int strtr(String haystack, String needle){

        for(int i=0; i< haystack.length(); i++){
            if (haystack.charAt(i) == needle.charAt(0)) {
                int j=0;// needle
                int k=i; // haystack

                while (j < needle.length() && k < haystack.length() && haystack.charAt(k) == needle.charAt(j)) {
                    j++;
                    k++;
                }
                if (j == needle.length()) {
                    return i;
                }
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        String haystack = "sadbutsad";

        String tar_needle = "sad";

       System.out.println(strtr(haystack, tar_needle));
        System.out.println(substring(haystack, tar_needle));
    }
}
 