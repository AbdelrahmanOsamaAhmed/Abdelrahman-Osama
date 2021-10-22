import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int[] arr = new int[x];
        for(int i=0;i<x;i++){
            int c = scan.nextInt();
            int[] t = new int[c];
            for(int j=0;j<c;j++){
                t[j]=scan.nextInt();
            }
            for(int j=1;j<c;j++){
                if(t[j]!=t[j-1]) {
                    if (j == c - 1) {
                        arr[i]=j+1;
                        break;
 
                    } else {
                        if (t[j + 1] == t[j - 1]) {
                            arr[i] = j + 1;
                            break;
                        } else {
                            arr[i] = j;
                            break;
                        }
                    }
                }
            }
        }
        for(int i:arr){
        System.out.println(i);
    }
    }
}
