import java.util.Scanner;

public class FirstPrimeNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the nth term for Prime Number: ");
        int num = sc.nextInt();
        sc.close();

        int count = 0, i = 2;
        while (count < num) {
            Boolean isPrime = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.print(i + " ");
                count = count + 1;
            }
            i = i + 1;
        }
    }
}
