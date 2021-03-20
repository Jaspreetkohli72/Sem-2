import java.util.Scanner;

public class CheckForPrimeNum {
    public static void main(String[] args) {
        int a, flag = 0;

        Scanner input = new Scanner(System.in);

        System.out.println("Enter the number to check for prime number");
        a = input.nextInt();
        for (int i = 2; i <= a; i++) {
            if (a % i == 0) {
                flag += 1;
            }
        }
        if (flag == 1) {
            System.out.println("The entered number is prime number");
        } else {
            System.out.println("The entered number is non prime");
        }
    }
}
