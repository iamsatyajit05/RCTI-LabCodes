import java.util.Scanner;

class Student {
    int enrollmentNo;
    String name;

    Student(int startEnrollmentNo, String startName) {
        enrollmentNo = startEnrollmentNo;
        name = startName;
    }

    void printData() {
        System.out.println("Name of Student is " + name);
    }
}

public class ClassObject {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the detail of 1st student:");
        System.out.print("Enrollement No: ");
        int enrollmentNo = sc.nextInt();
        sc.nextLine();
        System.out.print("Name: ");
        String name = sc.nextLine();
        Student std1 = new Student(enrollmentNo, name);

        System.out.println("\nEnter the detail of 2nd student:");
        System.out.print("Enrollement No: ");
        enrollmentNo = sc.nextInt();
        sc.nextLine();
        System.out.print("Name: ");
        name = sc.nextLine();
        Student std2 = new Student(enrollmentNo, name);

        System.out.println("\nEnter the detail of 3rd student:");
        System.out.print("Enrollement No: ");
        enrollmentNo = sc.nextInt();
        sc.nextLine();
        System.out.print("Name: ");
        name = sc.nextLine();
        Student std3 = new Student(enrollmentNo, name);

        sc.close();

        System.out.println("\nList of Student: ");
        std1.printData();
        std2.printData();
        std3.printData();
    }
}
