import java.util.Scanner;

public class FactorialReccursion {

    int fact(int x) {
        if (x > 1) {
            return (x * fact(x - 1));
        }
        return 1;
    }

    public static void main(String[] args) {
        int n, mul;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number");
        n = input.nextInt();
        FactorialReccursion obj = new FactorialReccursion();
        mul = obj.fact(n);
        System.out.println("Factorial of " + n + " is " + mul);
    }
}