import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int[] arr = new int[m];
        int val = Integer.MAX_VALUE;
        for(int i=0;i<m;i++){
            arr[i]=scan.nextInt();
        }
        Arrays.sort(arr);
        for(int i=n-1;i<arr.length;i++){
            if(arr[i]-arr[i-n+1]<val){
                val = arr[i]-arr[i-n+1];
            }
        }
        System.out.print(val);
    }
}
