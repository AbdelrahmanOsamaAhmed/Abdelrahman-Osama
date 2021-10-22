import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        char[] c = s.toCharArray();
        int x=0;
        boolean danger = false;
        for (int i=1;i<c.length;i++){
            if (c[i-1]==c[i]){
                x++;
                if(x>=6){
                    danger = true;
                    break;
                }
            }
            else{
                x=0;
            }
        }
        if (danger){
        System.out.print("YES");
        }
        else {System.out.print("NO");}
 
    }
}
