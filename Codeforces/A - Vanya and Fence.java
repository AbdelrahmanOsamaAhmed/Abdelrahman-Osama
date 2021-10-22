import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int maxH = scan.nextInt();
        int width=0;
        int[] h = new int[n];
        for (int i=0;i<n;i++){
            h[i]=scan.nextInt();
            if (h[i]>maxH){width=width+2;}
            else{width++;}
        }
        System.out.print(width);
    }
}
