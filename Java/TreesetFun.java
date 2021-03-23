import java.util.TreeSet;

public class TreesetFun {
    public static void main(String[] args) {
        TreeSet<String> ts = new TreeSet<String>();

        ts.add("Hello");
        ts.add("World");
        ts.add(";");
        ts.add(";");

        System.out.println("TreeSet is" + ts);

        String check = "Geek";
        System.out.println("Contains " + check + " \n" + ts.contains(check));

        System.out.println("First Value \n" + ts.first());
        System.out.println("Last Value \n" + ts.last());

        ts.remove("World");
        System.out.println("After removing 'World' from treeset \n" + ts);

        ts.pollFirst();
        System.out.println("After removing first element of the treeset \n" + ts);

        ts.pollLast();
        System.out.println("After removing last element of the treeset \n");

        for (String value : ts) {
            System.out.print(value + ",");
        }
    }
}
