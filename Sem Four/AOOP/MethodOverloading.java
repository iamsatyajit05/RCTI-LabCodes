import java.util.Scanner;

class Shape {
    float area(float radius) {
        return 3.14f * radius * radius;
    }

    float area(float length, float width) {
        return length * width;
    }

    void hello(String name, int number, int age, String Address) {
        System.out.println("Hi");
    }
}

public class MethodOverloading {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Shape obj = new Shape();

        System.out.println("CIRCLE");
        System.out.print("Enter radius of circle: ");
        int radius = sc.nextInt();
        float areaOfCircle = obj.area(radius);
        System.out.println("Area of circle having radius " + radius + " is " + areaOfCircle);

        System.out.println("RECTANGLE");
        System.out.print("Enter length of rectangle: ");
        int length = sc.nextInt();
        System.out.print("Enter breadth of rectangle: ");
        int breadth = sc.nextInt();
        float areaOfRectangle = obj.area(length, breadth);
        System.out.println(
                "Area of rectangle having length " + length + ", breadth " + breadth + " is " + areaOfRectangle);

        sc.close();
    }
}
