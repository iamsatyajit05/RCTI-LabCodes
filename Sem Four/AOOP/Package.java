import java.util.Scanner;
import Calculator.Calculator;

public class Package {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calculator calculator = new Calculator();

        System.out.print("Enter the first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = sc.nextInt();

        sc.close();
        
        int addition = calculator.add(num1, num2);
        int difference = calculator.subtract(num1, num2);
        int multiplication = calculator.multiply(num1, num2);
        double divison = calculator.divide(num1, num2);
        
        System.out.println("Addition: " + addition);
        System.out.println("Difference: " + difference);
        System.out.println("Multiplication: " + multiplication);
        System.out.println("Divison: " + divison);
    }
}
