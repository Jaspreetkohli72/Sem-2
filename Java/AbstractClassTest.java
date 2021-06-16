abstract class AbstractClass {
    abstract void test();
}

class SubClass extends AbstractClass {
    void test() {
        System.out.println("Test Successful");
    }

    public static void main(String args[]) {
        AbstractClass obj = new SubClass();
        obj.test();
    }
}