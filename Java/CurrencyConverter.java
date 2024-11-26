import java.util.Scanner;
public class CurrencyConverter{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("1) rupees(₹) to Euro : ");
        System.out.println("2) rupees(₹) to USD : ");
        System.out.println("3) rupees(₹) to Pound : ");

        System.out.println("Choose one from the options: ");

        int exchange = sc.nextInt();
        switch(exchange){
            
            case 1:{
                System.out.println("Enter the number of rupees(₹):");

                double rs_to_e=sc.nextDouble();

                if(rs_to_e>=0){
                    System.out.println(rs_to_e+ " rupees is "+rs_to_e*0.01148400788+ " Euro");
                  }
                  else{
                      System.out.println("Please put in positive numbers!");
                  }
                  break;
            }

            case 2:{
                System.out.println("Enter the number of rupees(₹):");

                double rs_to_usd=sc.nextDouble();

                if(rs_to_usd>=0){
                    System.out.println(rs_to_usd+" rupees is "+rs_to_usd*0.015152+ " USD");
                  }
                  else{
                      System.out.println("Please put in positive numbers!");
                  }
                  break;
        }

        case 3:{
            System.out.println("Enter the number of rupees(₹):");

            double rs_to_p=sc.nextDouble();

            if(rs_to_p>=0){
                System.out.println(rs_to_p+" rupees is "+ rs_to_p*1.28+ " pound");
              }
              else{
                  System.out.println("Please put in positive numbers!");
              }
              break;
    }
  
}
sc.close();
    }
}

    

    