import java.util.Scanner;

class Animal {
    String name;
    int age;

    Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void speak() {
        System.out.println("The animal makes sound.");
    }
}

class Dog extends Animal {
    String breed;

    Dog(String name, int age, String breed) {
        super(name, age);
        this.breed = breed;
    }

    @Override
    void speak() {
        System.out.println("The dog barks.");
    }

    void fetch() {
        System.out.println(name + " fetches the ball.");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter animal name: ");
        String animalName = input.nextLine();

        System.out.print("Enter animal age: ");
        int animalAge = input.nextInt();
        input.nextLine();

        Animal animal = new Animal(animalName, animalAge);
        System.out.println(animal.name + " is " + animal.age + " years old.");
        animal.speak();

        System.out.print("Enter dog name: ");
        String dogName = input.nextLine();

        System.out.print("Enter dog age: ");
        int dogAge = input.nextInt();
        input.nextLine();

        System.out.print("Enter dog breed: ");
        String dogBreed = input.nextLine();

        Dog dog = new Dog(dogName, dogAge, dogBreed);
        System.out.println(dog.name + " is a " + dog.breed + " and is " + dog.age + " years old.");
        dog.speak();
        dog.fetch();

        input.close();
    }
}
