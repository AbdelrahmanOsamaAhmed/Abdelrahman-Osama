public class BankAccount {
    private SecurityCodeChecker securityCode;
    private PinCodeChecker pinCode;
    private Operation operate;
    private int balance;

    public BankAccount (int securityCode, int pinCode){
        this.securityCode = new SecurityCodeChecker(securityCode);
        this.pinCode = new PinCodeChecker(pinCode);
        this.balance = 0;
        operate = new Operation(balance);
    }

    public void Deposit(int amount, int securityCode, int pinCode){
        if (this.securityCode.checkSecurityCode(securityCode) && this.pinCode.checkPinCode(pinCode)) {
            System.out.println("Depositing....");
            operate.makeDeposit(amount);
            this.balance = operate.getBalance();
            System.out.println("Operation succeeded!\n\n");
        }
        else {
            System.out.println("Access denied!\n\n");
        }
    }

    public void Withdraw(int amount, int securityCode,int pinCode){
        if (this.securityCode.checkSecurityCode(securityCode) && this.pinCode.checkPinCode(pinCode)) {
            System.out.println("Checking balance....");
            if (operate.makeWithdraw(amount)) {
                System.out.println("Operation succeeded!\n\n");
            } else {
                System.out.println("Operation failed!\n\n");
            }
        }
        else {
            System.out.println("Access denied!\n\n");
        }
    }



}
