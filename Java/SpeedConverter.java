public class SpeedConverter {

    public static long ToMilesPerHour(double kilomtersPerHour) {

        if(kilomtersPerHour < 0) {
            return -1;
        }

        return Math.round(kilomtersPerHour / 1.609);
    }

    public static void printConversion(double kilometresPerHour) {

        if(kilometresPerHour < 0) {
            System.out.println("Invalid Value");
        } else {
            long milesPerHour = ToMilesPerHour(kilometresPerHour);
            System.out.println(kilometresPerHour + "km/h = " + milesPerHour + " mi/h");
        }
    }
}

// eg in main 
//       SpeedConverter.printConversion(100);
//       long miles = SpeedConverter.ToMilesPerHour(10.5);
//       System.out.println("Miles = " + miles);