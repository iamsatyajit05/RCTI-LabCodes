import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        sc.close();
        int mainNum = num, output = 0;

        while (num > 0) {
            int temp = num % 10;
            num = num / 10;
            output = (output * 10) + temp;
        }

        System.out.println("Reverse of " + mainNum + " is " + output);
    }
}
