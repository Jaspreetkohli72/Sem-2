class ParentClass {

    public void fun1() {
        System.out.println("Parent Class");
    }
}

class ChildClass extends ParentClass {
    public void fun2() {
        System.out.println("Child Class");
    }
}

public class ClassEx {
    public static void main(String[] args) {
        ChildClass obj = new ChildClass();
        obj.fun2();
        obj.fun1();
    }
}
