//To insert elements to an array

import java.util.Scanner;

//insert not replace
public class ArrayElements {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int size = input.nextInt();
        int[] a = new int[size];
        int[] b = new int[size + 1];
        System.out.println("Enter the elements of array");
        for (int i = 0; i < size; i++) {
            a[i] = input.nextInt();
        }
        System.out.println("Enter the position you want to insert value into");
        int pos = input.nextInt();
        System.out.println("Enter the value to be inserted at position " + pos);
        int val = input.nextInt();
        System.out.println("***Array Before Change***");
        for (int i = 0; i < size; i++) {
            System.out.print(a[i] + ",");
        }
        for (int i = 0; i < size + 1; i++) {
            if (i < pos - 1) {
                b[i] = a[i];
            } else if (i == pos - 1) {
                b[i] = val;
            } else {
                b[i] = a[i - 1];
            }
        }
        System.out.println("");
        System.out.println("***Array After Change***");
        for (int i = 0; i < size + 1; i++) {
            System.out.print(b[i] + ",");
        }
        System.out.println("");
    }
}
