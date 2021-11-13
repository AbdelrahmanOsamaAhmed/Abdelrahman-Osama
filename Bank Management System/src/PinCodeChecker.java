public class PinCodeChecker {
    private final int pinCode;

    public PinCodeChecker(int pinCode){
        this.pinCode = pinCode;
    }

    public int getPinCode() {
        return pinCode;
    }

    public boolean checkPinCode(int pinCode){
        return this.pinCode == pinCode;
    }
}
