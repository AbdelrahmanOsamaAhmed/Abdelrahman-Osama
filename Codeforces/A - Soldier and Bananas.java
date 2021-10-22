import java.util.Arrays;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();
        int sum = 0;
        for (int i = 1; i <= z; i++) {
            sum += i * x;
        }
        if (sum > y) {
            System.out.print(sum - y);
        } else {
            System.out.print(0);
        }
    }
}
