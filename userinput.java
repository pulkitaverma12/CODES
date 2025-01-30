import java.util.Scanner;
public class userinput {
    public static void main(String[] args) {
        Scanner myObj = new
        Scanner(System.in);
        System.out.println("enter name,age and salary:");
        String name= myObj.nextLine();
        int age = myObj.nextInt();
        double salary = myObj.nextDouble();
        System.out.println("name:"+name);
        System.out.println("age:"+age);
        System.out.println("salary:"+salary);
    }
}
