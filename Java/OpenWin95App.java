class OpenWin95App {
    public static void main(String[] args) {
        Runtime app = Runtime.getRuntime();
        try {
            app.exec("notepad");
        } catch (Exception Ex) {
            System.out.println("Error: " + Ex.toString());
        }
    }
}