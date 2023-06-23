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

class Player extends Person {
    private String sport;

    Player(String name, int age, String sport) {
        super(name, age);
        this.sport = sport;
    }

    void getPlayerInfo() {
        System.out.println("Sport: " + sport);
    }
}

public class HierarchicalInheritance {
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

        System.out.print("Enter your sport: ");
        String sport = sc.nextLine();

        Student saty = new Student(name, age, semester, rollno);
        System.out.println("\nStudent Info: ");
        saty.getPersonInfo();
        saty.getStudentInfo();

        Player saty_player = new Player(name, age, sport);
        System.out.println("\nPlayer Info: ");
        saty_player.getPlayerInfo();

        sc.close();
    }
}
