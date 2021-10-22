import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int a = 0;
        int b = 0;
        int maxV=0;
        int max =0;
 
        for (int i=0;i<n;i++) {
             a = scan.nextInt();
             b = scan.nextInt();
             max += b-a;
             if (max > maxV){
                 maxV=max;
             }
        }
        System.out.print(maxV);
    }
}
