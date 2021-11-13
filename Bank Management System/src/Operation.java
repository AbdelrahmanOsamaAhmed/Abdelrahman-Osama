public class Operation {
    private int balance;

    public Operation(int balance){
        this.balance = balance;
    }

    public int getBalance() {
        return balance;
    }

    public void setBalance(int balance) {
        this.balance = balance;
    }

    public boolean makeWithdraw(int amount){
        if (amount > balance){
            System.out.println("You do not have enough money in your balance.\nCurrent Balance: "+this.getBalance());
            return false;
        }
        else {
            this.setBalance(this.getBalance()-amount);
            System.out.println("Done!\n"+amount+" was successfully withdrew.\nCurrent Balance: "+this.getBalance());
            return true;
        }
    }

    public void makeDeposit(int amount){
        this.setBalance(this.getBalance()+amount);
        System.out.println("Done!\n"+amount+" was successfully deposited.\nCurrent Balance: "+this.getBalance());
    }

}
