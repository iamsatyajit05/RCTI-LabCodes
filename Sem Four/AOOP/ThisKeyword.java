import java.util.Scanner;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void printData() {
        System.out.println("Age of " + name + " is " + age);
    }
}

public class ThisKeyword {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name of person: ");
        String name = sc.nextLine();
        System.out.print("Enter age of person: ");
        int age = sc.nextInt();

        sc.close();

        Person p1 = new Person(name, age);
        p1.printData();
    }
}
