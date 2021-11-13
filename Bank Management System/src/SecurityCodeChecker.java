public class SecurityCodeChecker {
    private final int securityCode;

    public SecurityCodeChecker(int securityCode){
        this.securityCode = securityCode;
    }

    public int getSecurityCode() {
        return securityCode;
    }
    public boolean checkSecurityCode(int securityCode){
        System.out.println("Checking Security Code....");
        return this.securityCode == securityCode;
    }
}
