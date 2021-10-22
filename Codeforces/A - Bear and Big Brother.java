import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int i=0;
        while (!(x>y)){
            x=x*3;
            y=y*2;
            i++;
        }
        System.out.print(i);
    }
}
