import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class HashMapExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<Integer, String> studentData = new HashMap<>();
        
        System.out.print("Enter the total number of student: ");
        int length = sc.nextInt();
        
        for (int i = 0; i < length; i++) {
            System.out.print("\nEnter the enrollement number of student: ");
            int enrollmentNumber = sc.nextInt();
            sc.nextLine();
            System.out.print("Enter the name of student: ");
            String name = sc.nextLine();
            studentData.put(enrollmentNumber, name);
        }

        System.out.print("\nEnter enrollement number of student to search: ");
        int enrollmentNumber = sc.nextInt();

        sc.close();

        if (studentData.containsKey(enrollmentNumber)) {
            String studentName = studentData.get(enrollmentNumber);
            System.out.println("\nStudent Name for Enrollment Number " + enrollmentNumber + " is " + studentName);
        } else {
            System.out.println("\nNo student found with Enrollment Number: " + enrollmentNumber);
        }
    }
}
