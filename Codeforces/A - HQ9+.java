import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        char[] c = scan.nextLine().toCharArray();
        boolean state=false;
        for (int i=0;i<c.length;i++){
            if (c[i]=='H' || c[i]=='Q' || c[i]=='9'){
                state=true;
                break;
            }
        }
        if (state){System.out.print("YES");}
        else {System.out.print("NO");}
    }
}
