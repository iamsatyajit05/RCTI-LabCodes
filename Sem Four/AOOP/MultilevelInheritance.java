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

class GraduateStudent extends Student {
    private String thesis;

    GraduateStudent(String name, int age, int semester, int rollno, String thesis) {
        super(name, age, semester, rollno);
        this.thesis = thesis;
    }

    void getGraduateStudentInfo() {
        System.out.println("Thesis: " + thesis);
    }
}

public class MultilevelInheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.print("Enter your semester: ");
        int semester = sc.nextInt();

        System.out.print("Enter your rollno: ");
        int rollno = sc.nextInt();

        sc.nextLine();

        System.out.print("Enter your thesis: ");
        String thesis = sc.nextLine();

        sc.close();

        GraduateStudent saty = new GraduateStudent(name, age, semester, rollno, thesis);
        saty.getPersonInfo();
        saty.getStudentInfo();
        saty.getGraduateStudentInfo();
    }
}
