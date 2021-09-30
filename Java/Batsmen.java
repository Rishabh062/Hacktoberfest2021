import java.util.Scanner;

public class Batsmen {
    int b_code;
    String b_name;
    int runs;
    double bat_avg;
    int innings;
    int notout;


    public void get() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter batsmen code : ");
        b_code = sc.nextInt();
        System.out.println("Enter batsmen name : ");
        b_name = sc.next();
        System.out.println("Enter batsmen runs : ");
        runs = sc.nextInt();
        System.out.println("Enter batsmen innings count : ");
        innings = sc.nextInt();
        System.out.println("Enter batsmen notout count : ");
        notout = sc.nextInt();
    }

    public void calc()
    {
        bat_avg = runs/(innings - notout);
    }

    public void display()
    {
        System.out.println("-------------------------");
        System.out.println(b_code + " - " + b_name);
        System.out.println("Innings " + "- " + innings);
        System.out.println("Not out count " + "- " + notout);
        System.out.println("Runs " +"- " +runs);
        System.out.println("Batting Average " + "- " +bat_avg);
        System.out.println("-------------------------");
    }


    public static void main(String args[]) {
        int flag = 0;
        Scanner sc = new Scanner(System.in);
        Batsmen cus[] = new Batsmen[20];
        System.out.println("Enter number of players :");
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            cus[i] = new Batsmen();
            System.out.println("Enter details");
            System.out.println("---------------\n");
            cus[i].get();
            cus[i].calc();
        }
        for (int i = 0 ; i < N ;i++)
        {
            cus[i].display();
        }

    }
}
