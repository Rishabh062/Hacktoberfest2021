import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String str=scanner.nextLine();
        String newString="";
        for(int i=0;i<str.length();i++){
            newString=str.charAt(i)+newString;
        }
        System.out.println(newString);
    }
}
