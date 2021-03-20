import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        String inp, rev = " ";
        int i = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("Enter te String needed to be reversed");
        inp = input.nextLine();
        for (i = inp.length() - 1; i >= 0; i--) {
            rev += inp.charAt(i);
        }
        System.out.println("The reverse of String " + inp + " is" + rev);
    }
}
