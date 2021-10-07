import java.util.Scanner;

public class PrimitiveNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int number  = sc.nextInt();
        isPrimitive(number);
    }

    private static void isPrimitive(int number) {
        int count = 0;
        for(int i=1; i<=number; i++){
            if(number%i==number || number%i==0){
                count++;
            }
        }

        if(count==2){
            System.out.println(number + " is a Prime Number");
        }else {
            System.out.println(number + " is not Prime Number");
        }
    }
}
