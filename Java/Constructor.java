public class Constructor {
    int a, b;

    public Constructor() {
        a = 1;
        b = 2;
    }

    public void print() {
        System.out.println("a = " + a + "\nb = " + b);
    }

    public static void main(String[] args) {
        Constructor obj = new Constructor();
        obj.print();
    }
}
