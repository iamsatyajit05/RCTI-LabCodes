import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class HashSetExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<String> colors = new HashSet<>();
        
        System.out.print("Enter the total number of colors: ");
        int length = sc.nextInt();
        sc.nextLine();
        System.out.println();

        for (int i = 0; i < length; i++) {
            System.out.print("Enter the name of color: ");
            String color = sc.nextLine();
            colors.add(color);
        }

        sc.close();

        System.out.println("\nColors in the collection:");
        for (String color : colors) {
            System.out.println(color);
        }
    }
}
