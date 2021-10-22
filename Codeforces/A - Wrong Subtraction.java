import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        while (y>0){
            String s = Integer.toString(x);
            if (s.charAt(s.length()-1)=='0'){
                x=x/10;
            }
            else {
                x--;
            }
            y--;
 
        }
        System.out.print(x);
    }
}
