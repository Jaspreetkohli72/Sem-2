import java.util.*;
import java.io.*;

public class FileInfo {
    public static void main(String[] args) throws IOException {
        int nl = 1, nw = 0;
        char ch;
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        try {
            FileInputStream f = new FileInputStream(str);
            int n = f.available();
            for (int i = 0; i < n; i++) {
                ch = (char) f.read();
                if (ch == '\n') {
                    nl++;
                } else if (ch == ' ') {
                    nw++;
                }
            }
            System.out.println("Number of lines: " + nl);
            System.out.println("Number of words: " + (nl + nw));
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
