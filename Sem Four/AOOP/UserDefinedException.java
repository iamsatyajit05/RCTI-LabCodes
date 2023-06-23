import java.util.Scanner;

class DivideByZeroException extends Exception {
    public DivideByZeroException() {
        super("Divide by zero error");
    }

    @Override
    public String toString() {
        return "Divide by zero error";
    }
}

public class UserDefinedException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the value of numerator: ");
        int numerator = sc.nextInt();
        System.out.print("Enter the value of denominator: ");
        int denominator = sc.nextInt();
        
        sc.close();

        try {
            if (denominator == 0) {
                throw new DivideByZeroException();
            }
            double result = numerator / denominator;
            System.out.println("Result: " + result);
        } catch (DivideByZeroException e) {
            System.out.println("Error: " + e);
        }

    }
}
