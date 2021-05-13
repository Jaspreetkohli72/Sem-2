import java.util.Scanner;

class InnerInstanceVariable {
    int a;

    public InnerInstanceVariable() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the value of \'a\'");
        a = input.nextInt();
        input.close();
    }

    public void display() {
        System.out.println("" + a);
    }
}

public class InstanceVariable {
    public static void main(String[] args) {
        InnerInstanceVariable instanceVar = new InnerInstanceVariable();
        instanceVar.display();
    }
}