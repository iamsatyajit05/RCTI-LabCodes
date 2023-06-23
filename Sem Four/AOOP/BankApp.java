class InsufficientFundsException extends Exception {
    public InsufficientFundsException() {
        super("Not Sufficient Fund");
    }

    @Override
    public String toString() {
        return "Not Sufficient Fund";
    }
}

class BankAccount {
    private double balance;

    BankAccount() {
        balance = 0;
        System.out.println("Congratualtion, your new account is created!");
    }

    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposit: Rs. " + amount);
    }

    void withdraw(double amount) throws InsufficientFundsException {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdraw: Rs. " + amount);
        } else {
            throw new InsufficientFundsException();
        }
    }

    double getBalance() {
        return balance;
    }
}

public class BankApp {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        account.deposit(25000);

        try {
            account.withdraw(20000);
            account.withdraw(4000);
            account.withdraw(2000);
        } catch (InsufficientFundsException e) {
            System.out.println("Error: " + e);
        }

        System.out.println("Current Balance: Rs. " + account.getBalance());
    }
}
