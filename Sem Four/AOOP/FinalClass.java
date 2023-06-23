final class A {
    private String message;

    public A(String message) {
        this.message = message;
    }

    public void displayMessage() {
        System.out.println("Message: " + message);
    }
}

public class FinalClass {
    public static void main(String[] args) {
        A finalObj = new A("This is a final class.");
        finalObj.displayMessage();
    }
}
