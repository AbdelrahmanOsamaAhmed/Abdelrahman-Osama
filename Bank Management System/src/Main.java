public class Main {
    public static void main(String[] args) {
        BankAccount AbdelrahmanOsama = new BankAccount(13259547,123);
        AbdelrahmanOsama.Deposit(5000,13259547,123);
        AbdelrahmanOsama.Withdraw(2000,13259547,123);
        AbdelrahmanOsama.Withdraw(2000,13259547,122);
        AbdelrahmanOsama.Withdraw(2000,132595455,123);
        AbdelrahmanOsama.Withdraw(5000,13259547,123);
    }
}
