import java.util.TreeSet;
import java.util.Stack;

public class TreesetAndStack {
    public static void TreesetFun() {
        TreeSet<String> ts = new TreeSet<String>();

        ts.add("Hello");
        ts.add("World");
        ts.add(";");
        ts.add(";");

        System.out.println("TreeSet is " + ts);

        String check = "Geek";
        System.out.println("Contains " + check + " \n" + ts.contains(check));

        System.out.println("First Value \n" + ts.first());
        System.out.println("Last Value \n" + ts.last());

        ts.remove("World");
        System.out.println("After removing 'World' from treeset \n" + ts);

        ts.pollFirst();
        System.out.println("After removing first element of the treeset \n" + ts);

        ts.pollLast();
        System.out.println("After removing last element of the treeset \n" + ts);

        for (String value : ts) {
            System.out.print(value + ",");
        }
    }

    public static void StackFun() {

        Stack<Integer> stk = new Stack<>();

        boolean result = stk.empty();
        System.out.println("Is the stack empty? \n" + result);

        stk.push(78);
        stk.push(113);
        stk.push(90);
        stk.push(120);

        System.out.println("Elements in Stack: " + stk);
        result = stk.empty();
        System.out.println("Is the stack empty? \n" + result);
    }

    public static void main(String[] args) {
        System.out.println("\n\t***TREESET***\n");
        TreesetFun();
        System.out.println("\n----------------------------------\n");
        System.out.println("\t***STACK***\n");
        StackFun();
    }
}
