import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        char[] c = s.toCharArray();
        char[] low = s.toLowerCase().toCharArray();
        int x = 0,y=0;
        for (int i=0;i<s.length();i++){
            if (c[i]==low[i]){
                x++;
            }
            else {
                y++;
            }
        }
        if (y>x){
            System.out.print(s.toUpperCase());
        }
        else {System.out.print(s.toLowerCase());}
    }
}
