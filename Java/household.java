import java.util.Scanner;

public class household {
    int members;
    String ID;
    int income;

    void get()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of members in the household :");
        members = sc.nextInt();
        System.out.println("Enter the ID of the household : ");
        ID = sc.next();
        for (int i = 0 ; i < members ; i++)
        {
            int o;
            System.out.println("Enter the income of " + (i+1) + " person :");
            o = sc.nextInt();
            income += o;
        }
    }

    void print()
    {
        System.out.println("Identification number : " + ID);
        System.out.println("Income : " + income);
    }

    static int pov_level(int n)
    {
        int p;
        p = 7500 + (950 *(n -2));
        return p;
    }

    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int n;
        System.out.println("Enter the number of households : ");
        n = sc.nextInt();
        household ho[] = new household[30];
        for (int i = 0; i  < n ;i++)
        {
            ho[i] = new household();
            System.out.println("Enter details \n --------------\n");
            ho[i].get();
        }
        int x = 0;

        for (int i = 0 ; i < n ;i++){
            x += ho[i].income;
        }

        int h = x/n;

        System.out.println("Households with income greater than average \n ------------------\n");
        for (int i = 0 ; i < n ;i++){
            if (ho[i].income >= h)
            {
                ho[i].print();
            }
        }

        int count = 0;
        for (int i = 0 ; i < n ; i++)
        {
            int xo;
            xo = pov_level(ho[i].members);
            if (xo > ho[i].income){
                count += 1;
            }
        }

        double percen = (count/(double)n);
        double percent = percen*100;
        System.out.println("\n");
        System.out.println("Percent of households below poverty line : "+ percent);
    }
}
