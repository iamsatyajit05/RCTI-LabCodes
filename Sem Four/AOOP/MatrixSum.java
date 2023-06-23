import java.util.Scanner;

public class MatrixSum {
    public static void main(String[] args) {
        int arr1[][] = new int[3][3];
        int arr2[][] = new int[3][3];
        int arr3[][] = new int[3][3];
        Scanner sc = new Scanner(System.in);

        System.out.println("Matrix 1");
        for (int i = 0; i < 3; i++) {
            System.out.println("\nValue for " + (i + 1) + " row:");
            for (int j = 0; j < 3; j++) {
                System.out.print("Enter value for " + (j + 1) + " column: ");
                arr1[i][j] = sc.nextInt();
            }
        }

        System.out.println("\nMatrix 2");
        for (int i = 0; i < 3; i++) {
            System.out.println("\nValue for " + (i + 1) + " row:");
            for (int j = 0; j < 3; j++) {
                System.out.print("Enter value for " + (j + 1) + " column: ");
                arr2[i][j] = sc.nextInt();
            }
        }

        sc.close();

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        System.out.println("\nAddition of Matrix 1 and Matrix 2:");

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arr3[i][j] + " ");
            }
            System.out.println(" ");
        }
    }
}
