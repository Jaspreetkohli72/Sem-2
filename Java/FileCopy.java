import java.io.FileInputStream;
import java.io.FileOutputStream;

public class FileCopy {
    public static void main(String[] args) {
        byte[] array = new byte[50];
        try {
            FileInputStream sourceFile = new FileInputStream("input.txt");
            FileOutputStream destFile = new FileOutputStream("output.txt");
            sourceFile.read(array);
            destFile.write(array);
            System.out.println("The input.txt file is copied to newFile.");
            sourceFile.close();
            destFile.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
