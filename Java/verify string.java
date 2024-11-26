import java.util.Scanner;
class array {
    private final int[] array1 = new int[50];
    private int i, number, c = 0;
    private boolean ret;

    array(int n) {
        number = n;
    }

    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the element in the array");
        for (i = 0; i < number; i++) {
            array1[i] = sc.nextInt();
        }
    }

    public boolean logic() {
        for (i = 0; i < number; i++) {
            if (array1[i] == 1 || array1[i] == 4) {
                c += 1;
            }
        }
        if(c==number){
            ret=true;
        }
        else {
            ret=false;
        }
        return ret;
    }
}
public class verify {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of array");
        int n=sc.nextInt();
        array ar=new array(n);
        ar.input();
        System.out.println(ar.logic());
    }
}
Footer
