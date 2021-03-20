import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int n, m = 1;
        System.out.println("Enter the number");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (int i = 1; i <= n; i++) {
            m *= i;
        }
        System.out.println("" + m);
    }
}
