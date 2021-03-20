//To print prime numbers from 1-1000

public class Prime1To1000 {
    public static void main(String[] args) {
        System.out.println("The prime numbers from 1-1000 are:");
        for (int i = 1; i <= 1000; i++) {
            int ctr = 0;
            for (int num = i; num >= 1; num--) {
                if (i % num == 0)
                    ctr++;
            }
            if (ctr == 2)
                System.out.print(i + ",");
        }
        System.out.println("");
    }
}
