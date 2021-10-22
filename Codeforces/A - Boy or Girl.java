import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        int num=0;
        char[] c = s.toCharArray();
        Arrays.sort(c);
        for (int i=1;i<c.length;i++){
                if(c[i]==c[i-1]){
                    num++;
                }
            }
        num = c.length-num;
 
 
        if(num%2==0) {
            System.out.print("CHAT WITH HER!");
        }
        else {
            System.out.println("IGNORE HIM!");
        }
 
 
    }
}
