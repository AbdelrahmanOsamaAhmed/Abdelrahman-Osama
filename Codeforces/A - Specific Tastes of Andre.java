import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        for(int i =0;i<n;i++){
            arr[i] = scan.nextInt();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i];j++){
                System.out.print(1 + " ");
            }
            System.out.println();
        }
    }
}
