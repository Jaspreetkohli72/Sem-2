import java.util.Scanner;

public class Table {
    public static void main(String[] args) {
        int a;
        System.out.println("Enter a number");

        Scanner input = new Scanner(System.in);

        a = input.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println("" + a + " X " + i + " = " + a * i);
        }
    }
}