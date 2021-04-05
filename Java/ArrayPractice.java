//to declare array and insert elements

import java.util.Scanner;

public class ArrayPractice {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int size = input.nextInt();
        int[] a = new int[size];
        System.out.println("Enter the elements of array");
        for (int i = 0; i < size; i++) {
            a[i] = input.nextInt();
        }
        System.out.println("");
        for (int i = 0; i < size; i++) {
            System.out.print(a[i] + ",");
        }
        System.out.println("");
        input.close();
    }
}
