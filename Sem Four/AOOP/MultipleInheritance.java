import java.util.Scanner;

interface Mammals {
    void walk();
    void eat();
}

interface Birds {
    void fly();
    void eat();
}

class NewSpecie implements Mammals, Birds {
    String name;

    NewSpecie(String name) {
        this.name = name;
    }

    @Override
    public void eat() {
        System.out.println(name + " is eating");
    }

    @Override
    public void fly() {
        System.out.println(name + " is flying");
    }

    @Override
    public void walk() {
        System.out.println(name + " is walking");
    }
}

public class MultipleInheritance {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the name of new specie: ");
        String name = sc.nextLine();
        
        sc.close();

        NewSpecie obj = new NewSpecie(name);
        obj.eat();
        obj.fly();
        obj.walk();
    }
}