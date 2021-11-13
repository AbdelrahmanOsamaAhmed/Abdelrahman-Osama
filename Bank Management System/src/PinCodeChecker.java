public class PinCodeChecker {
    private final int pinCode;

    public PinCodeChecker(int pinCode){
        this.pinCode = pinCode;
    }

    public int getPinCode() {
        return pinCode;
    }

    public boolean checkPinCode(int pinCode){
        System.out.println("Checking Pin Code....");
        return this.pinCode == pinCode;
    }
}
