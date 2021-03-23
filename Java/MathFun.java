public class MathFun {
    public static void main(String[] args) {
        int a = 28, b = 4;

        System.out.println("Absolute value of '-5' is " + Math.abs(-5));

        System.out.println("Maximum number between " + a + " and " + b + " is " + Math.max(a, b));
        System.out.println("Minimum number between " + a + " and " + b + " is " + Math.min(a, b));

        System.out.println("Square root of " + b + " is " + Math.sqrt(b));
        System.out.println("Cube root of 729 is " + Math.cbrt(729));

        System.out.println(a + " to the power " + b + " is " + Math.pow(a, b));

        System.out.println("Logarithm of " + a + " is " + Math.log(a));

        System.out.println("Log10 of " + b + " is " + Math.log10(b));

        System.out.println("Exponent of " + a + " is " + Math.exp(a));
        System.out.println("Ceil value of 83.42 is " + Math.ceil(83.42));
        System.out.println("Floor value of 83.42 is " + Math.floor(83.42));
        System.out.println("Value of sin90 is " + Math.sin(90));
        System.out.println("Value of tan60 is " + Math.tan(60));
    }
}
