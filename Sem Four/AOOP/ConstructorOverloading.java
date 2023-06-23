public class ConstructorOverloading {
    private int value;

    public ConstructorOverloading() {
        value = 0;
    }

    public ConstructorOverloading(int number) {
        value = number;
    }

    public ConstructorOverloading(int number1, int number2) {
        value = number1 + number2;
    }

    public int getValue() {
        return value;
    }

    public static void main(String[] args) {
        ConstructorOverloading obj1 = new ConstructorOverloading();
        ConstructorOverloading obj2 = new ConstructorOverloading(5);
        ConstructorOverloading obj3 = new ConstructorOverloading(2, 3);

        System.out.println("Value of obj1: " + obj1.getValue());
        System.out.println("Value of obj2: " + obj2.getValue());
        System.out.println("Value of obj3: " + obj3.getValue());
    }
}
