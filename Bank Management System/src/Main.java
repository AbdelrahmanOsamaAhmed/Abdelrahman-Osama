import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("""


                Welcome to Virtual Bank. We ara happy to serve you.""");
        ArrayList<BankAccount> accounts = new ArrayList<>();
        while (true) {
            System.out.println("""
                    
                    Kindly choose one of the following options:
                    1- Open a new account.
                    2- Deposit to an existing account.
                    3- Withdraw from an existing account.
                    4- Exit.""");


            int option = scan.nextInt();
            scan.nextLine();
            if (option == 1) {
                System.out.println("Please enter the name of your account: ");
                String name = scan.nextLine();
                System.out.println("Please enter a security code: ");
                int securityCode = scan.nextInt();
                System.out.println("Please enter a PIN code: ");
                int pinCode = scan.nextInt();
                accounts.add(new BankAccount(name, securityCode, pinCode));
            } else if (option == 2) {
                System.out.println("Please choose the account: ");
                for (int i = 0 ; i < accounts.size() ; i++){
                    System.out.println((i+1) + "- "+accounts.get(i).getName());
                }
                int account = scan.nextInt() - 1;
                System.out.println("Please enter a security code: ");
                int securityCode = scan.nextInt();
                System.out.println("Please enter a PIN code: ");
                int pinCode = scan.nextInt();
                System.out.println("Please enter the amount of cash: ");
                int amountOfCash = scan.nextInt();
                accounts.get(account).Deposit(amountOfCash, securityCode, pinCode);
            } else if (option == 3) {
                System.out.println("Please choose the account: ");
                for (int i = 0; i < accounts.size(); i++) {
                    System.out.println((i + 1) + "- " + accounts.get(i).getName());
                }
                int account = scan.nextInt() - 1;
                System.out.println("Please enter a security code: ");
                int securityCode = scan.nextInt();
                System.out.println("Please enter a PIN code: ");
                int pinCode = scan.nextInt();
                System.out.println("Please enter the amount of cash: ");
                int amountOfCash = scan.nextInt();
                accounts.get(account).Withdraw(amountOfCash, securityCode, pinCode);
            }
            else {
                break;
            }

        }

    }
}
