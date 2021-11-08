public class CEO {
    private static CEO ceo;
    private CEO(){
        ceo=new CEO();
    }
    public static CEO ceoOfCompany(){
        if (ceo == null){
            return new CEO();
        }
        else return ceo;
    }
}
