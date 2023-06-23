import java.util.Scanner;

class Rectangle {
    int length;
    int breadth;

    Rectangle() {
        length = 10;
        breadth = 20;
    }

    Rectangle(int startlength, int startbreadth) {
        length = startlength;
        breadth = startbreadth;
    }

    void printData() {
        System.out.println("\nRectangle Info:");
        System.out.println("length: " + length);
        System.out.println("breadth: " + breadth);
    }
}

public class Constructor {
    public static void main(String[] args) {
        System.out.println("Rectangle 1");
        Rectangle obj1 = new Rectangle();
        obj1.printData();

        System.out.println("\nRectangle 2");
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of rectangle: ");
        int length = sc.nextInt();
        System.out.print("Enter breadth of rectangle: ");
        int breadth = sc.nextInt();

        sc.close();

        Rectangle obj2 = new Rectangle(length, breadth);
        obj2.printData();
    }
}
