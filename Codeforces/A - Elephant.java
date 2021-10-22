import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int steps=0;
        while (x>0){
            if (x>5){
                x = x-5;
            }
            else {
                x = x-x;
            }
            steps++;
        }
        System.out.print(steps);
    }
}
