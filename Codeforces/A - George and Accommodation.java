import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int count=0;
        for (int i=0;i<n;i++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            if (y-x>1){
                count ++;
            }
        }
        System.out.print(count);
    }
}
