import java.util.Scanner;
 
public class MaxNum {
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        int n1 = sc.nextInt();
        System.out.print("Enter the second number: ");
        int n2 = sc.nextInt();
        System.out.print("Enter the third number: ");
        int n3 = sc.nextInt();

        sc.close();

        // if (n1 > n2 && n1 > n3) {
        //     System.out.println(n1 + " is biggest number");
        // }
        // else if (n2 > n3) {
        //     System.out.println(n2 + " is biggest number");
        // }
        // else {
        //     System.out.println(n3 + " is biggest number");
        // }

        int maxNumber = (n1 > n2 && n1 > n3) ? n1 : ((n2 > n3) ? n2 : n3);
        System.out.println(maxNumber + " is biggest number");
    }
}
