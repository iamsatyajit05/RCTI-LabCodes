class Product {
    static int id = 1;

    Product() {
        System.out.println("New product is created with Id " + id);
        id++;
    }

    static void printHelloworld() {
        System.out.println("Hello World");
    }
}

public class StaticKeyword {
    public static void main(String[] args) {
        Product.printHelloworld();
        Product.printHelloworld();

        new Product();
        new Product();
        new Product();

        System.out.println("Id of next objects will be " + Product.id);
    }
}