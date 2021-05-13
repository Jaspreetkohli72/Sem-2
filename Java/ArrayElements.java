//To insert elements to an array

import java.util.Scanner;

//insert not replace
public class ArrayElements {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the position you want to insert value into");
        int pos = input.nextInt();
        System.out.println("Enter the value to be inserted at position " + pos);
        int val = input.nextInt();
        int[] a = new int[] { 1, 2, 3, 4, 5 };
        int[] b = new int[6];
        System.out.println("***Array Before Change***");
        for (int i = 0; i < 5; i++) {
            System.out.print(a[i] + ",");
        }
        for (int i = 0; i < 6; i++) {
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
        for (int i = 0; i < 6; i++) {
            System.out.print(b[i] + ",");
        }
        System.out.println("");
        input.close();
    }
}
