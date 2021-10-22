import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        boolean state = true;
        for(int i =0;i<num;i++){
            int x=scan.nextInt();
            if(x==1){
                state = false;
                break;
            }
        }
        if(state){System.out.print("EASY");}
        else {System.out.print("HARD");}
    }
}
