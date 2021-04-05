//To take different user inputs

import java.util.Scanner;

public class InputDataExample {
    public static void main(String[] args) {
        int a;
        float b;
        String str;

        Scanner input = new Scanner(System.in);

        System.out.println("Enter a String value");
        str = input.nextLine();
        System.out.println("Enter an Integer value");
        a = input.nextInt();
        System.out.println("Enter a Float value");
        b = input.nextFloat();
        System.out.println("String input = " + str);
        System.out.println("Interger input = " + a);
        System.out.println("Float input = " + b);
        input.close();
    }
}
