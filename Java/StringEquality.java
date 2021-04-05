//to check two string are equal or not

import java.util.Scanner;

public class StringEquality {
    public static void main(String[] args) {
        String a;
        String b;

        Scanner input = new Scanner(System.in);

        System.out.println("Enter the value for first String");
        a = input.nextLine();
        System.out.println("Enter the value for second String");
        b = input.nextLine();
        if (a.equals(b)) {
            System.out.println("Two Strings are Equal");
        } else {
            System.out.println("Two Strings are different");
        }
        input.close();
    }
}
