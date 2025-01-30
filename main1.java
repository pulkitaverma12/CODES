interface calculator
{
    double add(int a,int b);
    double subtract(int a,int b);
    double multiply(int a,int b);
    double divide(int a,int b);
}
class simplecalculator implements calculator
{
   public  double add(int a,int b)
    {
        return a + b;
    }
    public double subtract(int a,int b)
    {
        return a - b;
    }
    public double multiply(int a,int b)
    {
        return a * b;
    }
    public double divide(int a, int b) 
    {
        if (b == 0) {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
        return (double) a / b;
    }
}
    // Main class to test the implementation
public class main1 {
        public static void main(String[] args) {
            // Create an instance of SimpleCalculator
            simplecalculator calc = new simplecalculator();
    
            // Test the methods
            System.out.println("Addition: " + calc.add(10, 5));
            System.out.println("Subtraction: " + calc.subtract(10, 5));
            System.out.println("Multiplication: " + calc.multiply(10, 5));
            System.out.println("Division: " + calc.divide(10, 5));
        }
    }
