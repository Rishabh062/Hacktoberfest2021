import java.util.*;

public class KMP_Algo_PatternMatching {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String text = sc.next();
        String pattern = sc.next();
        sc.close();
        System.out.println(KMP_Search(text, pattern));
    }

    static int KMP_Search(String text, String pattern) {
        int n = text.length();
        int m = pattern.length();

        // Create lps[] that will hold the longest
        // Prefix suffix values for pattern
        int lps[] = new int[m];

        // Preprocess the pattern (calculate lps[] array)
        computeLPSArray(pattern, m, lps);

        int i = 0; // index for text[]
        int j = 0; // index for pattern[]

        while (i < n) {
            if (text.charAt(i) == pattern.charAt(j)) {
                i++;
                j++;
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
            if (j == m) {
                return i - j;
            }
        }
        return -1;
    }

    static void computeLPSArray(String pattern, int m, int lps[]) {
        int len = 0; // length of the previous longest prefix suffix
        int i = 1;
        lps[0] = 0;

        // The loop calculates lps[i] for i = 1 to M-1
        while (i < m) {
            if (pattern.charAt(i) == pattern.charAt(len)) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = len;
                    i++;
                }
            }
        }
    }
}
