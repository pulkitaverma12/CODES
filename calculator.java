import java.util.Scanner;
public class calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("the calculator:");
        System.out.println("enter the 1st num:");
        double num1 = scanner.nextDouble();
        System.out.println("enter an operator(+,-,/,*):");
        char operator = scanner.next().charAt(0);
        System.out.println("enter the 2nd num:");
        double num2 = scanner.nextDouble();
        double result;
        switch (operator)
        {
            case '+':
            result = num1 + num2;
            System.out.println("the result is: "+result);
            break;
            case '-':
            result = num1 - num2;
            System.out.println("the result is:"+result);
            break;
            case '/':
            if (num2 !=0)
            {
                result = num1 / num2;
            System.out.println("the result is:"+result);
            }
            else
            {
                System.out.println("error:division by zero is not allowed");
            }
            break;
            case '*':
            result = num1 * num2;
            System.out.println("the result is:"+result);
            break;
            default:
            System.out.println("invalid operator.please use +,-,*, or /.");
        }
        scanner.close();
    }
    
}
