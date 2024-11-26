import java.util.Scanner;
public class Vowels {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String s = inp.next();
        char[] arr = s.toCharArray();
        char[] vow = new char[]{'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
        int count =0;
        for(int i=0; i<arr.length;i++){
            for(int j =0; j<vow.length;j++){
                if (arr[i]==vow[j]){
                    count+=1;

                }
            }
        }
        System.out.println(count);
    }
}
