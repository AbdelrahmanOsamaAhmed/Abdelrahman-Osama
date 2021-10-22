import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        String s1 = scan.nextLine();
        String s = s1.toLowerCase();
        String h = "hello";
                int j=0;
        boolean l =false;
        for (int i=0;i<s.length();i++){
            if (s.charAt(i)==h.charAt(j)){
                j++;
                if (j==5){
                    l=true;
                    break;
                }
            }
        }
        if (l){
            System.out.print("YES");
        }
        else { System.out.print("NO");}
 
    }
}
