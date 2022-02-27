import java.util.*;

public class Hospital
{
    String sym1,sym2;
    String hospital[][] = {{"chennai","1. Apollo Hospitals, Greams Lane, 21, Greams Rd, Thousand Lights, Chennai, Tamil Nadu 600006, India"},
            {"cochin","1. Cochin Hospital, Mahatma Gandhi Rd, Opp: Pallimukku Bus Stop, Pallimukku, Kochi, Kerala 682016, India"},
            {"hyderabad","1. Sriven Hospitals, Malaysian Township, Kukatpally, Hyderabad, Telangana 500073, India\n2. Virinchi Hospital, Banjara Hills"},
            {"bangalore","1. Columbia Asia Referral Hospital, 26/4, 1st Main Rd, beside Metro, Malleshwara, Bengaluru, Karnataka 560055, India\n2. Manipal Hospital, HAL Airport Road"},
            {"delhi","1. Fortis Memorial Research Institute, Sector - 44, Gurugram, Haryana 122002, India\n2. BLK Super Speciality Hospital, Delhi"},
            {"kolkata","1. Fortis Hospital, 730, Eastern Metropolitan Bypass, Anandapur, East Kolkata Twp, Kolkata, West Bengal 700107, India"},
            {"jammu","1. Government Medical College and hospital, maheshpur chowk, Bakshi Nagar, Jammu, Jammu and Kashmir 180001"}};

    public void get()
    {   String sy1,sy2;
        Scanner sc= new Scanner(System.in);
        System.out.println("Do you have a fever or cold ? or something else ?" );
        System.out.println("Enter symptom 1: ");
        sy1 = sc.nextLine();
        System.out.println("Do you have a cough or HeadAche ? or something else ?");
        System.out.println("Enter symptom 2: ");
        sy2 = sc.nextLine();
        sym1 = sy1.toLowerCase();
        sym2 = sy2.toLowerCase();
        System.out.println("Your symptoms are\nSymptom 1: "+sym1+"\nSymptom 2: "+sym2);
    }

    public void database_check()
    {
        String f = "fever";
        String c = "cold";
        String h = "headache";
        String co = "cough";
        if((sym1.equals(f) && sym2.equals(h))||(sym1.equals(h) && sym2.equals(f)))
            System.out.println("You are advised to take\n1. Dolo650 for 3 days (1-1-1)\n-------------");
        else if((sym1.equals(c) && sym2.equals(co))||(sym1.equals(co) && sym2.equals(c)) )
            System.out.println("You are advised to take\n1. CofStop Z Syrup 5ml 3 times a day\n-------------");
        else if((sym1.equals(f) && sym2.equals(co))||(sym1.equals(co) && sym2.equals(f)))
            System.out.println("You are advised to take\n1. CofStop Z Syrup 5ml 2 times a day\n2. Dolo650 for 3 days (1-1-1)\n-------------");
        else if((sym1.equals(c) && sym2.equals(h))||(sym1.equals(c) && sym2.equals(h)))
            System.out.println("You are advised to take\n1. CofStop Z Syrup 5ml 1 time a day\n2. Dolo650 for 2 days (1-1-1)\n-------------");
        else
        {
            System.out.println("Your symptoms do not match anything in our database or are too advanced.\nYou are suggested to see a doctor.");
            hospital_check();
        }
    }

    public void hospital_check()
    {
        Scanner sc= new Scanner(System.in);
        String loc1,location;

        int cond = 1;
        while(cond != 0)
        {
            System.out.println("Enter your location (city): ");
            loc1 = sc.nextLine();
            location = loc1.toLowerCase();
            int temp = 0;
            for(int i=0;i<7;i++)
            {
                if(location.equals(hospital[i][0]))
                {
                    System.out.println("We found the following hospital(s) near you:\n"+hospital[i][1]);
                    temp = 1;
                    cond = 0;
                    break;
                }
            }
            if (temp==0)
            {
                System.out.println("We weren't able to find any hospitals to recommend in that region.");
                System.out.println("Would you like to re-enter a different location?\n0 - yes\n1 - no");
                cond = sc.nextInt();
                sc.nextLine();
            }
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of patients :");
        int no = sc.nextInt();
        for (int i = 0 ; i < no ;i++) {
            System.out.println("Patient No." + (i + 1));
            System.out.println("------------------");
            Hospital patient = new Hospital();
            patient.get();
            patient.database_check();
        }
    }
}