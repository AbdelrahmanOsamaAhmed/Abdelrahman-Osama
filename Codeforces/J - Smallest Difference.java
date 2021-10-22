import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] results = new int[n];
        for(int i=0; i<n;i++){
            int num = scan.nextInt();
            int[] arr = new int[num];
            for(int j = 0 ; j<num;j++){
                arr[j]= scan.nextInt();
            }
            Arrays.sort(arr);
            int counter = 0;
            for(int j=1;j<num;j++){
                int c=1;
                if(arr[j]-arr[j-1]<=1){
                    c++;
                    for(int k = j-2;k>=0;k--){
                        if(arr[j]-arr[k]<=1){
                            c++;
                        }
                    }
                }
                if(c>counter){
                    counter=c;
                }
            }
            results[i]=counter;
 
        }
        for (int x : results){
            System.out.println(x);
        }
 
    }
}
