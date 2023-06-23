class Car {
    private String name;
    private int topSpeed;

    public Car(String name, int topSpeed) {
        this.name = name;
        this.topSpeed = topSpeed;
    }

    @Override
    public String toString() {
        return "Car Name: " + name + ", Top Speed: " + topSpeed;
    }
}

public class ToString {
    public static void main(String[] args) {
        Car car1 = new Car("Ferrari", 350);
        Car car2 = new Car("Lamborghini", 370);
        Car car3 = new Car("Porsche", 330);
        Car car4 = new Car("Audi", 300);
        Car car5 = new Car("BMW", 320);

        System.out.println(car1);
        System.out.println(car2);
        System.out.println(car3);
        System.out.println(car4);
        System.out.println(car5);
    }
}
