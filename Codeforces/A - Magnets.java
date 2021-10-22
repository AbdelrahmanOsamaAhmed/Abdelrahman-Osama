import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int[] x = new int[num];
        int groups=1;
        x[0]=scan.nextInt();
        for (int i=1;i<num;i++){
            x[i]=scan.nextInt();
            if(x[i]!=x[i-1]){
                groups++;
            }
        }
        System.out.print(groups);
    }
}
