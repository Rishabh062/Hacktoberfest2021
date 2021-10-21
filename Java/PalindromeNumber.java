package Java;

class PalindromeNumber {
    public static boolean isPalindromeNumber(int target) {
        String targetAsString = Integer.toString(target);
        StringBuilder result = new StringBuilder();
        for(int i = targetAsString.length() - 1; i >= 0; i--) {
            result.append(targetAsString.charAt(i));
        }

        return result.toString().equals(targetAsString);
    }

    public static boolean isPalindromeNumberWithAnotherApproach(int target) {
        if(target < 0 || (target % 10 == 0 && target != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while(target > revertedNumber) {
            revertedNumber = revertedNumber * 10 + target % 10;
            target /= 10;
        }

        return target == revertedNumber || target == revertedNumber / 10;
    }

    public static void main(String [] args) {
        boolean isPalindrome = PalindromeNumber.isPalindromeNumber(121);
        if(isPalindrome) {
            System.out.println("121 is palindrome");
        } else {
            System.out.println("121 is not palindrome");
        }
    }
}