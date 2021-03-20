import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        System.out.println("Enter the number");

        Scanner input = new Scanner(System.in);

        int i = input.nextInt();
        int res, sum = 0;
        while (i != 0) {
            res = i % 10;
            sum += res;
            i = i / 10;
        }
        System.out.println("Sum = " + sum);
    }
}
