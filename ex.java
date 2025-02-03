public class ex {
    public static void main(String[] args) {
        int x, y;
        try {
            x = 0;
            y = 1 / x;  
            System.out.println("This will not be printed.");
        } catch (ArithmeticException e) {  
            System.out.println("Division by zero.");
        }
        System.out.println("After catch statement.");
    }
}
