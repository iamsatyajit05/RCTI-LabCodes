import java.util.Scanner;

class Person {
    private String name;
    private int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void getPersonInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Student extends Person {
    private int semester;
    private int rollno;

    Student(String name, int age, int semester, int rollno) {
        super(name, age);
        this.semester = semester;
        this.rollno = rollno;
    }

    void getStudentInfo() {
        System.out.println("Semester: " + semester);
        System.out.println("Rollno: " + rollno);
    }
}

public class SingleInheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sc.nextLine();

        System.out.println("Enter your age: ");
        int age = sc.nextInt();

        System.out.println("Enter your semester: ");
        int semester = sc.nextInt();

        System.out.println("Enter your rollno: ");
        int rollno = sc.nextInt();

        Student saty = new Student(name, age, semester, rollno);
        saty.getPersonInfo();
        saty.getStudentInfo();

        sc.close();
    }
}
