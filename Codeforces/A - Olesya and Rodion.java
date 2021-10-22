import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int t = scan.nextInt();
        if (n==1 && t==10) {
            System.out.println(-1);
        }
        else
        {
            if(t==10){
                for(int i=0;i<n-1;i++){
                    System.out.print(1);
                }
                System.out.print(0);
            }
            else {
                for (int i = 0; i < n; i++) {
                    System.out.print(t);
                }
            }
        }
    }
}
