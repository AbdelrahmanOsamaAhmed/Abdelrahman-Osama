import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int[] arr = new int[x];
        int sum=0;
        int sumForMe=0;
        int number=0;
        for(int i=0;i<x;i++){
            arr[i]=scan.nextInt();
            sum+=arr[i];
        }
 
        Arrays.sort(arr);
        int[] coins = new int[arr.length];
        for (int i=0;i<coins.length;i++){
            coins[i]=arr[coins.length-1-i];
        }
        for (int i=0;i<arr.length;i++){
            sumForMe+= coins[i];
            sum = sum - coins[i];
            if (sumForMe>sum){
                System.out.print(i+1);
                break;
            }
        }
 
    }
 
}
